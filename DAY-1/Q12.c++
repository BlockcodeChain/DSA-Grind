// Move zero to start
// Logic: "Non-zero ko piche bhejna hai".
// Aapko ulta karna padega:

// Loop Right → Left chalana hoga.

// j ko right se start karna hoga.

// Condition ab bhi if (v[i] != 0) hi rahegi → non-zero ko piche bhejo.

// Jo bacha sab automatically start pe 0s ho jaayenge.
#include<iostream>
#include<vector>
using namespace std;
void ZeroStart(int n,vector<int>&v){
    int j=n-1;
    for(int i=n-1;i>0;i--){
if(v[i]!=0){
    swap(v[i],v[j]);
  j--;
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
    ZeroStart(num,v);
    for (auto val:v){
        cout<<val<<" ";
    }
}
// Case 2: Move 0 to START

// Logic: Non-zero element ko piche bhejna hai.

// i = right → left chalega.

// Condition ab bhi same: if (v[i] != 0)

// Non-zero ko right side push kar dena → bachi jagah me 0 apne aap start pe aa jayenge.