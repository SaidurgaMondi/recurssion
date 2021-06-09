//ADDING NATURAL NUMBERS 1 TO N //
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getsum(int n)
{
    if(n==0)                     //base call
    {
        return 0;
    }
    return n+getsum(n-1);        //recursive call
}
int main()
{
    int n;
    cout<<"Enter num:";
    cin>>n;
    cout<<"the sum is:"<<getsum(n);   //printing 1 to n natural numbers sum
    return 0;
}