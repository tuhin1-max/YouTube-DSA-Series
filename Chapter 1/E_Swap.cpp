#include<bits/stdc++.h>
using namespace std;

void swap(int a,int b){// 4 6 
    int temp = a;//4
    a = b;//6
    b = temp;

    cout << a << " " << b;
}
int main(){
    int x,y;
    cin >> x >> y;
    swap(x,y);
    return 0;
}
