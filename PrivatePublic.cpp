// JAI SHRI RAM
// Sahil Khatri's Template
#include <iostream>
using namespace std;


class Employee
{
private:
  int a, b, c;

public:
  int d, e;
  void getDate()
  {
    cout << a << " " << b << " " << c << endl;
  }
  void setdata(int a, int b, int c);
};

void Employee :: setdata(int a1, int b1, int c1)
{
  a = a1;
  b = b1;
  c = c1;
}

int main()
{
  Employee sahil;
  sahil.setdata(1, 2, 3);
  sahil.getDate();
  return 0;
}
