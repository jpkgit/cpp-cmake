#include "market_item_updater.h"
#include <iostream>

market_item_updater::market_item_updater(std::shared_ptr<market_item> pmi, std::shared_ptr<market_factors> pmfs)
{
    m_pmi = pmi;
    m_pmfs = pmfs;
    once();
}

market_item_updater::~market_item_updater()
{
    std::cout << "market_item_updater destructor" << std::endl;
}

void market_item_updater::once()
{
    double priceChangePercent = m_pmi->sensitivityBond * (m_pmfs->DeltaBondPrice / m_pmfs->BondPrice) + 
                         m_pmi->sensitivityEquity * (m_pmfs->DeltaEquityPrice / m_pmfs->EquityPrice) + 
                         m_pmi->sensitivityCommodity * (m_pmfs->DeltaCommodityPrice / m_pmfs->CommodityPrice) + 
                         m_pmi->sensitivityPpi * (m_pmfs->DeltaPpiLevel / m_pmfs->PpiLevel) + 
                         m_pmi->sensitivityCpi * (m_pmfs->DeltaCpiLevel / m_pmfs->CpiLevel);

    std::cout << "market_item_updater constructor" << std::endl;
    std::cout << "market_item_updater priceChangePercent: " << priceChangePercent << std::endl;
    std::cout << "market_item_updater price: " << m_pmi->price << std::endl;
}

void market_item_updater::tick()
{
    once();
}