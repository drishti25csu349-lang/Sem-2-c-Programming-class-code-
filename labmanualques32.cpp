#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int largest = 0;
    int secondsmallest = 0;
    for(int i = 0 ;i<5;i++){
        cout << "Enter the num:";
        cin >> arr[i];
        if(arr[i]>largest){
            secondsmallest =largest;
            largest = arr[i];
        }
        else if (arr[i] > secondsmallest&& arr[i] != largest) {
            secondsmallest = arr[i];
        }
        
}
cout << "the largest number "<<largest;
cout << "the second largest" <<secondsmallest;
return 0;
}
