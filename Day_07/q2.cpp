#include<iostream>
using namespace std;
void insertionsort (int arr[],int n){
    for (int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while (prev>=0 && arr[prev]>=curr){
            swap (arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    insertionsort(arr,a);
    for (int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}