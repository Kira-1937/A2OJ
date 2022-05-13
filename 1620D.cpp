
#include<bits/stdc++.h>
using namespace std;
int main(){
int t ;cin>>t;
while(t--){
    int n ;
    cin>>n;
  vector <int >v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
       v.push_back(x);
    }
 
   int a=0;
   int b=0;
   int c=0;
   int x=0;
   int y=0;
  sort(v.begin(),v.end());

  a=(v[n-1])/3;
   for(int i =0;i<n;i++){
    if(v[i]%3==2){
        b=1;
    }
    if(v[i]%3==1){
        c=1;
    }
    if(v[i]==1){
        x=1;
    }
    if(v[i]==2){
        y=1;
    }


   }
if((x==1)&&(y==1)){
    cout<<a+2;
}
else if((x!=1)&&(y==1)){
     cout<<a+y+c;
}
else if((x==1)&&(y!=1)){
     cout<<a+x+b;
}
else if((v[n-1]%3==0)){
    cout<<a+b;
}
else{

if(a-1==0){
    cout<<a+2;
}


else{
    cout<<a+1;
}


}
cout<<"\n";

}


    
    
    return 0;
}