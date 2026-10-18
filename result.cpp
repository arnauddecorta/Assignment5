#include <string>
#include<map>
#include<iostream>
#include"model.h"
#include"result.h"

Result::Result(Model data)
{


    int best_count = -1;

    for (auto element : data.getWordCount())
    {
        if (element.second > best_count)
        {
            best_count = element.second;
            kword = element.first;
        }
    }
}

std::string Result::getWord()
{
    return kword;
}

