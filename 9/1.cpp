#include <iostream>
#include <cstring>
#include "1.h"
using namespace std;

void setgolf(golf &g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

void setgolf(golf &g)
{
    //char fn[len];
    //int hc;

    cout << "input:" << endl;
    cin >> g.fullname >> g.handicap;
    //setgolf(g, fn, hc);
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    cout << "fullname: " << g.fullname << endl;
    cout << "handicap: " << g.handicap << endl;
}

int main(){
    golf ann;
    setgolf(ann,"ann",24);
    showgolf(ann);
    handicap(ann,30);
    showgolf(ann);

    golf andy;
    setgolf(andy);
    showgolf(andy);

}
