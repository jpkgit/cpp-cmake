#include "market.h"
#include <iostream>
#include <memory>

#include "market_item.h"
#include "market_item_updater.h"

market::market(/* args */)
{
    std::cout << "market constructor" << std::endl;

    std::shared_ptr<market_item> pmi = std::make_shared<market_item>();
    pmi->sensitivityBond = 0.1;
    pmi->sensitivityCommodity = 0.4;
    pmi->sensitivityEquity = 0.9;
    pmi->price = 25.30;    

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

    market_item_updater miu1(pmi, this);  
}

market::~market()
{
    std::cout << "market destructor" << std::endl;
}