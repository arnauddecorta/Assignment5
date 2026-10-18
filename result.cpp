#include <string>
#include<map>
#include<iostream>
#include"model.h"
#include"result.h"

Result::Result(Model data)
{
    std::cout << "Map size in Result: "
              << data.getWordCount().size() << std::endl;

    int best_count = -1;

    for (auto element : data.getWordCount())
    {
        if (element.second > best_count)
        {
            best_count = element.second;
            kword = element.first;
        }
    }

    std::cout << "Best count: " << best_count << std::endl;
    std::cout << "Kword in constructor: [" << kword << "]" << std::endl;
}

std::string Result::getWord()
{
    return kword;
}

