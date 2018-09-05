#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout<<"I am A class"<<endl;
	}
};
class B : public A
{
	public:
	B()
	{
		cout<<"I am B class"<<endl;
	}
};
int main()
{
	B obj;
	return 0;
}
