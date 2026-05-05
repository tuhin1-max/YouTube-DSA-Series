#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int count = 0;
    if(x<=1){
        count = 1;
    }


    //8,11

    for(int i=2;i<=x/2;i++){//11/2 =5.5
        if(x%i==0){
            count = 1;
            break;
        }
    }

    if(count==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" <<endl;
    }

    return 0;
}
