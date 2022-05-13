
#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;cin>>n;
vector <int >v;
for(int i =0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}

int sum=2;
  for(int i=2;i<n;i++){
   if((v[i]==v[i-1])&&(v[i]==v[i-2])){
       sum =sum;
   }
else{
    sum++;
}

  }  
   cout<<sum<<"\n"; 
    return 0;
}