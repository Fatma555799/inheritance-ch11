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
		  string info() const {
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
	class commicionem 
	{
		
	public:
		employee e;
		commicionem(const string& f, const string& l, const string& ssn, double sales = 0.0, double p = 0.0) : e{ f, l, ssn } {
			setsalessalary(sales);
			setprecentage(p);
		}

		void setsalessalary(const double s) { if (s >= 0.0) salesSalary = s; }
		void setprecentage(const double p) { if (p >= 0.0 && p < 1) precentage = p; }
		double getsalessalary() const { return salesSalary; }
		double getprecentage()const { return precentage; }
		double earning()const { return getsalessalary() * getprecentage(); }
		string info() const {
			ostringstream output;
			output << setprecision(2) << fixed;
			output << e.info() << "\ngross sales " << getsalessalary() << "\nprecentag " << getprecentage() << "\n earning" << earning();
			return output.str();
		}
	protected:
		double salesSalary;
		double precentage;
	};

	class base_salaried_commission 
	{
		commicionem c;
	public:
		base_salaried_commission(const string& f, const string& l, const string& ssn, double sales = 0.0, double p = 0.0, double base = 0.0) :c(f, l, ssn, sales, p) { setbasedsalary(base); }
		void setbasedsalary(double bs) { based_salary = bs; }
		double getbasesalessalary() const { return based_salary; }
		double earning()const {
			return (/*getsalessalary() * getprecentage()*/c.earning()) + getbasesalessalary();
		}
		string info() const {
			ostringstream output;
			output << setprecision(2) << fixed;
			output << c.info() << "\nbase salary" << getbasesalessalary();
			return output.str();

		}
	private:
		double based_salary;
	};
