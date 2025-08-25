// find 1,2,and 3rd max and min element of array
#include<iostream>
#include<climits>
using namespace std;
void  Maximum(int n ,int arr[]){
int max=INT_MIN,second=0,third=0;
for(int i=0;i<n;i++){
    if(max<arr[i]){
        third=second;
        second=max;
        max=arr[i];
    }
    else if(second<arr[i]&&arr[i]!=max){
        third=second;
        second=arr[i];
    }
  else if(third<arr[i]&&arr[i]!=max&&arr[i]!=second){
        third=second;
        second=arr[i];
    }


}
cout<<"First Maximum element in Array:"<<max<<endl;
cout<<" Second Maximum element in Array:"<<second<<endl;
cout<<"Third Maximum element in Array:"<<third<<endl;
}
void  Minimum(int n ,int arr[]){
int min=INT_MAX,second=0,third=0;
for(int i=0;i<n;i++){
    if(min>arr[i]){
        third=second;
        second=min;
        min=arr[i];
    }
    else if(second>arr[i]&&arr[i]!=min){
        third=second;
        second=arr[i];
    }
  else if(third>arr[i]&&arr[i]!=min&&arr[i]!=second){
        third=second;
        second=arr[i];
    }


}
cout<<"First Minimum element in Array:"<<min<<endl;
cout<<" Second Minimum element in Array:"<<second<<endl;
cout<<"Third Minimum element in Array:"<<third<<endl;
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

Maximum(num , array);
Minimum(num , array);

 }