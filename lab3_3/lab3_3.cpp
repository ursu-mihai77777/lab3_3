#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Student {
public:
    string name;
    int age;
    double grade;

    
    Student(const string& n, int a, double g) : name(n), age(a), grade(g) {}

    
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << ", grade: " << grade << endl;
    }
};

int main() {
    
    vector<Student> students = {
        {"Petrica", 20, 6.8},
        {"Beatrice", 22, 7.5},
        {"Dan", 21, 9.9},
       
    };

    string searchName;
    cin >> searchName;
    auto it = find_if(students.begin(), students.end(),
        [searchName](const Student& student) {
            return student.name == searchName;
        });

    
    if (it != students.end()) {
        cout << "Student found:" <<endl;
        it->display();
    }
    else {
        cout << "Student not found." << endl;
    }

    return 0;
}
