#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main(){
long long a1,a2,a3;
cin>>a1>>a2>>a3;
long long  a,b,c;
long long  z=(a1*a2*a3);

a=sqrt(z)/a2;
b=sqrt(z)/a3;
c=sqrt(z)/a1;


cout<<4*(a+b+c);
    
    return 0;
}