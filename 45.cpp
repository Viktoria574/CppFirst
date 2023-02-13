#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  for (float y = 2; y > -2; y -= 1 / 8.0)
  {
    for (float x = -7; x < 7; x += 1 / 8.0)
    {
      if (x == 0 and y == 2)
        cout << "^";
      if (x == 0 and y != 0 and y != 2)
        cout << "|";
      if (x == 0 and y == 0)
        cout<<"+";
      if (x > 6.8 and y == 0)
        cout<<">";
      if (y == 0 and x < 6.8)
        cout<<"-";
      if (x != 0 and y != 0 and abs(y - sin(x)) > 1 / 20.0)
        cout<<" ";
      if (abs(y - sin(x)) < 1 / 20.0 and x != 0 and y != 0)
        cout<<"*";
    }
    cout<<"\n";
  }
  return 0;
}