
#include<bits/stdc++.h>
using namespace std;
int main(){
int   n ,x,y;
cin>>n>>x>>y;
 int temp=n*y;
int l=0;
if(temp%100==0){
l++;
}
  temp=  temp/100;

if(l==0){
    temp++;
}
if(temp<=x){
    cout<<0;
}
else{
    cout<<temp-x;
}
    
    
    return 0;
}