#include<iostream>
#include<cmath>
using namespace std;
class Circle {
  public: 
  float pi = 3.14;
  float redius;
  Circle(float l) { 
    redius = l;
  }
  double calculatePerimeter (){
    return 2* pi * redius;
   }
  double calculateArea (){
    return pi * pow(redius , 2);
   }
};
int main (){
    float len;
    cout <<"Enter the Redius : ";
    cin>>len;
    Circle one(len);
    cout <<"The perimeter is : " <<one.calculatePerimeter()<<endl;
    cout <<"The area is : "<< one.calculateArea()<<endl;
}