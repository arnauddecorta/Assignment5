#include <string>
#include<map>
#include<model.h>

class Result{
public:
Result(std::string kword="", Model data);

Result(Model data);

private:
std::string kword;
char following_letter;

};