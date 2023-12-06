#ifndef MARKET_ITEM_UPDATER_H
#define MARKET_ITEM_UPDATER_H

#include <memory>

#include "market.h"
#include "market_item.h"

class market_item_updater
{
private:
    /* data */        
public:
    market_item_updater(std::shared_ptr<market_item> pmi, market* ma);
    ~market_item_updater();
};

#endif