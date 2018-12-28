//#include <iostream>
//#include <string>
//using namespace std;
//
//class Invoice {
//private:
//	string partNumber;
//	string partDescription;
//	int quantity;
//	int price;
//public:
//	Invoice(string = "0000", string = "Default Part", int = 1, int = 1);
//	void setPartNumber(string);
//	void setPartDescription(string);
//	void setQuantity(int);
//	void setPrice(int);
//	string getPartNumber();
//	string getPartDescription();
//	int getQuantity();
//	int getPrice();
//	int getInvoiceAmount();
//};
//
//Invoice::Invoice(string x, string y, int z, int a) {
//	partNumber = x;
//	partDescription = y;
//	quantity = z;
//	price = a;
//};
//
//void Invoice::setPartNumber(string i) {
//	partNumber = i;
//};
//
//void Invoice::setPartDescription(string j) {
//	partDescription = j;
//};
//
//void Invoice::setQuantity(int k) {
//	if (k > 0) {
//		quantity = k;
//	}
//	else
//		quantity = 0;
//};
//
//void Invoice::setPrice(int p) {
//	if (p > 0) {
//		price = p;
//	}
//	else
//		price = 0;
//};
//
//string Invoice::getPartNumber() {
//	return partNumber;
//};
//
//string Invoice::getPartDescription() {
//	return partDescription;
//};
//
//int Invoice::getQuantity() {
//	return quantity;
//};
//
//int Invoice::getPrice() {
//	return price;
//};
//
//int Invoice::getInvoiceAmount() {
//	return quantity * price;
//};
//
//int main() {
//
//	Invoice shaadi;
//	Invoice somila;
//	
//	string partN;
//	cout << "Enter part number: ";
//	cin >> partN;
//	string partD;
//	cout << "Enter part description: ";
//	cin >> partD;
//	int test;
//	cout << "Enter part quantity: ";
//	cin >> test;
//	int joke;
//	cout << "Enter part price: ";
//	cin >> joke;
//
//	shaadi.setPartNumber(partN);
//	shaadi.setPartDescription(partD);
//	shaadi.setQuantity(test);
//	shaadi.setPrice(joke);
//
//	cout << endl;
//	cout << "Shaadi's invoice: " << endl;
//	cout << shaadi.getPartNumber() << endl;
//	cout << shaadi.getPartDescription() << endl;
//	cout << shaadi.getQuantity() << endl;
//	cout << shaadi.getPrice() << endl;
//	cout << shaadi.getInvoiceAmount() << endl;
//	cout << endl;
//
//	cout << "Somila is default" << endl;
//	cout << "Somila's invoice: " << endl;
//	cout << somila.getPartNumber() << endl;
//	cout << somila.getPartDescription() << endl;
//	cout << somila.getQuantity() << endl;
//	cout << somila.getPrice() << endl;
//	cout << somila.getInvoiceAmount() << endl;
//	cout << endl;
//
//	return 0;
//}