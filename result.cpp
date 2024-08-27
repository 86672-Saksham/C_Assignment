#include <iostream>
using namespace std;
char calculateGrade(int totalMarks) {
    if (totalMarks >= 90)
        return 'E'; 
    else if (totalMarks >= 80)
        return 'A'; 
    else if (totalMarks >= 70)
        return 'B'; 
    else if (totalMarks >= 60)
        return 'C';
    else
        return 'F'; 
}

int main() {
    int marks[5];
    int totalMarks = 0;

    for (int i = 0; i < 5; ++i) {
        cin >> marks[i];
        totalMarks += marks[i];
    }

    char grade = calculateGrade(totalMarks);

   cout << "Total Marks: " << totalMarks << endl;
    cout << "Grade: " << grade << endl;
}

