#include<iostream>
using namespace std;
//liner search method 
void missingno(int arr[],int n){
    int sum=n*(n+1)/2;
    int asum=0;
    for(int i=0;i<n-1;i++){
       asum+=arr[i];
    }
    int rnumber=sum-asum;
    cout<<rnumber;
}

//binary search method
void missingn(int arr[],int n){
    int low=0,high=n-1,f=0;
    while(low<=high){
        int mid=(low+high)/2;

        if(mid!=arr[mid]-1){
           f=mid;
        }
        else if(mid==arr[mid]-1){
            low=mid+1;
            for(;low<=high;low++){
                if(low==arr[low]-1)
                {
                   continue;
                }
                else{
                   f=low;
                }
            }
        }
    }
    cout<<"Found the element which is missing :"<<f+1<<" at index :"<<f;
}
int main(){
     int n;
    cout<<"Enter number of element in an array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  //  missingno(arr,n);
    missingn(arr,n);
    return 0;
}