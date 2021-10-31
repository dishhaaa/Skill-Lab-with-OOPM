#include <iostream>
class B {
private:
	int b;

public:
	B() { b = 5; }
	friend class D; // Friend Class
};

class D {
private:
	int d;

public:
	void showB (B &x)
	{
		// Since D is friend of B, it can access
		// private members of B
		std::cout << "B::b=" << x.b;
	}
};

int main()
{
	B b;
	D d;
	d.showB(b);
	return 0;
}

