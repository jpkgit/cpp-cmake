#include "market_item_updater.h"
#include <iostream>

market_item_updater::market_item_updater(market_item* mi, market* ma)
{
    std::cout << "market_item_updater constructor" << std::endl;
}

market_item_updater::~market_item_updater()
{
    std::cout << "market_item_updater destructor" << std::endl;
}