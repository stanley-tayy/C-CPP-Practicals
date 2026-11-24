
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int students;
    int countA = 0, countB = 0, countC = 0;
    int countD = 0, countF = 0;

    cout << "How many students? ";
    cin >> students;

    for (int i = 1; i <= students; i++) {
        string name;
        double score;
        char grade;
        char modifier = ' ';

        cout << "\nEnter student name: ";
        cin >> name;

        cout << "Enter score: ";
        cin >> score;

        if (score < 0 || score > 100) {
            cout << "Invalid score!" << endl;
            continue;
        }

        if (score >= 90) {
            grade = 'A';
            countA++;
        } else if (score >= 80) {
            grade = 'B';
            countB++;
        } else if (score >= 70) {
            grade = 'C';
            countC++;
        } else if (score >= 60) {
            grade = 'D';
            countD++;
        } else {
            grade = 'F';
            countF++;
        }

        if (grade != 'F') {
            int lastDigit = (int)score % 10;

            if (grade == 'A') {
                if (score >= 97)
                    modifier = '+';
                else if (score < 93)
                    modifier = '-';
            } else {
                if (lastDigit >= 7)
                    modifier = '+';
                else if (lastDigit <= 3)
                    modifier = '-';
            }
        }

        cout << "\nStudent: " << name << endl;
        cout << "Score: " << fixed << setprecision(1) << score << "%" << endl;
        cout << "Grade: " << grade;

        if (modifier != ' ')
            cout << modifier;

        cout << endl;
    }

    cout << "\n===== CLASS SUMMARY =====" << endl;
    cout << "A grades: " << countA << endl;
    cout << "B grades: " << countB << endl;
    cout << "C grades: " << countC << endl;
    cout << "D grades: " << countD << endl;
    cout << "F grades: " << countF << endl;

    return 0;
}
