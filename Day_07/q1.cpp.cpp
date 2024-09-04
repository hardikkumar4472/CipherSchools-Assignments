#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    bubblesort(arr,a);
    for (int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}