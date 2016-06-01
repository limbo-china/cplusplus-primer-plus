#include <string>
using namespace std;
class bank{
private:
    string name;
    string accout;
    int money;
public:
    bank(string  n="ning",string  a="qujun",int m=10);
    void show() const;
    void put(int add);
    void get(int sub);
};
