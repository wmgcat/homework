#include <stdio.h>
#include <string>

using namespace std;

class Fraction {
  public:
    Fraction() {}
    Fraction(int _a, int _b) {
      if (_b == 0) throw overflow_error("divide by zero");
      a = _a;
      b = _b;
    }

    // math:
    Fraction operator+ (Fraction& other) {
      a = a * other.b + b * other.a;
      b *= other.b;
      if (b == 0) throw overflow_error("divide by zero");
      return *this;
    }
    Fraction operator* (Fraction& other) {
      a *= other.a;
      b *= other.b;
      if (b == 0) throw overflow_error("divide by zero");
      return *this;
    }
    Fraction operator/ (Fraction& other) {
      a *= other.b;
      b *= other.a;
      if (b == 0) throw overflow_error("divide by zero");
      return *this;
    }
    Fraction operator- (Fraction& other) {
      a = a * other.b - b * other.a;
      b *= other.b;
      if (b == 0) throw overflow_error("divide by zero");
      return *this;
    }

    // unary:
    Fraction& operator -- () {
      if (a - 1 <= 0) {
        b--;
        if (b == 0) throw overflow_error("divide by zero");
        a = b;
      } else --a;
      return *this;
    }
    Fraction operator -- (int) {
      Fraction temp = *this;
      --*this;
      return temp;
    }

    // logical:
    bool operator== (Fraction& other) { return (other.a == a) && (other.b == b); }
    bool operator!= (Fraction& other) { return !(*this == other); }
    bool operator< (Fraction& other) { return (a * b) < (other.a * other.b); }
    bool operator<= (Fraction& other) { return (*this < other) || (*this == other); }
    bool operator> (Fraction& other) { return (a * b) > (other.a * other.b); }
    bool operator>= (Fraction& other) { return (*this > other) || (*this == other); }
    
    // get info:
    string operator * () { return to_string(a) + "/" + to_string(b); } 
  private:
    int a, b;
};


int main() {
  try {
    Fraction a(1, 2), b(2,3);
    if (a <= b) { 
      Fraction c = a-- * b;
      printf("info:\na = %s\nb = %s\nc = %s\n", (*a).c_str(), (*b).c_str(), (*c).c_str());
    }
  }
  catch (overflow_error &err) {
    printf("Error!\nMessage: %s\n", err.what());
  }
  return 0;
}
