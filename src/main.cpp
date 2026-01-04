#include <iostream>
#include "inventory.h"
using namespace std;

int main() {
    Inventory inventory;
    int choice;

    while (true) {
        cout << "\n--- Inventory & Billing System ---\n";
        cout << "1. Add Product\n";
        cout << "2. View Products\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            inventory.addProduct();
        } 
        else if (choice == 2) {
            inventory.viewProducts();
        } 
        else if (choice == 3) {
            cout << "Exiting system...\n";
            break;
        } 
        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}