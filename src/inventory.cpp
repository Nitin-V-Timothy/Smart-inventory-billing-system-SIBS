#include "inventory.h"
#include <iostream>
#include <fstream>

void Inventory::addProduct() {
    Product p;

    cout << "Enter Product ID: ";
    cin >> p.id;

    if (isProductIdExists(p.id)) {
        cout << "Error: Product ID already exists.\n";
        return;
    }

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

void Inventory::loadFromFile() {
    products.clear();

    ifstream file("data/inventory.txt");
    if (!file.is_open()) {
        return; // No file yet → start empty
    }

    Product p;
    while (file >> p.id >> p.name >> p.quantity >> p.price) {
        products.push_back(p);
    }

    file.close();
}

void Inventory::saveToFile() {
    ofstream file("data/inventory.txt");

    for (const auto& p : products) {
        file << p.id << " "
             << p.name << " "
             << p.quantity << " "
             << p.price << endl;
    }

    file.close();
}

bool Inventory::isProductIdExists(int productId) {
    for (const auto& p : products) {
        if (p.id == productId) {
            return true;
        }
    }
    return false;
}