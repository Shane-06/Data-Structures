#include<bits/stdc++.h>
using namespace std;
int  binarysearch(int arr[],int k,int n){
    int low=0,high=n-1;
    while(low<high){
        int mid=(low+high)/2;

        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}
int main(){
    int n,k;
    cout<<"Enter size of array: and element to be found :";
    cin>>n>>k;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=binarysearch(arr,k,n);
    cout<<"Element found at index:"<<c;
    return 0;
}