// move all negative elements to end
//  arr[] = [1, -1, 3, 2, -7, -5, 11, 6 ]
#include<iostream>
#include<vector>
using namespace std;
void Negative(int n,vector<int>&v){
    int j=0;
    for(int i=0;i<n;i++){
        if(v[i]>=0){
            swap(v[i],v[j]);
            j++;
        }
    }
}
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    vector<int>v;
    for(int i=0;i<num;i++){
        cout<<"Enter "<<i+1<<" Element:";
        int x;
        cin>>x;
        v.push_back(x);

    }
    Negative(num,v);
    for(int i=0;i<num;i++){
        cout<<v[i]<<" ";
    }

}