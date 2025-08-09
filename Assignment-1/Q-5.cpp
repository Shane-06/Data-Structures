#include <bits/stdc++.h>
using namespace std;
void matrix()
{
    int m, n, i, j;
    cout << "Enter rows and coloumns: ";
    cin >> m >> n;
    int arr[m][n];

    //  int p,q;
    //  cout<<"Enter another array's rows and column: ";
    //  cin>>p>>q;
    //  int brr[p][q];

     cout<<"Enter array: ";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    //  cout<<"Enter another array: ";
    //   for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>brr[m][n];
    //     }
    //  }

    for (i = 0; i < m; i++)
    {
        int rsum = 0;
        for (j = 0; j < n; j++)
        {

            rsum += arr[i][j];
        }
        cout << "Sum of:"<<i+1<< "="<<rsum << endl;
    }

    for (j = 0; j < m; j++)
    {
        int csum = 0;
        for (i = 0; i < n; i++)
        {

            csum += arr[i][j];
        }
        cout << "Sum of:"<<j+1<< "="<<csum << endl;
    }
    cout << endl;
}
int main()
{
    matrix();
    return 0;
}