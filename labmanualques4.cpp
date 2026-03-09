#include <iostream>
using namespace std;

int main() {
    int itemNumber;
    int quantity;
    float unitPrice;
    float totalAmount;
    float discountAmount;
    float finalBill;
    cout << "Enter item number: ";
    cin >> itemNumber;

    cout << "Enter quantity purchased: ";
    cin >> quantity;

    cout << "Enter unit price of the item: ";
    cin >> unitPrice;


    totalAmount = quantity * unitPrice;


    discountAmount = totalAmount * 0.20;
    finalBill = totalAmount - discountAmount;

    
    cout << "\n----- BILL DETAILS -----" << endl;
    cout << "Item Number   : " << itemNumber << endl;
    cout << "Total Amount  : " << totalAmount << endl;
    cout << "Discount (20%): " << discountAmount << endl;
    cout << "Final Bill    : " << finalBill << endl;

    return 0;
}
