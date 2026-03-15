#include <iostream>
using namespace std;

int main()
{
    int n;
    float grade, credit;
    float totalCredits = 0;
    float totalPoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << "Enter grade for course " << i << ": ";
        cin >> grade;

        cout << "Enter credit hours for course " << i << ": ";
        cin >> credit;

        totalPoints += grade * credit;
        totalCredits += credit;
    }

    float cgpa = totalPoints / totalCredits;

    cout << "Your CGPA is: " << cgpa;

    return 0;
}