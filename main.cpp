//#include <cstdlib>
#include <iostream>
#include <vector>  
#include <ctime>

#include "version.h"

#include "MathFunctions.h"

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

    clock_t clock_start = clock();   
    int result = func1(inputValue);
    clock_t clock_stop = clock();

    std::cout << "Clocks: " << clock_stop - clock_start << std::endl;

    clock_start = clock();   
    
    for (int index = 0; index < result; index++)
    {
        cout << list.at(index) << endl;;
    }

    clock_stop = clock();

    std::cout << "Clocks: " << clock_stop - clock_start << std::endl;

    double sValue = mysqrt(inputValue);
    cout << "Square root of input value is " << sValue << endl;
    
    return 0;
}
