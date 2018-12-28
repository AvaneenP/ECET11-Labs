#include <iostream>
#include<iomanip>
#include<Windows.h>
using namespace std;

class GradeList {
private:
	int level;
	float grade;
	int gradeList[4][5];
public:
	GradeList();
	void setLevel(int);
	void setGrade(float);
	void displayTable();
};


GradeList::GradeList() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++)
			gradeList[i][j] = 0;
	}
}

void GradeList::setLevel(int iii) {
	level = iii;

}

void GradeList::setGrade(float jjj) {
	grade = jjj;
}

void GradeList::displayTable() {
	if (grade >= 89.5)
		gradeList[level - 9][0]++;
	else if (grade >= 79.5)
		gradeList[level - 9][1]++;
	else if (grade >= 69.5)
		gradeList[level - 9][2]++;
	else if (grade >= 64.9)
		gradeList[level - 9][3]++;
	else
		gradeList[level - 9][4]++;
	system("cls");
	cout << "Academy Grade Distribution" << endl << endl;
	cout << setw(12) << "A" << setw(4) << "B" << setw(4) << "C" << setw(4) << "D" << setw(4) << "F" << endl;
	for (int i = 0; i < 4; i++) {
		cout << "GRADE" << setw(3) << i + 9 << ":";
		for (int j = 0; j < 5; j++) {
			cout << setw(3) << gradeList[i][j] << "|";
		}
		cout << endl;
	}
	cout << endl;
}


int main() {

	GradeList grades;
	char test = '0';
	while (test != 'q') {
		float grade;
		int level;
		cout << "Enter grade level: ";
		cin >> level;
		grades.setLevel(level);
		cout << "Enter grade: ";
		cin >> grade;
		grades.setGrade(grade);
		grades.displayTable();

		cout << "Continue[q to quit]? ";
		cin >> test;
	}

	return 0;
}
