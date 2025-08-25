// 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
#include<iostream>
using namespace std;
 int main()
 {
  
  char array[26];
  for(int i=0;i<26;i++){
   array[i]='a'+i;
  }
    cout << "Alphabets stored in array: ";
    for (int i = 0; i < 26; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
 }