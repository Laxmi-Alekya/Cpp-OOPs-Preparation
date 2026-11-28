
#include <cstdlib>
#include <iostream>
using namespace std;
  
class instrument{
public:
    virtual void MakeSound()=0; //pure virtual function ,it forces every derived function has its own implementation.
};
class Accordion:public instrument{
public:
    void MakeSound(){
        cout<<"Accordion is making a sound"<<endl;
    }
};
class Piano:public instrument{
public:
    void MakeSound(){
        cout<<"Piano is making a sound"<<endl;
    }
};

int main(){

  

  Accordion*a1 = new Accordion();
  //a1->MakeSound();

  Piano*p1 = new Piano();
  //p1->MakeSound();

  instrument*Instruments[2]={a1,p1};
  for(int i=0;i<2;i++){
    Instruments[i]->MakeSound();
  }
  system("pause>0");
}