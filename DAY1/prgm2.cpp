#include<iostream>
using namespace std;
class Employee 
{
    public:
         int id;
         string name;
         float salary;
         void display()
         {
            cout << "ID : " << id << endl;
            cout << "Name : " << name << endl;
            cout << "Salary : " << salary << endl;
         }
};
int main()
{
    Employee e1,e2;
    e1.id=101;
    e1.name="Riya";
    e1.salary=60000;
    e2.id=102;
    e2.name="Priya";
    e2.salary=50000;
    e1.display();
    cout << endl;
    e2.display();
    return 0;
}