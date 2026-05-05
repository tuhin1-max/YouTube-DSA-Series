// 5!=1*2*3*4*5
// 6!=1*2*3*4*5*6
// 7!=1*2*3*4*5*6*7
// n!=1*2*3*4*5*6*7*.......*n
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;//3--> 0,1,2,3
    for(int i=0;i<t;i++){
        int n;
        cin >>n;//5

        long long fact=1;

        for(int j=1;j<=n;j++){

            // fact = fact*j;
            fact *=j;

        }

        cout << fact<<endl;

    }
    return 0;
}