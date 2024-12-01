#include "market.h"
#include <iostream>
#include <memory>

market::market(int ticks)
{
    m_ticks = ticks;
    std::cout << "market constructor" << std::endl;

    std::shared_ptr<market_item> pmi = std::make_shared<market_item>();
    pmi->sensitivityBond = 0.1;
    pmi->sensitivityCommodity = 0.4;
    pmi->sensitivityEquity = 0.9;
    pmi->price = 25.30;    

    std::shared_ptr<market_factors> pmfs = std::make_shared<market_factors>();

    pmfs->BondPrice = 101.00;
    pmfs->EquityPrice = 500.00;
    pmfs->CommodityPrice = 4500;
    pmfs->CpiLevel = 1001;
    pmfs->PpiLevel = 1005;
    
    pmfs->DeltaBondPrice = 1;
    pmfs->DeltaCommodityPrice = 2;
    pmfs->DeltaCpiLevel = 3;
    pmfs->DeltaEquityPrice = 20;
    pmfs->DeltaPpiLevel = 17;

    market_item_updater miu1(pmi, pmfs);      

    for (int index = 0; index < m_ticks; index++)
        miu1.tick();
}

market::~market()
{
    std::cout << "market destructor" << std::endl;
}