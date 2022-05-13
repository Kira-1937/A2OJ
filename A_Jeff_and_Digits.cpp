
#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;cin>>n;
int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}
int a1=0;int a2=0;
for (int i=0;i<n;i++){
    if(arr[i]==5){
      a1++;
    }
    if (arr[i]==0){
        a2++;

    }}
    if ((a2==0)||(a1==0)){
        cout<<"0";
       
    }

    else if(((5*(a1))%9)==0){
        long long int  p=0;
        for (int i=0;i<a1;i++){
            p=p+5*(10^(i));
        }
        p=p*(10^(a2));
        cout<<p;
     
    }
    else{  
        cout<<"0";
}
  return 0;
}