#include <bits/stdc++.h>
using namespace std;
#define lli long long int

//Formula - a*b = LCM*GCD

int gcd(int a,int b){
  if(a==0)
    return b;
  return gcd(b%a,a);
}

int main(){
  lli a,b;
  cin>>a>>b;
  int GCD = gcd(a,b);
  int LCM = a*b/GCD;
  cout<<GCD<<endl;
  cout<<LCM<<endl;

 return 0;
}
