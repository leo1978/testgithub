#include <string>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct Foo
{
  std::vector<int> a;
  Foo()
  {

  }
};

int main(int, char**)
{
  map<int, Foo> A;
  Foo foo;
  foo.a.push_back(1);
  foo.a.push_back(7);

  A[0] = foo;

  cout<<A[0].a[1]<<endl;
  return 0;
}
