#ifndef MARKET_ITEM_H
#define MARKET_ITEM_H


class market_item
{
private:

public:
    market_item(/* args */);
    ~market_item();

        /* data */
    double price;
    double sensitivityEquity;
    double sensitivityBond;
    double sensitivityCommodity;
    double sensitivityCpi;
    double sensitivityPpi;
};

#endif