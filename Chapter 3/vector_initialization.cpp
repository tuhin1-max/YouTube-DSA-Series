#include<bits/stdc++.h>
using namespace std;

int main(){
    // type 1
    // vector<int> v;
    // type 2
    // vector<int>v(10);

    // type 3
    // vector<int>v(10,2);
    // type 4
    // vector<int>v2(v);

    // type 5
    // int a[5] = {1,2,3,4,5};

    // vector<int> v(a,a+5);

    // type 6
    vector<int> v = {1,2,3,4,5,6,7,8};
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    return 0;
}