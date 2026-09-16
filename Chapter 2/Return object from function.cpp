#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int cls, int roll, double gpa){
        // (*this).cls = cls;
        this->cls = cls;
        // (*this).roll = roll;
        this->roll = roll;
        // (*this).gpa = gpa;
        this->gpa = gpa;
    }
};

Student fun(){
    Student rahim(5, 1, 4.98);
    return rahim;
}

int main(){
    Student obj = fun();
    cout << obj.cls << " " << obj.roll << " " << obj.gpa << endl;
    
    return 0;
}