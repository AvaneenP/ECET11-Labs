//#include <iostream>
//#include<string>
//using namespace std;
//
//class MonkeyBusiness {
//private:
//	float food[3][7];
//public:
//	void setMonkeyData(float[][7]);
//	void dispTotalEaten();
//	void dispAvgWeekly();
//	void dispAvgDaily();
//	void dispLeastEaten();
//	void dispMostEaten();
//};
//
//
//void MonkeyBusiness::setMonkeyData(float arr[][7]) {
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 7; j++)
//			food[i][j] = arr[i][j];
//}
//
//void MonkeyBusiness::dispTotalEaten() {
//	cout << "Total food eaten for the week:\n";
//	for (int i = 0; i < 3; i++) {
//		float totalFood = 0;
//		for (int j = 0; j < 7; j++)
//			totalFood += food[i][j];
//		cout << "Monkey " << i + 1 << " total food intake: ";
//		cout << totalFood;
//		cout << " lbs" << endl;
//	}
//	cout << endl;
//}
//
//void MonkeyBusiness::dispAvgWeekly() {
//	cout << "Average food eaten for the week:\n";
//	for (int i = 0; i < 3; i++) {
//		float totalFood = 0;
//		for (int j = 0; j < 7; j++)
//			totalFood += food[i][j];
//		cout << "Monkey " << i + 1 << " average food intake: ";
//		cout << (totalFood/7);
//		cout << " lbs" << endl;
//
//	}
//	cout << endl;
//}
//
//
//
//void MonkeyBusiness::dispAvgDaily() {
//	cout << "The average amount eaten by the three monkeys:\n";
//	for (int i = 0; i < 7; i++) {
//		float totalFood = 0;
//		for (int j = 0; j < 3; j++)
//			totalFood += food[j][i];
//		cout << "The average amount eaten on day " << i + 1 << " is: ";
//		cout << (totalFood/3);
//		cout << " lbs" << endl;
//	}
//	cout << endl;
//}
//
//string numToDay(int day) {
//	switch (day) {
//	case 1:
//		return "Monday";
//	case 2:
//		return "Tuesday";
//	case 3:
//		return "Wednesday";
//	case 4:
//		return "Thursday";
//	case 5:
//		return "Friday";
//	case 6:
//		return "Saturday";
//	case 7:
//		return "Sunday";
//	}
//}
//
//void MonkeyBusiness::dispLeastEaten() {
//	float leastEaten = 100;
//	float monkeyNumLeastEaten;
//	int dayLeastEaten;
//	cout << "Least amount of food eaten:\n";
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 7; j++) {
//			float oldLeastEaten = leastEaten;
//			if (leastEaten > food[i][j])
//				leastEaten = food[i][j];
//			else
//				leastEaten = leastEaten;
//			if (leastEaten != oldLeastEaten) {
//				monkeyNumLeastEaten = i + 1;
//				dayLeastEaten = j + 1;
//			}
//		}
//
//	}
//	cout << "Monkey " << monkeyNumLeastEaten << " ate the least amount of food of ";
//	cout << leastEaten;
//	cout << " lbs on " << numToDay(dayLeastEaten) << endl;
//	cout << endl;
//}
//
//void MonkeyBusiness::dispMostEaten() {
//	float mostEaten = 0;
//	float monkeyNumMostEaten;
//	int dayMostEaten;
//	cout << "Most amount of food eaten:\n";
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 7; j++) {
//			float oldMostEaten = mostEaten;
//			if (mostEaten < food[i][j])
//				mostEaten = food[i][j];
//			else
//				mostEaten = mostEaten;
//			if (mostEaten != oldMostEaten) {
//				monkeyNumMostEaten = i + 1;
//				dayMostEaten = j + 1;
//			}
//		}
//
//	}
//	cout << "Monkey " << monkeyNumMostEaten << " ate the most amount of food of ";
//	cout << mostEaten;
//	cout << " lbs on " << numToDay(dayMostEaten) << endl;
//}
//
//
//
//
//int main() {
//
//	float food[3][7];
//	float input;
//	cout << "Enter lbs of food for each monkey for the 7 days on one line starting with Monday's value (i.e. M Tu W Th F Sa Su):\n";
//
//	for (int i = 0; i < 3; i++) {
//		cout << "Enter pounds of food for monkey " << i + 1 << " (day 1 - day 7): ";
//		for (int j = 0; j < 7; j++) {
//			cin >> input;
//			food[i][j] = input;
//		}
//	}
//
//	MonkeyBusiness report;
//	report.setMonkeyData(food);
//
//	cout << "\n\t\tMonkey Eating Habit Report\n\n";
//
//	report.dispTotalEaten();
//	report.dispAvgWeekly();
//	report.dispAvgDaily();
//	report.dispLeastEaten();
//	report.dispMostEaten();
//
//	return 0;
//}