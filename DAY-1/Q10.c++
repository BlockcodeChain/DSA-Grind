// Taking input in vectors and printing 
#include<iostream>
#include<vector>
using namespace std;
 int main()
 {
    int num;
    cout<<"Enter number:";
    cin>>num;
    vector<int>v;
for(int i=0;i<num;i++){
    cout<<"Enter "<<i+1<<" element:";
 int x;
cin>>x;
 v.push_back(x);
}
for(auto val:v){
    cout<<val<<" ";
}
 }