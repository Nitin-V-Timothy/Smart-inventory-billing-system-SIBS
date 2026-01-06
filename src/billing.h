#ifndef BILLING_H
#define BILLING_H

#include "inventory.h"

class Billing {
public:
    void processSale(Inventory& inventory);
};

#endif