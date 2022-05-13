#include<iostream>
#include<bits\stdtr1c++.h>
using namespace std;
int check(int k){
int a,b,c,d;
a=k%10;
b=((k-a)%100)/10;
c=((k-a-b)%1000)/100;
d=((k-a-b-c)%10000)/1000;
if((a==b)||(a==c)||(a==d)||(b==c)||(b==d)||(c==d)){
   return check( k+1);
}
else{
    return k;
}
}
int main(){
int n ;
cin>>n;
cout<<check(n+1);


    
    return 0;
}