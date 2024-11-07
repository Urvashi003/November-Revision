#include<bits/stdc++.h>
using namespace std;
//data hiding , security/ class->read only


class Student{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
    void setAge(int age){
        cout<<age<<endl;
    }
};

int main(){
    Student s1;
    s1.setAge(8);
    // s1.age
    // s1.height;
}