#include<iostream>
#include<sstream>
#include<iomanip>
#include"employee.h"
#include"accecc_to_class.h"
#include"package.h"
using namespace std;
class p
{
public:
	p() { cout << "p constructor" << endl; }
	int x;
		virtual void hi() { cout << "hi" << endl; }

private:

};
class pp:public p
{
public:
	pp() { cout << "pp constructor" << endl; }

	int y=11;
virtual	void specific() { cout << "specific" << endl; }
	void hi() { cout << "bye" << " " << y << endl; }
	//virtual void print() = 0;

private:

};

//class vichle
//{
//public:
//	int id{};
//	string getcolor() { return color; }
//private:
//	string color="red";
//protected:int model{};
//};
//
//class car :public vichle
//{
//public:
//	void setcolor()
//	{ id = 10; 
//	model = 45;
//	 // vichle::color = "red";//the private data member is inheritance but not accessible
//}
//	
//};
//class IBM:public vichle
//{
//public:
//	void setmodel(){ model = 123; }
//	
//
//private:
//
//};
//class Engine { 
//public:
//	Engine() { cout << "Engine Constructor\n"; }
//	~Engine() { cout << "Engine Destructor\n"; }
//};
//
// class grandparent
//{
//public:
//	grandparent() {
//		cout << "grand parent" << endl;
//	}
//	~grandparent() { cout << "grand parent destructor" << endl; }
//
//};
//	class parent :public grandparent
//	{
//	public:
//		parent(){
//			cout << " parent" << endl;
//			
//		}
//		parent(int x) { cout << x << endl; }
//		~parent() { cout << "parent destructor" << endl; }
//
//		};
//		class child:public parent
//		{
//			
//		public:
//			child(int y, int yy) :y{ yy } {
//				//parent::parent(y);
//				cout << "child" << endl;
//			}
//			~child() { cout << "child destructor" << endl; }
//			int y;
//			Engine e;
//			};
void main() {
	//car c;
	//cout<<c.getcolor();//that is confirm that private member is inherited but can't accessed so i access 
	////it with a public function in base class
	commicionem e1{ "fatma","usame","555-343-4334",1000,0.06 };
cout<<	e1.info()<<endl;
	base_salaried_commission b1{ "nada","usama","343-434-545",2000,0.09,1000 };
	cout << b1.info() << endl;
	base_salaried_commission ee{ "fatma","usame","555-343-4334",1000,0.06 ,1000 };
	cout << ee.info()<<endl<<endl;
	//child c(3,2);
	/*publicchile p1;
	p1.x;
	p1.check();
	protectedcchile p2;
	p2.check();
	*/
	/*package p("fatma", "ban", "mansoura", "egypt", 2323,
		"sara", "DD", "Doha", "quatr", 3443, 30, 3);
	p.info();
	twoday twoDayPackage("Alice", "123 Street", "New York", "NY", 10001,
		"Bob", "456 Avenue", "Los Angeles", "CA", 90001,
		8.0, 0.5, 2.0);
	cout << "Two-Day Package:\n";
	twoDayPackage.info();

	overnight overnightPackage("Alice", "123 Street", "New York", "NY", 10001,
		"Bob", "456 Avenue", "Los Angeles", "CA", 90001,
		8.0, 0.5, 0.2);
	cout << "Overnight Package:\n";
	overnightPackage.info();
	cout << "-----------------------------\n";*/
	//s sss(4);
	//cout << sss.v<<endl;
	//s ss(3);
	//cout << ss.v << endl;

	//p* parentptr{&pp};
	p* ptr1 = new p;
	ptr1->hi();
	p* ptr = new pp; 
	pp vt; vt.specific(); 
	p base_virtual_test; base_virtual_test.hi();
	ptr->hi();
	p* c{ &vt };
	c->hi();
	/*cout << endl << "\n" << endl;
	commicionem* c1{ &e1};
cout<<	c1->info()<<endl<<endl;
	base_salaried_commission* b2{ &b1 };
	cout<<b1.info()<<endl << endl;
	base_salaried_commission* cb{ &ee };
	cout << cb->info() << endl << endl;
	commicionem* cc{ &ee };
	cout<<cc->info()<<endl << endl;
	cc = &b1;
	cout << cc->info() << endl << endl;*/
}

