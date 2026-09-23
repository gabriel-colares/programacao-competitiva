#include <iostream>

using namespace std;

int main()
{
  int alice;
  int beto;
  int clara;

  while (cin >> alice >> beto >> clara)
  {
    if (alice != beto && beto == clara)
    {
      cout << "A" << endl;
    }
    else if (beto != alice && alice == clara)
    {
      cout << "B" << endl;
    }
    else if (clara != alice && alice == beto)
    {
      cout << "C" << endl;
    }
    else
    {
      cout << "*" << endl;
    }
  }

  return 0;
}
