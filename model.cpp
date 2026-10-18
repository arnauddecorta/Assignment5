#include "model.h"

#include <string>
#include<map>
#include<iostream>


Model::Model(std::string data,int k )
{
    std::string word ;
    for (int i=0; i<data.size()-k; i++)
    {
        word = data.substr(i, k);
        WordCount[word]++;
    }
}
std::map<std::string, int> Model::getWordCount()
{
    return WordCount;
}
Model::Model(std::string data, std::string word)
{
    for (std::size_t i = 0; i + word.size() < data.size(); i++)
    {
        if (data.substr(i, word.size()) == word)
        {
            char following = data[i + word.size()];
            Continuation[following]++;
        }
    }
}

std::map<char, int> Model::getContinuation()
{
    return Continuation;
}

std::map<std::string, int > WordCount;
std::map<char, int> Continuation;
