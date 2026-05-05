#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;//3

    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n-1;i++){ //n==1,i=1
        for(int j=i+1;j<n;j++){ // j=2 ,n==2
            if(a[i] > a[j]){ 
                int temp = a[i]; //3
                a[i] = a[j]; //1
                a[j] = temp; //3
            }
        }
    }

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    return 0;
}
