#include <bits/stdc++.h>
using namespace std;

// Inbuilt function of left and right rotation by K

// Left Rotation : rotate(v.begin(),v.begin()+k,v.end())

// Right Rotation : rotate(v.begin(),v.begin()-k,v.end())

int main(){
  string s ;
  cin>>s;
  int n = s.length();
  int k;
  cin>>k;
  string last= "",first="";
  if(k>0){
    //Right Rotation is to be performed
    for(int i=n-k;i<n;i++)
        last += s[i];
    for(int i=0;i<n-k;i++)
        first += s[i];
  }
  else{
        k = abs(k);
    for(int i=0;i<k;i++)
        first += s[i];
    for(int i=k;i<n;i++)
        last += s[i];
  }

  cout<<last+first<<endl;

 return 0;
}

