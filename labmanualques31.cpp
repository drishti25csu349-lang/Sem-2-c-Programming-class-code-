#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i = 0 ;i<5;i++){
        cout << "Enter the num:";
        cin >> arr[i];
        if(arr[i]%5 == 0 && arr[i]%3 == 0){
cout  << " \nthe number is divisible by 3 ND 5\n" ;
        }
    }
}
