#include<iostream>
using namespace std;
class student
{
    public:
        string name;
        int age;
        void getdata()
        {
            cout << "Enter Name:";
             cin >> name;
             cout << "Enter Age:";
             cin >> age;
        }
        void display()
        {
            cout << "Name:" << name << endl;
            cout << "Age:" << age << endl;
        }
};
int main()
{
    student s1;
    s1.getdata();
    s1.display();
    return 0;
}