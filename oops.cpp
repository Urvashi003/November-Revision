#include<bits/stdc++.h>
using namespace std;

// class Student{
//     private:
//     string studentName;
//     int rollno;
//     int age;

//     public:
//     string getStudentName(){
//         return studentName;
//     }

//     void setStudentName(string studentName){
//         this->studentName= studentName;
//     }

//     int getrollno(){
//         return rollno;
//     }
//     void setStudentRoll(int rollno){
//         this->rollno= rollno;
//     }

//     int getStudentAge(){
//         return age;
//     }
//     void setStudentAge(int age){
//         this->age= age;
//     }
// };

// int main(){
//    Student obj;
//    obj.setStudentName("urvashi");
//    obj.setStudentRoll(7);
//    obj.setStudentAge(21);

//    cout<<"student name=>"<<obj.getStudentName()<<endl;
//    cout<<"student age=>"<<obj.getStudentAge()<<endl;
//    cout<<"student rollno=>"<<obj.getrollno()<<endl;

//    return 0;
// }


//INHERITANCE
class Human{
    
    private:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
       this->weight= w;
    }
};

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};

int main(){
    Male m1;
    m1.setWeight(40);
    // cout<<m1.weight<<endl;
    m1.sleep();

    return 0;
}