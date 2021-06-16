
#include <bits/stdc++.h>
using namespace std;

long int merge_Sorted(int arr[],int temp[],int left,int right);
long int merge(int arr[],int temp[],int left,int mid,int right);

long int mergeSort(int arr[],int n){
    int temp[n];
    return merge_Sorted(arr,temp,0,n-1);
}

long int merge_Sorted(int arr[],int temp[],int left,int right){
    int mid;
    long int inv_count=0;
    if(right>left){
        mid = (left+right)/2;
        inv_count += merge_Sorted(arr,temp,left,mid);
        inv_count += merge_Sorted(arr,temp,mid+1,right);

        inv_count += merge(arr,temp,left,mid+1,right);
    }
    return inv_count;
}

long int merge(int arr[],int temp[],int left,int mid,int right){
    int i=left,k=left;
    int j = mid;
    long int inv_count =0;

    while((i<=mid-1)&&(j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            inv_count += (mid-i);
        }
    }

    while(i<=mid-1)
        temp[k++] = arr[i++];

    while(j<=right)
        temp[k++] = arr[j++];

    //Copy the merged array to original array

    for(int i=left;i<=right;i++)
        arr[i] = temp[i];

    return inv_count;
}



int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    long int ans = mergeSort(arr,n);
	    cout<<ans<<endl;
	    t--;
	}
	return 0;
}
