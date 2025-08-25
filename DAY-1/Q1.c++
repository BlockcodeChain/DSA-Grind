// linear search 
#include<iostream>
using namespace std;
int Linear_Search(int n ,int arr[],int key){
    int index=-1;
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            index=i;
         
        }
    
    }
    return index;
}
 int main(){
    int num;
    cout<<"Enter number of elements in array:";
    cin>>num;
    int array[30];
    for(int i=0;i<num;i++){
        cout<<"Enter "<<i+1<<" element:";
        cin>>array[i];
    }
    int target;
    cout<<"Enter target:";
    cin>>target;
int result=Linear_Search(num,array,target);
  if(result!=-1){
    cout<<"Element found at index :"<<result;
  }
  else cout<<"Element not found 404 ERROR";

 }