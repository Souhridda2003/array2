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
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else arr[i]=arr[i]*2;
        cout<<arr[i]<<" ";
    }
}