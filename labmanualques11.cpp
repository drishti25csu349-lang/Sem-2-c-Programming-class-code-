#include <iostream>
using namespace std;

int main() {
    int quantity;
    float unitPrice, totalAmount, discount, finalAmount;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter unit price: ";
    cin >> unitPrice;

    totalAmount = quantity * unitPrice;

    if (quantity > 100) {
        discount = totalAmount * 0.10;
    } else {
        discount = 0;
    }

    finalAmount = totalAmount - discount;

    cout << "Total Amount: " << totalAmount << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Payable Amount: " << finalAmount << endl;

    return 0;
}
