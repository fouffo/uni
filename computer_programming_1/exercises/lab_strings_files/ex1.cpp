#include <iostream>
#include <fstream>
#include <string>

// Kinda messes up spaces and newlines but so be it.

int main(int argc, char** argv)
{
    if(argc != 3) {
        std::cerr << "The number of arguments provided is incorrect." << std::endl;
        std::cerr << "Usage: <command> <fileA> <fileB>" << std::endl;
        return 1;
    }
    std::cout << argv[1] << std::endl;
    std::fstream fsA;
    std::fstream fsB;
    fsA.open(argv[1], std::ios::in);
    fsB.open(argv[2], std::ios::out | std::ios::trunc);

    while (!fsA.eof()){
        std::string buf;
        fsA >> buf;
        fsB << buf;
    }

    fsA.close();
    fsB.close();
}
