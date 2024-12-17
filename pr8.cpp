#include <iostream>
using namespace std;

int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

int main () //Todo las acciones se realizan en main()
{
  int z;
  z = addition (5,3);
  cout << "The result is " << z<<endl;
}
