#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <vector>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    double price;
};

class Inventory {
private:
    vector<Product> products;

public:
    void addProduct();
    void viewProducts();
    bool reduceStock(int productId, int qty);
    void loadFromFile();
    void saveToFile();
    bool isProductIdExists(int productId);
};

#endif