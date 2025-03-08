#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;
class employee
{
public:employee(const string& f, const string& l, const string& ssn) {
	setfirstname(f);
	setlastname(l);
	setssn(ssn);

}
	  void setfirstname(const string f) { firstname = f; }
	  void setlastname(const string l) { lastname = l; }
	  void setssn(const string ssn) { this->ssn = ssn; }
	  string getfirstname()const { return firstname; }
	  string getlastname()const { return lastname; }
	  string getssn()const { return ssn; }
	virtual  string info() const  {
		  ostringstream output;
		  output << setprecision(2) << fixed;
		  output << "first name " << getfirstname() << "\n last name " << getlastname() << "\n ssn " << getssn() << "e";
		  return output.str();
	  }
protected:
	string firstname;
	string lastname;
	string ssn;

};
class commicionem :public employee
{
public:
	commicionem(const string& f, const string& l, const string& ssn, double sales = 0.0, double p = 0.0) :employee(f, l, ssn) {
		setsalessalary(sales);
		setprecentage(p);
	}
	void setsalessalary(const double s) { if (s >= 0.0) salesSalary = s; }
	void setprecentage(const double p) { if (p >= 0.0 && p < 1) precentage = p; }
	double getsalessalary() const { return salesSalary; }
	double getprecentage()const { return precentage; }
virtual	double earning()const  { return getsalessalary() * getprecentage(); }
virtual	string info() const override{
		ostringstream output;
		output << setprecision(2) << fixed;
		output << employee::info() << "\ngross sales " << getsalessalary() << "\nprecentag " << getprecentage() << "\n earning" << earning();
		return output.str();
	}
virtual ~commicionem()
{
	cout << "comminconem destructor" << endl;
}
protected:
	double salesSalary;
	double precentage;
};

class base_salaried_commission :public commicionem
{
public:
	base_salaried_commission(const string& f, const string& l, const string& ssn, double sales = 0.0, double p = 0.0, double base = 0.0) :commicionem(f, l, ssn, sales, p) { setbasedsalary(base); }
	void setbasedsalary(double bs) { based_salary = bs; }
	double getbasesalessalary() const { return based_salary; }
	virtual double earning()const override {
		return (/*getsalessalary() * getprecentage()*/commicionem::earning() + getbasesalessalary());
	}
virtual	string info() const override{
		ostringstream output;
		output << setprecision(2) << fixed;
		output << commicionem::info() << "\nbase salary" << getbasesalessalary();
		return output.str();

	}
~base_salaried_commission()
{
	cout << "base salary destructor" << endl;
}
private:
	double based_salary;
};
