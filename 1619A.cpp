
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n =s.size();
        if(s.size()%2==1){
            cout<<"NO"<<"\n";

        }
       else{
           int l=0;
       for(int i=1;i<=n/2;i++){
        if(s[i-1]!=s[((n-2)/2)+i]){
          cout<<"NO\n";
          l++;
          break;
        }

       }
       if(l==0){
           cout<<"YES\n";
       }

       


       }


    }


    
    
    return 0;
}