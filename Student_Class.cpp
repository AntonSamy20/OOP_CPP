#include<iostream>
using namespace std;
class Student {
  public: 
  string name;
  int ID;
  float grade;
  Student (string n, int i, float g) { 
    name = n;
    ID = i;
    grade =g;
  }
  void displayStudentInfo() {
    cout<< "Name : "<<name<<"\nID : "<<ID<<"\nGrade : "<<grade;
   }
  float setGrade(double grade) {
    return ((grade/20)-1);
   }
};
int main (){
    string name="Anton";
    int ID=1234;
    float grade =88.2;
    Student one(name, ID, grade);
    cout <<"The GPA is : "<<one.setGrade(grade);
}