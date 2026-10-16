#include<model.h>

#include <string>
#include<map>

class Model
{
public:
    Model (std::string data="",int k=0 )
    {
        std::string word ;

        for (i, i<len(data), i++)
        {
            word=data[i, i+k];
            FirstWord.add(word);

        }

    }



private: 
        std::map<std::string, int > FirstWOrd;
        std::map<std::string, std::map<char, int>> Continuation;
};