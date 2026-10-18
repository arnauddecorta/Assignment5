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
    std::cout << "WordCount size: " << WordCount.size() << std::endl;
}
std::map<std::string, int> Model::getWordCount()
{
    return WordCount;
}
Model::Model(std::string data, std::string word)
{
    //TO DO
}

std::map<std::string, int > WordCount;
std::map<std::string, std::map<char, int>> Continuation;
