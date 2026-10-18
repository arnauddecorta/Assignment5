#ifndef MODEL_H
#define MODEL_H
#include <string>
#include<map>

class Model
{
public:
    Model (std::string data="",int k=0 );
    Model (std::string data="", std::string word="");
    std::map<std::string, int> getWordCount();
    std::map<char, int> getContinuation();


private: 
        std::map<std::string, int > WordCount;
        std::map<char, int> Continuation;
};

#endif