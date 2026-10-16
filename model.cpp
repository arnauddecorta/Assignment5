#include<model.h>

#include <string>
#include<map>

class Model
{
public:
    Model (std::string data="",int k=0 )
    {
        std::string word ;

        for (int i; i<data.size(); i++)
        {
            word=data[i, i+k];
            WordCount[word]++;
        }

    }
    Model(std::string data, std::string word)
    {
        
    }



private: 
        std::map<std::string, int > WordCount;
        std::map<std::string, std::map<char, int>> Continuation;
};