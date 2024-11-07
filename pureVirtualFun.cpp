#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void sound()=0;
};

class Dog: public Animal{
    public:
    void sound(){
        cout<<"Bawbaw"<<endl;
    }
};

class Cat: public Animal{
    public:
    void sound(){
        cout<<"Meoww"<<endl;
    }
};

void MakeNoise(Animal *ani){
    ani->sound();
}

int main(){
   Animal* ani= new Dog();
   Animal* ani2= new Cat();
//    ani->sound();
//    ani2->sound();
   MakeNoise(ani); //dyanmic hai toh and nhi bhejna
   MakeNoise(ani2);

   delete ani;
   delete ani2;

   return 0;
}