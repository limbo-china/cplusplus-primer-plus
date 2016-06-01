#include <string>
using namespace std;


class Golf{
private:
    string fullname;
    int handicap;
public:
    Golf();
    Golf(const string &fn, const int &hc);
    void setHc(const int &hc);
    void show();
};
