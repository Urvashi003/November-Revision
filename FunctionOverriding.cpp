#include<bits/stdc++.h>
using namespace std;

class PaymentMethod{
   public:
   virtual void processPayment(){
    cout<<"processing payemnt"<<endl;
   }
};

class CreditCard: public PaymentMethod{
  public:
  void processPayment(){
    cout<<"Credit"<<endl;
  }

};

class DebitCard: public PaymentMethod{
    public:
    void processPayment(){
        cout<<"debit"<<endl;
    }
};

void MakePayment(PaymentMethod *payment){
    payment->processPayment();
}


int main(){
   PaymentMethod p1;
   CreditCard c;
   DebitCard d;
   MakePayment(&c);
   MakePayment(&d);

   return 0;


}