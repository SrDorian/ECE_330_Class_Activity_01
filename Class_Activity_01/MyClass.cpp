#include <iostream>

//With this line of code we can take out the std:: from our code
using namespace std;

class MyClass
{
private:
int counter;
public:
void Foo()
{
cout << "Foo" << endl;
}
void Foo() const
{
cout << "Foo const" << endl;
}
};
int main()
{
MyClass cc;
//const MyClass ccc = cc;
MyClass ccc =cc;
cc.Foo();
ccc.Foo();
}

//In the second one the "const" is not shown because of we are not remaining 
//this one as constant we can change its value. 