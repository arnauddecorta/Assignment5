#include "model.h"

#include <string>
#include<map>


Model::Model(std::string data,int k )
{
    std::string word ;
    for (int i; i<data.size(); i++)
    {
        word=data[i, i+k];
        WordCount[word]++;
    }
}

Model::Model(std::string data, std::string word)
{
    //TO DO
}
std::map<std::string, int > WordCount;
std::map<std::string, std::map<char, int>> Continuation;
