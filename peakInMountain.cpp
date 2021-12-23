// Peak in mountain

#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

int peakInMountain(int arr[]) {
   int s = 0;
   int size = sizeof(arr)/sizeof(arr[0]);
   int e = size - 1;
   int mid = s + (e - s)/2;
   while(s < e){
      if(arr[mid] < arr[mid + 1]){
          s = mid + 1;
      }else{
         e = mid;
      }
   mid = s + (e - s)/2;
   }
   return s;
}

int main(){

   int arr[5] = {0, 2, 4, 1, 0};
   cout<<peakInMountain(arr);
   
   return 0;
}