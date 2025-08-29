#include<bits/stdc++.h>
using namespace std;
void concate(){
    string s1,s2;
    cout<<"Enter stirng s1 and s2: "<<endl;
    getline(cin,s1);
    getline(cin,s2);

    string s3=s1+s2;
    cout<<s3;
}
void reverses(string rs){
    
    int low=0,high=rs.length()-1;
    while(low<high){
        int temp=rs[high];   //learning string ko array ki tarah treat kro
        rs[high]=rs[low];
        rs[low]=temp;
        low++;
        high--;      
    }
    cout<<rs;
}
void removev(string rs){
    int j=0,c=0,l=rs.length();
    for(int i=0;i<l;i++){
        if(rs[i]=='a'||rs[i]=='i'||rs[i]=='o'||rs[i]=='u'||rs[i]=='e'){
           c++;
            continue;
        }
        else{
            
            rs[j]=rs[i];
            j++;
            
          
        }
    }
    rs.resize(j);
    cout<<rs;
}
void sorts(){
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> arr(n);

    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //sort(arr.begin(),arr.end());
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  // Compare lexicographically
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nStrings in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}
void utol(string rs){
    

    // Convert to lowercase (ASCII logic)
    for(int i=0;i<rs.length();i++){
    if (rs[i] >= 'A' && rs[i]<= 'Z') {
        rs[i] = rs[i] + 32;   // Difference between 'A' (65) and 'a' (97) is 32     
    } else {
        cout << "The entered character is not uppercase!" << endl;
    }
}
cout << "Lowercase String: " << rs << endl;
}
int main(){
    string rs;
    cout<<"Enter string : "<<endl;
    getline(cin,rs);
   //concate();
   //reverses(rs);
   //removev(rs);
   //sorts();
   //utol(rs);
   return 0;
}