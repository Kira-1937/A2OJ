
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){

    long long a,b,c;
    cin>>a>>b>>c;
    if(a!=b&&a!=c&&c!=b){
        if(a>b&&a>c){
         if(a-b==c){
             cout<<"yes\n";
         }
         else{
             cout<<"no\n";
         }
        }
        
      else if(b>c&&b>a){
 if(c+a==b){
             cout<<"yes\n";
         }
         else{
             cout<<"no\n";
         }

        }
    
  
    
      else if(c>a&&c>b){
      if(c-a==b){
             cout<<"yes\n";
         }
         else{
             cout<<"no\n";
         }


    }
    }

else {if(a==b&&b==c){
     if(c%2==1){
             cout<<"no\n";
         }
         else{
             cout<<"yes\n";
         }
        
}


        else {if(a==b){
        if(c%2==1){
             cout<<"no\n";
         }
         else{
             cout<<"yes\n";
         }
        }
 if(a==c){
        if(b%2==1){
             cout<<"no\n";
         }
         else{
             cout<<"yes\n";
         }
        }
 if(c==b){
        if(a%2==1){
             cout<<"no\n";
         }
         else{
             cout<<"yes\n";
         }
        }
}

     }


      }
    return 0;
}