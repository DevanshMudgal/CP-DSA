#include <iostream>
using namespace std;

int sumArr(int arr[], int n){
    
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    
    cout<<"The sum of array elements is: "<<sum<<endl;
    return sum;
}

int main() {
    
    int n;
    cout<<"Enter number of array elements you wanna input: "<<endl;
    cin>>n;
    
    int arr[1000];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sumArr(arr,n);

    return 0;
}