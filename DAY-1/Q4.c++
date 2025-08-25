// Reverse an array
#include<iostream>
using namespace std;
void Reverse(int n,int arr[]){
    int start=0,end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
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
    Reverse(num,array);
     cout<<"\nReversed Array:";
    for(int i=0;i<num;i++){
       
        cout<<array[i]<<" ";
    }
}