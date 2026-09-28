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
int main(){
    Student rahim(5, 1, 4.98); // static object
    Student* alif = new Student(5,10,4.56); //dynamic object

    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << alif->cls << " " << alif->roll << " " << alif->gpa << endl;
    return 0;
}