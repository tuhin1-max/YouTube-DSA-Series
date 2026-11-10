#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    // cout << v.max_size() << endl;
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // cout << v.size() << endl;
    // // cout << v[0] << " " << v.capacity() << endl;
    // v.clear();
    // cout << v.size() << endl;
    // cout << v[0] << endl;
    // v.push_back(1000);
    // cout << v[0] << endl;
    // v.push_back(100);
    // if(v.empty()){
    //     cout << "yes" << endl;
    // }
    // else{
    //     cout << "no" << endl;
    // }

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // v.resize(2);

    v.resize(7,100);

    for(int i=0;i<v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}