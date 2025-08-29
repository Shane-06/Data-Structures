#include <iostream>
using namespace std;
int main() {
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;  
                j--;  
            }
        }
    }
    int count=0;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        count++;
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<count;
   

    return 0;
}
