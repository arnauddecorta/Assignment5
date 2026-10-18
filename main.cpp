#include<iostream>
#include"model.h"
#include"result.h"
#include<fstream>

int main(int argc, char* argv[])
{

    //Error messages
        //argument error
    if (argc !=4 && argc !=6)
    {
        std::cerr<< "Invalid number of argument"<< "\n";
        return 1;
    }
    if (argc==6 && std::string(argv[1]) !="-a")
    {
        std::cerr<< "Unsupported option"<< "\n";
        return 1;
    }
    int k;
    std::string filename;
    int l;
    if (argc==4)
    {
        int k = std::stoi(argv[1]);
        std::string filename = argv[2];
        int l= std::stoi(argv[3]);
        if (l<k)
        {
          std::cerr<< "Error, wanted output smaller than word size"<< "\n";
        return 1;  
        }
    }
        if (argc==6)
    {
        int k = std::stoi(argv[3]);
        std::string filename = argv[4];
        int l= std::stoi(argv[5]);
        if (l<k)
        {
          std::cerr<< "Error, wanted output smaller than word size"<< "\n";
        return 1;  
        }
    }
    
    std::ifstream file(filename);

    if (!file)
    {
        std::cerr << "Error: cannot open file " << filename << "\n";
        return 1;
    }






    
}