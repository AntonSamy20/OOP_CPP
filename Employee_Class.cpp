#include<iostream>
using namespace std;
class Employee {
  public: 
  string name;
  int ID;
  float salary;
  Employee (string n, int i, float s) { 
    name = n;
    ID = i;
    salary =s;
  }
  void displayEmployeeInfo() {
    cout<< "Name : "<<name<<"\nID : "<<ID<<"\nSalary : "<<salary;
   }
  float giveRaise(float percen) {
    return (salary + salary * percen/100);
   }
};
int main (){
    string name="Anton";
    int ID=2967;
    float salary =675.5, p;
    cout <<"Enter the Raise percentage : ";
    cin >>p;
    Employee one(name, ID, salary);
    one.displayEmployeeInfo();  
    cout<<endl<<"The New Salary : " <<one.giveRaise(p);  
}