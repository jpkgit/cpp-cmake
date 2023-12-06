#include "market.h"
#include <iostream>

#include "market_item.h"
#include "market_item_updater.h"

market::market(/* args */)
{
    std::cout << "market constructor" << std::endl;

    market_item mi1;
    mi1.sensitivityBond = 0.1;
    mi1.sensitivityCommodity = 0.4;
    mi1.sensitivityEquity = 0.9;
    mi1.price = 25.30;    

    BondPrice = 101.00;
    EquityPrice = 500.00;
    CommodityPrice = 4500;
    CpiLevel = 1001;
    PpiLevel = 1005;
    
    DeltaBondPrice = 1;
    DeltaCommodityPrice = 2;
    DeltaCpiLevel = 3;
    DeltaEquityPrice = 20;
    DeltaPpiLevel = 17;

    market_item_updater miu1(&mi1, this);  
}

market::~market()
{
    std::cout << "market destructor" << std::endl;
}