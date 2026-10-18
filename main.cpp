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
    float alpha;
    int k;
    std::string filename;
    int l;
    if (argc==4)
    {
        alpha=0.0;
        k = std::stoi(argv[1]);
        filename = argv[2];
        l= std::stoi(argv[3]);
        if (l<k)
        {
          std::cerr<< "Error, wanted output smaller than word size"<< "\n";
        return 1;  
        }
    }
        if (argc==6)
    {
        k = std::stoi(argv[3]);
        filename = argv[4];
        l= std::stoi(argv[5]);
        alpha=std::stof(argv[2]);
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




    //Execution bloc

        std::string data(
        (std::istreambuf_iterator<char>(file)),std::istreambuf_iterator<char>()
    );

    Model model(data, k);
  
    Result result(model);
    
    std::string word=result.getWord();
    

    while (word.size() < l)
{
        std::string kword = word.substr(word.size() - k, k);

        Model continuation(data, kword);
        Result next(kword, continuation, alpha);

        char letter = next.getFollowingLetter();

        if (letter == '\0')
        {
            break;
        }

    word += letter;
}

std::cout << word << "\n";


 







    
}