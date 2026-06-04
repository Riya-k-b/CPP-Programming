#include<iostream>
#include<vector>
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
    vector<student> students;
    char choice;
    do
    {
        student s;
        s.getdata();
        students.push_back(s);
        cout << "Add another student? (y/n):";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "\n==== student Details ====\n";
    for(int i=0;i< students.size();i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        students[i].display();
    }
    return 0;
}
 