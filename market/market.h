#ifndef MARKET_H
#define MARKET_H

#include "market_factors.h"
#include "market_item.h"
#include "market_item_updater.h"


class market
{
private:
int m_ticks = 10;

public:
    market(int ticks);
    ~market();
};

#endif