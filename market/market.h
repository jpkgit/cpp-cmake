#ifndef MARKET_H
#define MARKET_H


class market
{
private:

public:
    market(/* args */);
    ~market();

        /* data */    
    double EquityPrice;
    double BondPrice;
    double CommodityPrice;
    double CpiLevel;
    double PpiLevel;
};

#endif