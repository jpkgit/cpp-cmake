//#include <cstdlib>
#include <iostream>
#include <vector>  

#include "version.h"

using namespace std;

std::vector<std::string> list;

int func1(int count)
{
    for (int index = 1; index < count + 1; index++)
    {
        std:string value = "test" + std::to_string(index);
        list.push_back(value);    
    }  
    
    return list.size();
}

int main(int argc, char* argv[])
{
   
    std::cout << argv[0] << " Version " 
        << cpp_VERSION_MAJOR << "."
        << cpp_VERSION_MINOR << "." 
        << cpp_VERSION_PATCH << std::endl;

    if (argc != 2)    
    {
        std::cout << "Usage: " << argv[0] << " <number>" << std::endl;    
        return -1;
    }

    const int inputValue = std::stoi(argv[1]);
        
    int result = func1(inputValue);

    for (int index = 0; index < result; index++)
    {
        cout << list.at(index) << endl;;
    }
    
    return 0;
}
