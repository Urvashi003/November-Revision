#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int wt;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }

};

class Dog: public Animal{

};

//multilevel
class German: public Dog{

};

class Human{

};
class Hybrid: public Animal, public Human{

};

//inheritance ambiguity
//if 2 functions have same name in diff class, there is multiple inher, then we use scope

class A{
    public:
    void walk(){
        cout<<"walking"<<endl;
    }
};

class B{
    public:
    void walk(){
        cout<<"walking2"<<endl;
    }
};

class C: public A, public B{

};

int main(){
    // Dog d;
    // d.speak();

   C obj;
    // obj.walk();
    obj.A::walk();
    obj.B::walk();

}
