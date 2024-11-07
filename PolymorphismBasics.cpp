#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void speak(){
       cout<<"animal makes sound"<<endl;
    }

};

class Dog : public Animal{
    public:
   void speak() override{
      cout<<"barkss"<<endl;
   }
};

class Cat: public Animal{
    public:
    void speak()override{ //try and catch
      cout<<"meowww"<<endl;
    }
};

void makeSound(Animal *animal){
  animal->speak(); //dynamic binding
}

int main(){
//    Animal a;
//    a.speak();
//   Dog d;
//   d.speak();

Cat c;
// c.speak();
makeSound(&c);


}
