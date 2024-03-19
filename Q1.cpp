#include<iostream>
using namespace std;
int main(){
    int x,n;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"enter no of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
    if(a[i]>x){
        count++;
    }
    }
    cout<<"the count is "<<count;
}