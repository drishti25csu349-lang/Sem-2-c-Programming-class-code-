#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    float price;
    int quantity;

public:
    Product(string n, float p, int q) {
        name = n;
        price = p;
        quantity = q;
        cout << "Item Added: " << name << endl;
    }
    void calculateTotal() {
        cout << "Total cost for " << name << ": ₹" << (price * quantity) << endl;
    }
    ~Product() {
        cout << "Product '" << name << "' is removed from memory." << endl;
    }
};

int main() {
    Product p1("Laptop", 55000.0, 1);
    Product p2("Mouse", 1200.0, 2);
      p1.calculateTotal();
    p2.calculateTotal();

    return 0; 
}
