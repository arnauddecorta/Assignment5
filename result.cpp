#include <string>
#include<map>
#include<iostream>
#include"model.h"
#include"result.h"
#include <random>  
#include <vector> 

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



Result::Result(std::string kword, Model data, float alpha)
{
    this->kword = kword;

    auto continuation = data.getContinuation();

    int total = 0;
    for (auto element : continuation)
    {
        total += element.second;
    }

    if (total == 0 && alpha == 0.0)
    {
        following_letter = '\0';
        return;
    }

    std::vector<char> characters;
    std::vector<double> weights;

    for (char c = 'a'; c <= 'z'; c++)
    {
        characters.push_back(c);
        weights.push_back(continuation[c] + alpha);
    }

    characters.push_back(' ');
    weights.push_back(continuation[' '] + alpha);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::discrete_distribution<> distribution(weights.begin(), weights.end());

    following_letter = characters[distribution(gen)];
}


char Result::getFollowingLetter()
{
    return following_letter;
}

