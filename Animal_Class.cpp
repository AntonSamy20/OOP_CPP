#include<iostream>
using namespace std;
class Animal {
  public: 
  string name;
  string sound;
  Animal (string l, string w) { 
    name =l;
    sound =w;
  }
  string makeSound() {
    return sound;
   }
  void introduce () {
    cout <<"The name is : "<<name<<" and the sound is : "<<sound;
   }
};
int main (){
    string name, sound;
    cout <<"Enter the name and the sound : ";
    cin>>name>>sound;
    Animal one(name, sound);
    cout <<"The sound is : " <<one.makeSound()<<endl;
    one.introduce();
    }