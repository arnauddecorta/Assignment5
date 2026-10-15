#include<iostream>

int main(int argc, char* argv[])
{
    if (argc !=3 && argc !=5)
    {
        std::cerr<< "Invalid number of argument"<< "\n";
        return 1;
    }
}