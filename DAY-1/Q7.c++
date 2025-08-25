// missing number
#include<iostream>
using namespace std;
int Missing(int arr[],int n){
    int sum=0;
for(int i=0;i<n-1;i++){
    sum+=arr[i];
}
int total=n*(n+1)/2;
return (total-sum);
}
 int main()
 {
    int num;
    cout<<"Enter number:";
    cin>>num;
    int array[30];
for(int i=0;i<num-1;i++){
    cout<<"Enter "<<i+1<<" element:";
    cin>>array[i];
}
cout<<"Missing NUmber:" <<Missing(array,num);

 } 