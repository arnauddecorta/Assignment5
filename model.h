#define MMODEL_H

#include <string>
#include<map>

class Model
{
public:
    Model (std::string data="",int k=0 );



private: 
        std::map<std::string, int > FirstWOrd;
        std::map<std::string, std::map<char, int>> Continuation;
};