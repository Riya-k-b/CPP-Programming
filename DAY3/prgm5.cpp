#include<iostream>
using namespace std;
class student
{
    public:
       int *marks;
       student(int m)
       {
        marks = new int;
        *marks = m;
       }
       
};
int main()
{
    student s1(90);
    student s2 = s1;
    cout << "*s1 marks:" << *s1.marks << endl;
    cout << "*s2 marks:" << *s2.marks << endl;
    *s2.marks = 100;
    cout << "\n After changing s2: \n";
    cout << "*s1 marks:" << *s1.marks << endl;
    cout << "*s2 marks:" << *s2.marks << endl;
    return 0;
}


