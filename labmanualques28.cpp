#include<iostream>
using namespace std;
int main(){
int arr[5];
int sumeven = 0,sumodd = 0 ;
for(int i =0;i<5;i++){
    cout  <<"Enter the inputs ";
    cin >> arr[i];
    if(arr[i]%2 == 0){
        sumeven = sumeven+arr[i];
    }
    else{
        sumodd += arr[i];
    }
}
cout << "The sum of even numbers\n"<<sumeven;
cout<<"The sum of odd numbers\n"<<sumodd;
}
