#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void sound()=0;
    virtual ~Animal(){};
};

class Dog: public Animal{
    public:
    void sound(){
        cout<<"barks"<<endl;
    }
};

int main(){
    vector<Animal*> ani= {new Dog()};
    for(Animal* animal :ani){
        animal->sound();
    }
    for(Animal* animal:ani){
        delete animal;
    }
    return 0;
}