#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0;
    cout<<"Enter size of array: and target number: ";
    cin>>n>>k;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j]==k)){
                count++;
            }
        }
    }
    cout<<count;
}