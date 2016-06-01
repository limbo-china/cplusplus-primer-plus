#include <iostream>
#include <cstring>
#include "2.h"

Person::Person(const string &ln, const char*fn){
    lname = ln;
    strcpy(fname,fn);//不能直接赋值, const char * 不能赋值给 char *
}

void Person::Show() const {
    cout<<fname<<" "<<lname<<endl;
}

void Person::FormalShow() const{
    cout<<lname<<","<<fname<<endl;
}

int main(){
    Person one;
    Person two("smy");
    Person three("Dimwiddy","Sam");
    one.Show();
    one.FormalShow();
    two.Show();
    two.FormalShow();
    three.Show();
    three.FormalShow();
}
