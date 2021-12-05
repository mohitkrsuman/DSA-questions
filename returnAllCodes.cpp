/*
Return all codes - String

Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to return the list of all possible codes that can be generated from the given string.

Note : The order of codes are not important. And input string does not contain 0s.
Input format :
A numeric string
Constraints :
1 <= Length of String S <= 10
Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw
*/


#include <iostream>
#include <string.h>
using namespace std;


using namespace std;
int atoi(char a)
{
    int i=a-'0';
    return i;
}
char itoa(int i)
{
    char c='a'+i-1;
    return c;
}
int getCodes(string input, string output[10000]) {
   if(input.size()==0)
   {
       return 1;
   }
    if(input.size()==1)
    {
        output[0]=output[0]+itoa(atoi(input[0]));
        return 1;
    }
    string result1[10000],result2[10000];
    int size2;

    int size1=getCodes(input.substr(1),result1);
    if(input.size()>1)
    {
        if(atoi(input[0])*10+atoi(input[1])>10&&atoi(input[0])*10+atoi(input[1])<27)
        {
            size2=getCodes(input.substr(2),result2);
        }

    }
    for(int i=0;i<size1;i++)
    {
        output[i]=itoa(atoi(input[0]))+result1[i];
    }
    for(int i=0;i<size2;i++)
    {
        output[i+size1]=itoa(atoi(input[0])*10+atoi(input[1]))+result2[i];
    }
    return size1+size2;
}



int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
