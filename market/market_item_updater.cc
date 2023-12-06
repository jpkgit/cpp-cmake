#include "market_item_updater.h"
#include <iostream>

market_item_updater::market_item_updater(std::shared_ptr<market_item> pmi, market* ma)
{
    double priceChangePercent = pmi->sensitivityBond * (ma->DeltaBondPrice / ma->BondPrice) + 
                         pmi->sensitivityEquity * (ma->DeltaEquityPrice / ma->EquityPrice) + 
                         pmi->sensitivityCommodity * (ma->DeltaCommodityPrice / ma->CommodityPrice) + 
                         pmi->sensitivityPpi * (ma->DeltaPpiLevel / ma->PpiLevel) + 
                         pmi->sensitivityCpi * (ma->DeltaCpiLevel / ma->CpiLevel);

    std::cout << "market_item_updater constructor" << std::endl;
    std::cout << "market_item_updater priceChangePercent: " << priceChangePercent << std::endl;
}

market_item_updater::~market_item_updater()
{
    std::cout << "market_item_updater destructor" << std::endl;
}