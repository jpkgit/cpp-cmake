#ifndef MARKET_ITEM_UPDATER_H
#define MARKET_ITEM_UPDATER_H

#include <memory>

#include "market.h"
#include "market_item.h"
#include "market_factors.h"

class market_item_updater
{
private:
    /* data */        
    void once();
    std::shared_ptr<market_item> m_pmi;
    std::shared_ptr<market_factors> m_pmfs;
public:
    market_item_updater(std::shared_ptr<market_item> pmi, std::shared_ptr<market_factors> pmfs);    
    ~market_item_updater();
    void tick();
};

#endif