#include<bits/stdc++.h>
using namespace std;

class Shape{
   public:
   //pure virtual func
   virtual double area()=0;
   virtual void drawing()=0;
};

class Circle: public Shape{
    private:
    double radius;
    public:
    Circle(double r):radius(r){}
    double area()override{
       return  3.14 * radius *radius;
    }
    void drawing()override{
      cout<<"circle draw"<<endl;
    }
};


class Square: public Shape{
    private:
    int side;
  public:
  Square(int s): side(s){}
  double area()override{
    return side*side;
    }
  void drawing()override{
   cout<<"square draw"<<endl;
    }
};


int main(){
   vector<Shape*>shape;
   shape.push_back(new Circle(3.0));
   shape.push_back(new Square(9.0));

   for(Shape* s: shape){
    s->drawing();  
    cout<<"Area"<<s->area()<<" " <<endl;
   }
   for(auto s:shape){
    delete s;
   }

   return 0;
}