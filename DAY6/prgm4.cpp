#include<iostream>
#include<string>
using namespace std;
class animal
{
    public:
       virtual void speak()
       {
        cout << "Animal makes sound " << endl;
       }
       void eat()
       {
        cout << "Animal eats" << endl;
       }
       virtual ~animal() {}
};
class dog : public animal
{
    public:
       void speak() override
       {
        cout << "dog barks: Woof!" << endl;
       }
       void eat()
       {
        cout << "dog eats kibble" << endl;
       }
};
class cat : public animal
{
    public:
       void speak() override
       {
        cout << "cat meows: Meow!" << endl;
       }
};
int main()
{
    animal* animals[3];
    animals[0] = new animal();
    animals[1] = new dog();
    animals[2] = new cat();
    cout << "====Virtual functions (polmorphic)===" << endl;
    for (int i=0; i < 3; i++)
    {
        animals[i]->speak();
    }
    cout << "====Non-Virtual functions (Not polmorphic)===" << endl;
    for (int i=0; i < 3; i++)
    {
        animals[i]->eat();
    }
    for (int i=0; i< 3; i++)
    {
        delete animals[i];
    }
    return 0;
}