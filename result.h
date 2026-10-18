#ifndef RESULT_H
#define RESULT_H
#include <string>
#include<map>
#include"model.h"

class Result{
public:
Result(std::string kword, Model data, float alpha=0.0);

Result(Model data);
std::string getWord();
char getFollowingLetter();

private:
std::string kword;
char following_letter;

};

#endif