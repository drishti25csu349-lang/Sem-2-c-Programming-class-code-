// this code involves the reward point concept
#include <iostream>
#include <string>
using namespace std;

class BankAcc {
private:
    double balance; 
public:
    string accountHolderName;
    int rewardPoints;
    BankAcc(string name, double bal, int points) 
        : accountHolderName(name), balance(bal), rewardPoints(points) {}
    void withdraw() {
        if (balance >= 500 && rewardPoints >= 20) {
            balance -= 500;
            rewardPoints -= 20;
            cout << "\n Withdrawal Successful " << endl;
        } else {
            cout << "\nError: Insufficient balance or points " << endl;
        }
    }

    void displayAccount() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "Reward Points  : " << rewardPoints << endl;
    }
};

int main() {
  
    BankAcc myAcc("John Doe", 10000, 50);

    cout << "Initial Details:" << endl;
    myAcc.displayAccount();

    myAcc.withdraw();

    cout << "Updated Details:" << endl;
    myAcc.displayAccount();

    return 0;
}
