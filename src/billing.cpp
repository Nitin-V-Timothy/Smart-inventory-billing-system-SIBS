#include "billing.h"
#include <iostream>

void Billing::processSale(Inventory& inventory) {
    int productId;
    int qty;

    cout << "Enter Product ID to sell: ";
    cin >> productId;

    cout << "Enter Quantity: ";
    cin >> qty;

    bool success = inventory.reduceStock(productId, qty);
    inventory.saveToFile();
    if (success) {
        cout << "Sale completed successfully.\n";
    } else {
        cout << "Sale failed. Insufficient stock or invalid product.\n";
    }
}
