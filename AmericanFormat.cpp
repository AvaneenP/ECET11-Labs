//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//
//	string Date;
//
//	cout << "Enter the date in American Format" << endl;
//	cout << "Format: Month Day, Year\n";
//	cout << "Example: March 19, 2005\n\n\n";
//	cout << "Enter date: ";
//
//	getline(cin, Date, '\n');
//
//	int len = Date.length();
//
//	cout << "Date length is: " << len << " (Positions 0 --> "
//		<< len - 1 << ")" << endl;
//
//	// Extract the month
//
//	int i = Date.find(" "); // Return position where space occurs
//	cout << "Space occurs at position = " << i << endl;
//
//	string Month = Date.substr(0, i); // start at P0, i characters long
//	cout << "The month is: " << Month << endl;
//
//	// Extract the day
//
//	int k = Date.find(',');
//	string Day = Date.substr(i + 1, k - i - 1);
//	cout << "Comma occurs at position = " << k << endl;
//	cout << "The day is: " << Day << endl;
//
//	// Extract the year
//	string Year = Date.substr(k + 2, (Date.size()) - k - 2);
//	cout << "The year is: " << Year << endl;
//
//	string newDate = Day + " " + Month + " " + Year;
//	cout << "Original Date: " << Date << endl;
//	cout << "Converted Date: " << newDate << endl;
//
//	return 0;
//}