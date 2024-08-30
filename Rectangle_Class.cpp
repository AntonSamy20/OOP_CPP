#include<iostream>
using namespace std;
class Rect {
  public: 
  float len;
  float wid;
  Rect(float l, float w) : len(l), wid(w){ }
  double calculatePerimeter (){
    return 2* (len + wid);
   }
  double calculateArea (){
    return len * wid;
   }
};
int main (){
    float len,wid;
    cout <<"Enter the length and the width : ";
    cin>>len>>wid;
    Rect one(len,wid);
    cout <<"The perimeter is : " <<one.calculatePerimeter()<<endl;
    cout <<"The area is : "<< one.calculateArea()<<endl;
}