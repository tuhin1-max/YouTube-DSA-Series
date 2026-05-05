#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;//4
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=n-1;i>=0;i--){
        cout << a[i] << " ";
    }
    return 0;
}
// index : 0 1 2 3 
// input : 5 1 3 2 
// output: 2 3 1 5