#include<iostream>
using namespace std;
class calci
{
  int a,b,c;
  void add();
  void subtract();
};

void calci::add()
{
  c=a+b;
}
int main()
{
  calci c;
  cout<<"Calculator: ";
  return 0;
}
