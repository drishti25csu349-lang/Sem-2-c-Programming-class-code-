#include<iostream>
#include<string>
using namespace std;
class BankAcc{
    private:
    string accountHolder;
    double balance;
    public:
    BankAcc(string a,double b){
accountHolder = a;
balance = b;
    };
    BankAcc(const BankAcc &other){
        accountHolder = other.accountHolder ;
        balance = other.balance - 25 ;
    }
    void display(){
        cout << "name\t"<< accountHolder<< "balance\t" << balance << endl;
    };
};
int main (){
    BankAcc acc1("Rahul" , 2000);
    BankAcc acc2 = acc1;
    acc2.display();
    return 0 ;
}
