//#include <iostream>
//using namespace std;
//
//class account {
//private:
//	int balance;
//public:
//	account(int = 0);
//	void credit(int);
//	void debit(int);
//	int getbalance();
//};
//
//account::account(int b) {
//	if (b >= 0) {
//		balance = b;
//		cout << "initial balance is valid" << endl;
//	}
//	else {
//		balance = 0;
//		cout << "initial balance is invalid" << endl;
//	}
//};
//
//void account::credit(int b) {
//	balance += b;
//};
//
//void account::debit(int b) {
//	if (b > balance) {
//		cout << "debit amount exceeded account balance" << endl;
//	}
//	else {
//		balance -= b;
//	}
//}
//
//int account::getbalance() {
//	return balance;
//}
//
//int main() {
//
//	int test;
//	cin >> test;
//
//	int joke;
//	cin >> joke;
//
//	account sohum;
//	// account sohum(213);
//	account shaadi(joke);
//
//	sohum.credit(1);
//	shaadi.credit(10);
//
//	sohum.debit(499);
//	shaadi.debit(9);
//	
//	cout << "sohum's balance: " << sohum.getbalance() << endl;
//	cout << "shaadi's balance: " << shaadi.getbalance() << endl;
//
//	return 0;
//}