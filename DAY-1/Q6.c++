// fibonnaci series

#include<iostream>
using namespace std;
void Fibonacci_Series(int n){
int arr[60];
arr[0]=0;
arr[1]=1;
 cout << "Fibonacci Series: " << arr[0] << " " << arr[1] << " ";
for(int i=2;i<n;i++){
   arr[i]=arr[i-1]+arr[i-2];
   cout<<arr[i]<<" ";
}

}
 int main()
 {
    int num;
    cout<<"Enter number:";
    cin>>num;
  if (num <= 0) {
        cout << "Please enter a positive number." << endl;
    } 
    else if (num == 1) {
        cout << "Fibonacci Series: 0" << endl;
    } 
    else if (num == 2) {
        cout << "Fibonacci Series: 0 1" << endl;
    } 
    else {
        Fibonacci_Series(num);
    }


 } 