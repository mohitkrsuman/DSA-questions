#include<iostream>
using namespace std; 

int decimalToBinary(int n, int b){
   int ans = 0;  // for the summation of mod
   int power = 1;  // for the multiplication of each mod to its respective power
   
   while(n!=0){
      int r = n%b;
      n/=b;

      ans += (r*power);
      power *= 10;
   }
   return ans;

}

int main(){
   int n, b;

   cout<<"Enter the decimal no"<<endl;
   cin>>n;
   cout<<"Enter the base"<<endl;
   cin>>b;
   cout<<decimalToBinary(n, b);
   return 0;
}