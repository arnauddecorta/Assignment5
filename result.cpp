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



Result::Result(std::string kword, Model data, float alpha)
{
    this->kword = kword;

    auto continuation = data.getContinuation();

    int total = 0;

    for (auto element : continuation)
    {
        total += element.second;
    }

    float denominator = total + 27 * alpha;
    float best_probability = -1.0;
    if (denominator == 0)
    {
        following_letter = '\0';
        return;
    }

    for (char c = 'a'; c <= 'z'; c++)
    {
        int count = continuation[c];
        float probability = (count + alpha) / denominator;

        if (probability > best_probability)
        {
            best_probability = probability;
            following_letter = c;
        }
    }

    int count = continuation[' '];
    float probability = (count + alpha) / denominator;

    if (probability > best_probability)
    {
        following_letter = ' ';
    }
}

