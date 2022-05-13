#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int check(int arr[],int n,int min,int max,int k=1,int ans=0 ){

if(k<n){
    if(max<arr[k]){
        ans++;
        max=arr[k];

    }
  if(min>arr[k]){
        ans++;
        min=arr[k];
    }
    
    return check(arr,n,min,max,k+1,ans);
}
else{
  
    return ans;
}
//bhai iske aas paas vala answer hi h
}
int main(){

int n;
cin>>n;
int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}

cout <<check(arr,n,arr[0],arr[0]);

    
    return 0;
}