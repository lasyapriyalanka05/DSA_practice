// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[100],seclarge,large,n;
    cout<<"enter noof elemetns";
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            seclarge=large;
            large=arr[i];
        }
        else if (arr[i] > seclarge && arr[i] != large) {
            seclarge = arr[i];
        }
    }
    cout<<"large element"<<large<<endl;
    cout<<"second large element"<<seclarge<<endl;
    return 0;
}