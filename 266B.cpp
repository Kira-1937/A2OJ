#include<bits/stdc++.h>
using namespace std;
int main(){



int n,z;
cin>>n>>z;
vector <char> v;
for(int i=0;i< n;i++){
    char x;
    cin>>x;
    v.push_back(x);
}
for(int i=0;i<z;i++){
for(int j=0;j<n-1;j++){
if(v[j]=='B'&&v[j+1]=='G'){
    char temp=v[j+1];
    v[j+1]=v[j];
    v[j]=temp;
    
    j++;
}

}
}

for(int i=0;i<n;i++)
{
    cout<<v[i];
}

cout<<endl;

    
    
    return 0;
}