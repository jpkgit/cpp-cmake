#include "market_item_updater.h"
#include <iostream>

market_item_updater::market_item_updater(market_item* mi, market* ma)
{
    double priceChangePercent = mi->sensitivityBond * (ma->DeltaBondPrice / ma->BondPrice) + 
                         mi->sensitivityEquity * (ma->DeltaEquityPrice / ma->EquityPrice) + 
                         mi->sensitivityCommodity * (ma->DeltaCommodityPrice / ma->CommodityPrice) + 
                         mi->sensitivityPpi * (ma->DeltaPpiLevel / ma->PpiLevel) + 
                         mi->sensitivityCpi * (ma->DeltaCpiLevel / ma->CpiLevel);

    std::cout << "market_item_updater constructor" << std::endl;
    std::cout << "market_item_updater priceChangePercent: " << priceChangePercent << std::endl;
}

market_item_updater::~market_item_updater()
{
    std::cout << "market_item_updater destructor" << std::endl;
}