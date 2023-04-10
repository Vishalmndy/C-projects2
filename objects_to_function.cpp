#include<iostream>
using namespace std;
class Student{
    public:
    double marks;
    Student (double m){
        marks = m;
    }
};
void Calculateaveragemarks(Student s1, Student s2){
      double average = (s1.marks + s2.marks) / 2;

   cout << "Average Marks = " << average << endl;
}
int main(){
    Student student1(30.2),student2(24.5);
    Calculateaveragemarks(student1,student2);

}