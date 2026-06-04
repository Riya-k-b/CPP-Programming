#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imag;
    
    public:
        Complex(double r = 0, double i = 0) : real(r), imag(i) {}
        
        // 1. Arithmetic operator (+)
        Complex operator+(const Complex& other) const {
            return Complex(real + other.real, imag + other.imag);
        }
        
        // 2. Subtraction operator (-)
        Complex operator-(const Complex& other) const {
            return Complex(real - other.real, imag - other.imag);
        }
        
        // 3. Unary minus (negate)
        Complex operator-() const {
            return Complex(-real, -imag);
        }
        
        // 4. Equality operator (==)
        bool operator==(const Complex& other) const {
            return (real == other.real) && (imag == other.imag);
        }
        
        // 5. Prefix increment (++c)
        Complex& operator++() {
            ++real;
            return *this;
        }
        
        // 6. Postfix increment (c++) — dummy int parameter
        Complex operator++(int) {
            Complex temp = *this;
            ++real;
            return temp;
        }
        
        // 7. Subscript operator ([])
        double operator[](int index) const {
            if (index == 0) return real;
            if (index == 1) return imag;
            throw out_of_range("Index must be 0 (real) or 1 (imag)");
        }
        
        // 8. Friend function for output (<<)
        friend ostream& operator<<(ostream& os, const Complex& c);
        
        // 9. Friend function for input (>>)
        friend istream& operator>>(istream& is, Complex& c);
};

// Friend function definitions (outside class)
ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real;
    if (c.imag >= 0)
        os << " + " << c.imag << "i";
    else
        os << " - " << (-c.imag) << "i";
    return os;
}

istream& operator>>(istream& is, Complex& c) {
    cout << "Enter real part: ";
    is >> c.real;
    cout << "Enter imag part: ";
    is >> c.imag;
    return is;
}

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);
    
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    
    cout << "c1 + c2 = " << (c1 + c2) << endl;
    cout << "c1 - c2 = " << (c1 - c2) << endl;
    cout << "-c1 = " << (-c1) << endl;
    cout << "c1 == c2: " << (c1 == c2 ? "true" : "false") << endl;
    
    cout << "c1++ = " << (c1++) << ", after: " << c1 << endl;
    cout << "++c1 = " << (++c1) << endl;
    
    cout << "c1[0] = " << c1[0] << ", c1[1] = " << c1[1] << endl;
    
    return 0;
}