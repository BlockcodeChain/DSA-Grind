
// Smallest Positive missing number
// arr[] = [2, -3, 4, 1, 1, 7]
#include<iostream>
using namespace std;
int  Missing(int n ,int arr[]){
bool present[1000]={false};  // yaha mark karenge konsa number aaya hai
for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] < 1000) {  // sirf positive values
            present[arr[i]] = true;
        }
    }
 for(int i=1;i<1000;i++){
    if(!present[i]){
   return i;
    }
 }
 return -1; 
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
cout<<"Missing Positive Number: "<<Missing(num,array);
 }