// 0 at end
// Logic: "Non-zero ko aage laana hai".

// Approach:

// i left → right chalega.

// j left → right chalega.

// Jab non-zero mile toh usse j pe laao, j++.

// Example:
// [0,1,0,3,12]
// → Output: [1,3,12,0,0] ✅
// Fir har 0 ko front me le jaate → iska matlab 0s START pe chale jaate instead of END.
// Example:
// [0, 1, 0, 3, 12] → [0,0,1,3,12] ❌ (yeh galat hai "end" ke liye).
#include<iostream>
#include<vector>
using namespace std;
void ZeroEnd(int n,vector<int>&v){
   int j=0;
   for(int i=0;i<n;i++){
    if(v[i]!=0){
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
    ZeroEnd(num,v);
    for (auto val:v){
        cout<<val<<" ";
    }
}


// Case 1: Move 0 to END

// Logic: Non-zero element ko front me bhejna hai.

// i = left → right chalega.

// Condition: if (v[i] != 0)

// Non-zero ko front me rakhenge → bachi jagah me 0 apne aap end me aa jayenge.