#include <iostream>
#include "1.h"
using namespace std;

bank::bank(string n,string  a,int m){
    name=n;
    accout=a;
    money=m;
}
void bank::show() const{
    cout<<"----------show---------"<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"accout: "<<accout<<endl;
    cout<<"money: "<<money<<endl;
    cout<<"-----------------------"<<endl;
}
void bank::put(int add){
    cout<<"--------put money------"<<endl;
    money+=add;
    cout<<"-----------------------"<<endl;
}
void bank::get(int sub){
    cout<<"--------get money------"<<endl;
    money-=sub;
    cout<<"-----------------------"<<endl;
}

int main(){
    bank bank1;
    bank bank2 = bank();
    bank bank3 = bank("zhu","wo",40);

    bank1.show();
    bank1.put(50);
    bank1.show();
    bank1.get(30);
    bank1.show();

    bank2.show();
    bank2.put(20);
    bank2.show();
    bank2.get(10);
    bank2.show();

    bank3.show();
    bank3.put(50);
    bank3.show();
    bank3.get(30);
    bank3.show();
}
