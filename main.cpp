//#include <cstdlib>
#include <iostream>
#include <vector>  
#include <ctime>

#include "version.h"
#include "market/market.h"
#include "market/market_item.h"
#include "market/market_item_updater.h"

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

int func2(int count)
{    
    if (count < 0)
        return -1;

    void* pIntArr = calloc(count, sizeof(pIntArr));
    
    int index = count;

    // while (index > 0)
    // {
    //     pIntArr[index] = 1;
    //     index--;
    // }
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
        cout << list.at(index) << " clock(): " << clock() << endl;        
    }

    clock_stop = clock();

    std::cout << "Clocks: " << clock_stop - clock_start << " clocker per sec: " << CLOCKS_PER_SEC << std::endl;

    market_item mi1;
    mi1.sensitivityBond = 0.1;
    mi1.sensitivityCommodity = 0.4;
    mi1.sensitivityEquity = 0.9;
    mi1.price = 25.30;    

    market ma1;
    ma1.BondPrice = 101.00;
    ma1.EquityPrice = 500.00;
    ma1.CommodityPrice = 4500;
    ma1.CpiLevel = 1001;
    ma1.PpiLevel = 1005;
    
    ma1.DeltaBondPrice = 1;
    ma1.DeltaCommodityPrice = 2;
    ma1.DeltaCpiLevel = 3;
    ma1.DeltaEquityPrice = 20;
    ma1.DeltaPpiLevel = 17;

    market_item_updater miu1(&mi1, &ma1);    

    
    return 0;
}
