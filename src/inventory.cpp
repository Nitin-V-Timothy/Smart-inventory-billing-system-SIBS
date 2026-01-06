#include "inventory.h"
#include <iostream>

void Inventory::addProduct() {
    Product p;

    cout << "Enter Product ID: ";
    cin >> p.id;

    cout << "Enter Product Name: ";
    cin >> p.name;

    cout << "Enter Quantity: ";
    cin >> p.quantity;

    cout << "Enter Price: ";
    cin >> p.price;

    products.push_back(p);
    cout << "Product added successfully.\n";
}

void Inventory::viewProducts() {
    if (products.empty()) {
        cout << "No products in inventory.\n";
        return;
    }

    cout << "\n--- Inventory List ---\n";
    for (const auto& p : products) {
        cout << "ID: " << p.id
             << " | Name: " << p.name
             << " | Qty: " << p.quantity
             << " | Price: " << p.price << endl;
    }
}

bool Inventory::reduceStock(int productId, int qty) {
    for (auto& p : products) {
        if (p.id == productId) {
            if (p.quantity >= qty) {
                p.quantity -= qty;
                return true;
            } else {
                return false;
            }
        }
    }
    return false;
}
