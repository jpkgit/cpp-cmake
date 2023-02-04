#include <iostream>
#include <vector>  
   
using namespace std;

std::vector<std::string> list;

int func1()
{
    list.push_back("test1");    
    list.push_back("test2");
    list.push_back("test3");

    return list.size();
}

int main()
{
    cout << "Hello World!" << endl;

    int result = func1();

    for (int index = 0; index < result; index++)
    {
        cout << list.at(index) << endl;;
    }
    
    return 0;
}
