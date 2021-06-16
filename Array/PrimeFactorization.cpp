#include <bits/stdc++.h>
using namespace std;
#define lli long long int

bool primeNumber(int n){
 int m = n/2;
 for(int i=2;i<=m;i++){
   if(n%i==0)
    return false;
 }
 return true;
}

int main(){
  lli a;
  cin>>a;
  vector<lli>v;
  for(lli i=2;i<=a/2;i++){
    if(primeNumber(i))
        v.push_back(i);
  }
  lli len = v.size(),p=0;

  while(p<len){
    if(a/v[p]==1){
        ++p;
        cout<<v[p];
        break;
    }
    if(a%v[p]==0){
        a = a/v[p];
        cout<<v[p]<<endl;
    }
    else
        p++;
  }


 return 0;
}

