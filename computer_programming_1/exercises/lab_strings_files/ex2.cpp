#include <iostream>
#include <fstream>
#include <string>

float adjust(int n, float avg = 0, int iter = 1){
    return avg * 1.0 * (iter - 1) / iter + n * 1.0 / iter;
}

int main(int argc, char** argv)
{
    if(argc != 2) {
        std::cerr << "The number of arguments provided is incorrect." << std::endl;
        std::cerr << "Usage: <command> <file>" << std::endl;
        return 1;
    }
    std::cout << argv[1] << std::endl;
    std::fstream fs;
    fs.open(argv[1], std::ios::in);

    int i = 1;
    float avg = 0;

    while (!fs.eof()){
        std::string buf;
        fs >> buf;
        avg = adjust(atoi(buf.c_str()), avg, i++);
        std::cout << avg << " ";
    }

    std::cout << avg << std::endl;

    fs.close();
}
