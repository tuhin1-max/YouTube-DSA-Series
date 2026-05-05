#include<iostream>
#include<iomanip>

int main(){
    double d;
    std :: cin >> d;
    // 45.45453253
    std :: cout << std :: fixed << std :: setprecision(7) << d << std :: endl;

    return 0;
}