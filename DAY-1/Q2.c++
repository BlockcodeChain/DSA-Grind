// find max and min element of array
#include<iostream>
#include<climits>
using namespace std;
int  Maximum(int n ,int arr[]){
int max=INT_MIN;
for(int i=0;i<n;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
return max;
}
int  Minimum(int n ,int arr[]){
int min=INT_MAX;
for(int i=0;i<n;i++){
    if(min>arr[i]){
        min=arr[i];
    }
}
return min;
}
 int main(){
 int num;
 cout<<"Enter number:";
 cin>>num;
 int array[30];
 for(int i=0;i<num;i++){
    cout<<"Enter "<<i+1<<" element:";
    cin>>array[i];
 }
cout<<"Maximum element in Array:"<<Maximum(num , array)<<endl;
cout<<"Minimum element in Array:"<<Minimum(num , array);

 }