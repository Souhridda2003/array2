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
        bool flag=true;
        for(int j=0;j<n;j++){
            if(j==i){
                continue;
            }
            else if(arr[i]==arr[j]){
                flag=false;
                break;
            }
        }
        if(flag==true) {
            cout<<"unique number is "<<arr[i]<<endl;
        }
    }
}