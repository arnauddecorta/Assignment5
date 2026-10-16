#include<iostream>

int main(int argc, char* argv[])
{

    //Error messages
        //argument error
    if (argc !=3 && argc !=5)
    {
        std::cerr<< "Invalid number of argument"<< "\n";
        return 1;
    }
    if (argc==5 && argv[1] !="-a")
    {
        std::cerr<< "Unsupported option"<< "\n";
        return 1;
    }
    if (argc==3)
    {
        int k = std::stoi(argv[1]);
        int l= std::stoi(argv[3]);
        if (l<k)
        {
          std::cerr<< "Error, wanted output smaller than word size"<< "\n";
        return 1;  
        }
    }
        if (argc==5)
    {
        int k = std::stoi(argv[3]);
        int l= std::stoi(argv[5]);
        if (l<k)
        {
          std::cerr<< "Error, wanted output smaller than word size"<< "\n";
        return 1;  
        }
    }

}