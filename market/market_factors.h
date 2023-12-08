#ifndef MARKET_FACTORS_H
#define MARKET_FACTORS_H

class market_factors
{
private:
    /* data */        
public:
    market_factors() {};
    ~market_factors() {};

        /* data */    
    double EquityPrice;
    double BondPrice;
    double CommodityPrice;
    double CpiLevel;
    double PpiLevel;


    double DeltaEquityPrice;
    double DeltaBondPrice;
    double DeltaCommodityPrice;
    double DeltaCpiLevel;
    double DeltaPpiLevel;
};

#endif