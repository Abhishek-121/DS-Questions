#include <bits/stdc++.h>
using namespace std;

int main(){
 int n,flag=0;
 cin>>n;
 int m = n/2;
 for(int i=2;i<=m;i++){
   if(n%i==0){
    flag =1;
    break;
   }
 }

 if(flag==0)
    cout<<"Prime"<<endl;
 else
    cout<<"Not Prime"<<endl;

 return 0;
}
