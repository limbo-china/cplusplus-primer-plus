#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"
#include <fstream>


int main()
{
  using VECTOR::Vector;
  using namespace std;
  srand(time(0));

  double direction;
  Vector step;
  Vector result;
  unsigned long steps = 0;
  double target;
  double dstep;

  ofstream fout;
  fout.open("randwalk.txt");

  cout << "target:" << endl;
  while (cin >> target)
    {
      cout << "step distance: " << endl;
      if (!(cin >> dstep))
        break;
      while (result.magval() < target)
        {
          fout<<steps<<":"<<result<<endl;
          direction = rand() % 360;
          step.reset(dstep, direction, Vector::POL);
          result = result + step;
          steps++;
        }
      fout << steps << " steps to " << endl << result << endl;
      result.polar_mode();
      fout << "or " << endl << result << endl;
      steps = 0;
      result.reset(0.0, 0.0);
    }
    return 0;
}
