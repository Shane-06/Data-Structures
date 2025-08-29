#include <bits/stdc++.h>
using namespace std;


void display(int mat[][3], int size) {
    cout << "Row  Col  Val\n";
   for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        if(mat[i][j]!=0){
            cout<<i<<"   "<<j<<"   "<<mat[i][j]<<"   "<<endl;
        }
    }
   }
}


void transpose(int mat[][3], int trans[][3], int size) {
    int k=0;
    for(int i=0; i<size; i++) {
         
        k++;
    }
}


// int add(int a[][3], int b[][3], int res[][3], int sizeA, int sizeB) {
//     int i=0, j=0, k=0;
//     while(i<sizeA && j<sizeB) {
//         if(a[i][0] < b[j][0] || (a[i][0]==b[j][0] && a[i][1]<b[j][1])) {
//             res[k][0]=a[i][0]; res[k][1]=a[i][1]; res[k][2]=a[i][2];
//             i++; k++;
//         }
//         else if(b[j][0] < a[i][0] || (b[j][0]==a[i][0] && b[j][1]<a[i][1])) {
//             res[k][0]=b[j][0]; res[k][1]=b[j][1]; res[k][2]=b[j][2];
//             j++; k++;
//         }
//         else { 
//             res[k][0]=a[i][0]; res[k][1]=a[i][1]; res[k][2]=a[i][2]+b[j][2];
//             i++; j++; k++;
//         }
//     }
//     while(i<sizeA) {
//         res[k][0]=a[i][0]; res[k][1]=a[i][1]; res[k][2]=a[i][2]; i++; k++;
//     }
//     while(j<sizeB) {
//         res[k][0]=b[j][0]; res[k][1]=b[j][1]; res[k][2]=b[j][2]; j++; k++;
//     }
//     return k;
// }


// int multiply(int a[][3], int b[][3], int res[][3], int sizeA, int sizeB) {
//     int k=0;
//     for(int i=0; i<sizeA; i++) {
//         for(int j=0; j<sizeB; j++) {
//             if(a[i][1] == b[j][0]) {
//                 int r = a[i][0];
//                 int c = b[j][1];
//                 int val = a[i][2] * b[j][2];

              
//                 int found=0;
//                 for(int x=0; x<k; x++) {
//                     if(res[x][0]==r && res[x][1]==c) {
//                         res[x][2]+=val;
//                         found=1;
//                         break;
//                     }
//                 }
//                 if(!found) {
//                     res[k][0]=r; res[k][1]=c; res[k][2]=val;
//                     k++;
//                 }
//             }
//         }
//     }
//     return k;
// }

int main() {
   
     int sizeA,sizeB;
     cout<<"Enter size of matrix: ";
     cin>>sizeA>>sizeB;

     int A[sizeA][3],B[sizeB][3];
     for(int i=0;i<sizeA;i++){
        for(int j=0;j<3;j++){
            cin>>A[i][j];
        }
     }
     cout<<"Enter another matirx: ";
     for(int i=0;i<sizeB;i++){
        for(int j=0;j<3;j++){
            cin>>A[i][j];
        }
     }

    cout << "Matrix A (Triplet):\n";
    display(A, sizeA);

    cout << "\nMatrix B (Triplet):\n";
    display(B, sizeB);

    // (a) Transpose
    int transA[10][3];
    transpose(A, transA, sizeA);
    cout << "\nTranspose of A:\n";
    display(transA, sizeA);

    // // (b) Addition
    // int sum[20][3];
    // int sizeSum = add(A, B, sum, sizeA, sizeB);
    // cout << "\nA + B:\n";
    // display(sum, sizeSum);

    // // (c) Multiplication
    // int prod[20][3];
    // int sizeProd = multiply(A, B, prod, sizeA, sizeB);
    // cout << "\nA * B:\n";
    // display(prod, sizeProd);

    return 0;
}
