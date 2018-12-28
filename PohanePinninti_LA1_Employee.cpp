//#include <iostream>
//using namespace std;
//
//class Employee {
//private:
//	string firstName;
//	string lastName;
//	int monthlySalary;
//public:
//	Employee(string = "John", string = "Doe", int = 10000);
//	void setFirstName(string);
//	void setLastName(string);
//	void setMonthlySalary(int);
//	string getFirstName();
//	string getLastName();
//	int getMonthlySalary();
//};
//
//Employee::Employee(string x, string y, int a) {
//	firstName = x;
//	lastName = y;
//	monthlySalary = a;
//}
//
//void Employee::setFirstName(string i) {
//	firstName = i;
//}
//
//void Employee::setLastName(string j) {
//	lastName = j;
//}
//
//void Employee::setMonthlySalary(int k) {
//	if (k > 0) {
//		monthlySalary = k;
//	}
//	else
//		monthlySalary = 0;
//}
//
//string Employee::getFirstName() {
//	return firstName;
//}
//
//string Employee::getLastName() {
//	return lastName;
//}
//
//int Employee::getMonthlySalary() {
//	return monthlySalary;
//}
//
//int main() {
//
//	Employee shaadi;
//	Employee sohum;
//
//	shaadi.setFirstName("Shaadi");
//	shaadi.setLastName("Jain");
//	shaadi.setMonthlySalary(1);
//
//	sohum.setFirstName("Sohum");
//	sohum.setLastName("Cabello");
//	sohum.setMonthlySalary(369);
//
//	cout << "Shaadi's yearly salary: " << shaadi.getMonthlySalary() * 12 << endl;
//	cout << "Sohum's yearly salary: " << sohum.getMonthlySalary() * 12 << endl;
//
//	cout << "After a 10% raise to montly salaries: " << endl;
//	cout << "Shaadi's yearly salary: " << shaadi.getMonthlySalary() * 1.10 * 12<< endl;
//	cout << "Sohum's yearly salary: " << sohum.getMonthlySalary() * 1.10 * 12 << endl;
//
//	return 0;
//}