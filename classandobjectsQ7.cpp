#include <iostream>
#include <string>

using namespace std;

class Table {
private:
    string material;
    double price;
    int legs;

public:
    Table() {
        material = "Wood";
        price = 5000;
        legs = 4;
    }

    Table(string m, double p) {
        material = m;
        price = p;
        legs = 4; 
    }

    Table(string m, double p, int l) {
        material = m;
        price = p;
        legs = l;
    }


    void display(string tableName) {
        cout << tableName << ":" << endl;
        cout << "  Material: " << material << endl;
        cout << "  Price:    " << price << endl;
        cout << "  Legs:     " << legs << endl << endl;
    }
};

int main() {

    Table t1;
    
    Table t2("Glass", 8000);
      
    Table t3("Metal", 12000, 3);

    t1.display("Default Table");
    t2.display("Standard Table");
    t3.display("Custom Table");

    return 0;
}

