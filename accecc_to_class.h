#include<iostream>
using namespace std;
class base
{
public:
	int x;
private:int y;
protected:int z;
};
class publicchile:public base
{
public:
	void check() {
		x = 5;
		z = 8;
		//y = 9; 

	}
};
class protectedcchile :protected base
{
public:
	void check() {
		x = 5;
		z = 8;
		//y = 9; 

	}
};
class privatechile :private base
{
public:
	void check() {
		x = 5;
		z = 8;
		//y = 9; 

	}
};


