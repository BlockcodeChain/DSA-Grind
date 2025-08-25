// arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2
// Output: 4
// number of occurence 
// we can do this using binary in log n 
int Occurence(int n,int arr[],int key){
int s=0,e=n-1,mid,first=-1,last=-1;
// first occurence
while(s<=e){
    mid=s+(e-s)/2;
    if(arr[mid]==key){
        first=mid;
        e=mid-1;
    }
    else if(arr[mid]>key){
        e=mid-1;

    }
    else s=mid+1;

}
// last occurence
s=0,e=n-1;
while(s<=e){
    mid=s+(e-s)/2;
    if(arr[mid]==key){
       last=mid;
        s=mid+1;
    }
    else if(arr[mid]>key){
        e=mid-1;

    }
    else s=mid+1;

}
return ((last-first)+1);
}
#include<iostream>
using namespace std;
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
int target;
cout<<"Enter target:";
cin>>target;
cout<<"Occurence of "<<target<<" : "<<Occurence(num,array,target);
 }