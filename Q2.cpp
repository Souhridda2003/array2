#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    int tmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>tmax && arr[i]!=smax && arr[i]!=max){
            tmax=arr[i];
        }
    }
    cout<<max<<" "<<smax<<" "<<tmax;
}