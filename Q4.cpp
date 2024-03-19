#include<iostream>
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
    int sume,sumo=0;
    for(int i=0;i<n;i++){
        if(i%2==0) sume+=arr[i];
        else sumo+=arr[i];
    }
    cout<<abs(sume-sumo);
    return 0;
}