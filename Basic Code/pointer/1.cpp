// pointer

#include<iostream>
using namespace std;

int main()
{
    int marks = 75;
    char grade = 'b';
    cout<< marks <<endl;
    cout<< &marks <<endl;
    
    int* addMarks= &marks;
    char* addGrade = &grade;
    
    cout <<&addMarks <<endl;
    cout <<*addMarks <<endl;
}