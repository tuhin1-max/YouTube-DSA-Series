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

Student* fun(){
    Student karim(5, 1, 4.98);
    Student* p = &karim;
    return p;
}

int main(){
    Student* p = fun();
    cout << p->cls << " " << p->roll << " " << p->gpa << endl;
    
    return 0;
}