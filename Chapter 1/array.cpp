#include<bits/stdc++.h>
using namespace std;

int main(){
    // data_type array_name[size];
    // int arr[5]={10,20,30,40,50};
    // cout << arr[2];
    int n;
    cin >> n;//5
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];//a[0]=10 ,a[1]=20,a[2]=30,a[3]=40,a[4]=50
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";//10 20 30 40 50 
    }
    return 0;
}