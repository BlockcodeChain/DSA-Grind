// rotate array by 1 
#include<iostream>
using namespace std;
void Rotate(int n,int arr[]){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
 int main()
 {
    int num;
    cout<<"Enter number:";
    cin>>num;
    int array[30];
for(int i=0;i<num;i++){
    cout<<"Enter "<<i+1<<" element:";
    cin>>array[i];
}
cout<<"Original Array:";
for(int i=0;i<num;i++){
    cout<<array[i]<<" ";
}
Rotate(num,array);
cout<<"\nRotated Array by 1 Place :";
for(int i=0;i<num;i++){
    cout<<array[i]<<" ";
}
 }