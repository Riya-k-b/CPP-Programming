#include <iostream>
using namespace std;

class Trainer {
public:
    virtual void conductSession() {
        cout << "Trainer conducts a general session" << endl;
    }
};

class CppTrainer : public Trainer {
public:
    void conductSession()  override {
        cout << "C++ Trainer conducts OOP session" << endl;
    }
    
};
class AITrainer : public Trainer {
public:
    void conductSession()  override {
        cout << "AI Trainer conducts machine learning session" << endl;
    }
    
};
class JavaTrainer : public Trainer {
public:
    void conductSession()  override {
        cout << "Java Trainer conducts web development session" << endl;
    }
    
};

int main() {

    Trainer* trainer;

    CppTrainer cppTrainer;

    trainer = &cppTrainer;
    trainer->conductSession();

    
    AITrainer aiTrainer;

    trainer = &aiTrainer;
    trainer->conductSession();

    
    JavaTrainer javaTrainer;

    trainer = &javaTrainer;
    trainer->conductSession();


  
    return 0;
}