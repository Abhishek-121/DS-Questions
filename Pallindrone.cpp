#include<bits/stdc++.h>
using namespace std;

bool pallindrone(string s,int n){

  //Two Pointer Approach

  int left = 0, right = n-1;
  while(left<right){
    if(s[left]!=s[right])
        return false;
    else{
        left++;
        right--;
    }
  }

  return true;
}

int main(){
  string s;
  cin>>s;
  int n = s.length();

  if(pallindrone(s,n)){
    cout<<"True";
  }
  else
    cout<<"False";

  return 0;
}
