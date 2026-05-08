#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[1005];
    cin >> s;
    int count = strlen(s);
    // int count = 0;
    // for(int i=0; s[i] != '\0'; i++){
    //     count++;
    // }
    
    int flag = 1;
    for(int i=0,j=count-1;i<j;i++,j--){
        if(s[i] != s[j]){
            flag = 0;
            cout << "NO";
            break;
        }
    }

    if(flag == 1){
        cout << "YES";
    }
    return 0;
}