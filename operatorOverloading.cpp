#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int real,img;

    Complex(int r, int i){
        real=r;
        img=i;
    }

    Complex operator + (Complex &obj){
      return Complex(real +obj.real, img + obj.img);
    }
};
int main(){
  Complex c(3,4), c1(5,6);
  Complex addi= c+c1;
  cout<<"Sum-> "<<addi.real<<"+"<<addi.img<<"i"<<endl;
}