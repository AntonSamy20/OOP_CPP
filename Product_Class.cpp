#include<iostream>
using namespace std;
class Product {
  public: 
  string name;
  float price;
  int quantity;
  Product (string n, float p, int q) { 
    name = n;
    price = p;
    quantity =q;
  } 
  float calculateTotalCost(){
    return price * quantity;
   }
  float applyDiscount(float percen) {
    return (price - price * percen/100)* quantity;
   }
};
int main (){
    float p;
    cout <<"Enter the Discount percentage : ";
    cin >>p;
    Product one("Soap", 12.5, 9);
    cout <<"The total cost : "<<one.calculateTotalCost();
    cout<<endl<<"The New Total cost : " <<one.applyDiscount(p) ;  
}