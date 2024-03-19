#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }
    if(flag==true) cout<<"array is sorted";
    else cout<<"array is unsorted";
}