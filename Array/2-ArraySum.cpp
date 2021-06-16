#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){
    lli n1;
    cin>>n1;
    int arr[n1];
    for(lli i=0;i<n1;i++)
        cin>>arr[i];
    lli n2;
    cin>>n2;
    int brr[n2];
    for(lli i=0;i<n2;i++)
        cin>>brr[i];
    vector<int>v;
    lli len = min(n1,n2);
    lli len2 = max(n1,n2);
    cout<<"len 1 is : "<<len<<endl;
    cout<<"len 2 is : "<<len2<<endl;
    lli carry = 0;
    for(lli i = 0;i<len;i--){
        lli sum = arr[n1-i]+brr[n2-i]+carry;
        lli rem = sum%10;
        carry = sum/10;
        v.push_back(rem);
    }
   /* lli p= len;
    while(p<len2 && len2==n2){
        lli sum = brr[p] + carry;
        lli rem = sum%10;
        carry = sum/10;
        v.push_back(rem);
        p++;
    }
    while(p<len2 && len2==n1){
        lli sum = arr[p] + carry;
        lli rem = sum%10;
        carry = sum/10;
        v.push_back(rem);
        p++;
    }
    */
    lli k = v.size();
    reverse(v.begin(),v.end());
    for(lli i=0;i<k;i++){
        cout<<v[i]<<endl;
    }

    return 0;
}
