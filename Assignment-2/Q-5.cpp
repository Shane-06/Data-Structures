#include<bits/stdc++.h>
using namespace std;
void dia(int arr[][3],int n){
    int b[n];
      for(int i=0;i<n;i++){
        b[i]=arr[i][i];
      }
    for(int i=0;i<n;i++){
        cout<<b[i];
    }
}

void tridia(int arr[][3],int n){
    int b[3*n+2];
    int t=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0){
                b[t]=arr[i][j];
                t++;
            }
        }
    }
     for(int i=0;i<n;i++){
        cout<<b[i];
    }
}
int main(){
    // int n;
    // cout<<"Enter number of rows and cloumns(same): ";
    // cin>>n;
    // int arr[n][n];
    // cout<<"Enter elements in a matrix: "<<endl;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // dia(arr,n);
    // tridia(arr,n);
    int n;
    cout << "Enter size of lower/upper/symmetric triangular matrix: ";
    cin >> n;

    int size = n*(n+1)/2;
    int A[size];

    cout << "Enter elements row by row:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> A[i*(i-1)/2 + j-1];
        }
    }

    cout << "Lower Triangular Matrix:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= j) cout << A[i*(i-1)/2 + j-1] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }




    
    // cout << "Enter size of upper triangular matrix: ";
    // cin >> n;

    // int size = n*(n+1)/2;
    // int A[size];

    cout << "Enter elements row by row:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cin >> A[n*(i-1) - (i-2)*(i-1)/2 + (j-i)];
        }
    }

    cout << "Upper Triangular Matrix:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i <= j) cout << A[n*(i-1) - (i-2)*(i-1)/2 + (j-i)] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }


   
    // cout << "Enter size of symmetric matrix: ";
    // cin >> n;

    // int size = n*(n+1)/2;
    // int A[size];

    cout << "Enter lower triangular elements row by row:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> A[i*(i-1)/2 + j-1];
        }
    }

    cout << "Symmetric Matrix:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= j) cout << A[i*(i-1)/2 + j-1] << " ";
            else cout << A[j*(j-1)/2 + i-1] << " ";
        }
        cout << endl;
    }
 


    return 0;

}



