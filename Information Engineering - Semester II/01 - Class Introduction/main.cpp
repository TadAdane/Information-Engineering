#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

//struct Student{
class Student{


public:
    Student(string n, string sn){
        name_ = n;
        surname_ = sn;
    }
    Student(){
       //cout << "No object was created";
    }

    void set_name(string name, string surname) { // setter
        name_ = name;
        surname_ = surname;
    }
    string name() { // getter
        return name_;
    }
    string name_;
    string surname_;
    float calculate_grade() {
        float sum = accumulate(grades.begin(), grades.end(), 0.0f);
        return sum /grades.size();
    }
    void print_struct(){
        cout << name_ << " " << surname_ << ": ";
        for (auto value : grades){
            cout << value << " ";
        }
        cout << " ";
        cout << "Average Grade: " << calculate_grade() << endl;
    }
//public:
    bool add_grade(float grade) {
        if (grade >= 2.0 && grade <= 5.0) {
            // The grade is valid; let's add it and return true
            grades.push_back(grade);
            return true;
        }
        // The grade is invalid; let's return false
        return false;
    }
private:

    vector <float> grades;
};

//float calculate_grade() {
//    float sum = accumulate(grades.begin(), grades.end(), 0.0f);
//    return sum /grades.size();
//}

int main()
{
    Student student("James", "bulk");//{"name", "student"};
    Student student1("Danny", "Joe");
    Student student2;
    //cout << student.calculate_grade() << endl;
    //student.print_struct();
    //student.grades.push_back(5);
    student.add_grade(4);
    student.add_grade(4.5);
    student1.add_grade(3);
    student1.add_grade(5);
    student.print_struct();
    student1.print_struct();

    student2.set_name("Jack", "Mill");
    student2.add_grade(2);
    student2.add_grade(5);
    student2.print_struct();
    return 0;
}