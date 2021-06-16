#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int num1=0,num2=1,num3;
 cout<<num1<<endl<<num2<<endl;
 for(int i=2;i<n;i++){
   num3 = num1 + num2;
   cout<<num3<<endl;
   num1 = num2;
   num2 = num3;
 }
 return 0;
}

