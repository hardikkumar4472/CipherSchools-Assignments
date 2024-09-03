#include<iostream>
using namespace std;
int main(){
cout<<"Enter size of array"<<endl;
int n;
int sum=0;
cin>>n;
int arr[n];
cout<<"Enter element of array"<<endl;
for (int i=0;i<n;i++){
    cin>>arr[i];
}
for (int i=0;i<n;i++){
    sum+=arr[i];
}
cout<<"Sum of all elements of array is "<<sum;
return 0;
}