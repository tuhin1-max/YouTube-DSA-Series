#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[1005];
    cin >> s;
    int len = strlen(s);
    int flag = 1;
    int i,j;

    // for(i=0;j=len-1;i<j;i++,j--){
    //     if(s[i] != s[j]){
    //         flag = 0;
    //         cout << "NO";
    //         break;
    //     }
    // }

    if(flag == 1){
        cout << "YES";
    }
    return 0;
}