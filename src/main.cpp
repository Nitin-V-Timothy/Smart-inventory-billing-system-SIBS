#include <iostream>
#include "inventory.h"
#include "billing.h"
using namespace std;

int main() {
    Inventory inventory;
    inventory.loadFromFile();
    Billing billing;
    int choice;

    while (true) {
        cout << "\n--- Inventory & Billing System ---\n";
        cout << "1. Add Product\n";
        cout << "2. View Products\n";
        cout << "3. Sell Product\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            inventory.addProduct();
            inventory.saveToFile();
        } 
        else if (choice == 2) {
            inventory.viewProducts();
        } 
        else if (choice == 3) {
            billing.processSale(inventory);
        }
        else if (choice == 4) {
            cout << "Exiting system...\n";
            break;
        } 
        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}