#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    (n==0)?(n>0)?cout<<"Number is Positive":cout<<"Number is zero":(n<0)?cout<<"Number is Negative":cout<<"Number is Positive";
    return 0;
} 