#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[1005];
    cin >> s;
    int count = strlen(s);
    // for(int i=0;s[i] != '\0';i++){
    //     count++;
    // }

    int flag = 0;
    for(int i=0,j=count-1;i<j;i++,j--){
        if(s[i] != s[j]){
            flag = 1;
            cout << "NO" << endl;
            break;
        }
    }

    if(flag == 0){
        cout << "YES" << endl;
    }
    return 0;
}