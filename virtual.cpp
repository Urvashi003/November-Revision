#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"animal makes noise"<<endl;
    }
};

class Dog: public Animal{
   public:
   void sound(){
    cout<<"dog bawbaw"<<endl;
   }
};

class Cat: public Animal{
  public:
  void sound(){
    cout<<"cat neowww"<<endl;
  }
};

void MakeNoise(Animal *ani){
    ani->sound();
}
int main(){
  Animal a;
  Animal *animal= new Dog();
//   MakeNoise(animal);
animal->sound();
  Dog d;
  Cat c;
  MakeNoise(&a);
  MakeNoise(&c);
  MakeNoise(&d);
  delete animal;
}