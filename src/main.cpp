#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "\n--- Inventory & Billing System ---\n";
        cout << "1. Login\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Login placeholder\n";
        } else if (choice == 2) {
            cout << "Exiting system...\n";
            break;
        } else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
