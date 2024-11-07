#include<bits/stdc++.h>
using namespace std;

// class A{
//     public:
//     void say(){
//         cout<<"hello"<<endl;
//     }
//     void say(string name){
//         cout<<name<<endl;
//     }
// };

// int main(){
//     A obj;
//     obj.say();
//     // obj.say("my");
// }

//OPERATOR OVERLOADING
class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    // void operator + (B &obj){
    //     int val1= this->a;
    //     int val2= obj.a;
    //     cout<<val2-val1;
    // }

    void operator ()(){
        cout<<"bracket"<<endl;
       cout<< this->a;
    }
};

int main(){
    B obj1, obj2;
    obj1.a= 4;
    obj2.a= 7;
    // obj1+obj2;
    obj2();
}