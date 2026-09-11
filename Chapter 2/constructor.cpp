#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int c, int r, double g){
        cls = c;
        roll = r;
        gpa = g;
    }
};
int main(){
    Student rahim(5, 1, 4.98);
    Student alif(5, 20, 3.00);

    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << alif.cls << " " << alif.roll << " " << alif.gpa << endl;
    return 0;
}