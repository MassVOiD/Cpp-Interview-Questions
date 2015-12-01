#include <iostream>

class testa
{
public:
	static int a;
	int b;

	testa(int x)
	{
		a = x;
		b = a + x;
	}
};

int testa::a = 0;

int main(void)
{
	using namespace std;
	testa b1(5), b2(12);

	cout<<"b1.a="<<b1.a<<" b1.b="<<b1.b<<" b2.a="<<b2.a<<" b2.b="<<b2.b<<endl;

	getchar();
	return 0;
}
