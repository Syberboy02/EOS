#include <iostream>
#include <string>
#include <algorithm>

std::string translate(std::string line, std::string argument)
{
    std::string result = "";
    if(argument == "-shout"){
        result = line.append("!");
        std::transform(result.begin(), result.end(),result.begin(), ::toupper);
    }
    if(argument == "-question"){
        result = line.append("?");
    }
    return result;
}

int main(int argc, char *argv[])
{
    std::string line;
    if (argc != 2)
    {
        std::cerr << "Deze functie heeft exact 1 argument nodig" << std::endl;
        return -1;
    }
    
    std::string argumento = argv[1];

    if(argumento != "-shout" && argumento != "-question"){
        std::cerr << "Bruh" << std::endl;
        std::cout << argv[1] << std::endl;
        return -1;
    }

    while (std::getline(std::cin, line))
    {
        std::cout << translate(line, argv[1]) << std::endl;
    }

    return 0;
}