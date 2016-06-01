#include <iostream>
#include "3.h"

Golf::Golf(){
    cout <<"input: "<<endl;
    cin>>fullname>>handicap;
}
Golf::Golf(const string &fn, const int &hc){
    fullname = fn;
    handicap=hc;
}
void Golf::setHc(const int &hc){
    handicap =hc;
}
void Golf::show(){
    cout <<"fullname: "<<fullname<<endl;
    cout<<"handicap: "<<handicap<<endl;
}
int main(){
    Golf g1;
    Golf g2("ann",20);
    g1.show();
    g1.setHc(30);
    g1.show();

    g2.show();
    g2.setHc(50);
    g2.show();
}
