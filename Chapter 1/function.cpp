#include<bits/stdc++.h>
using namespace std;
// return_type function_name(parameters) {
//     // code
//     return value;
// }
int sum(int a,int b){
    int res = a+b;
    return res;
}

int main(){
    int ans = sum(3,5);//function call
    int ans2 = sum(3,6);
    cout << ans <<endl << ans2;
    // int a=3;
    // int b=5;
    // int sum = a+b;
    // cout << sum << endl;
    // int c=3;
    // int d=5;
    // int sum2 = a+b;
    // cout << sum2 ;
    return 0;
}