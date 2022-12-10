#include "stdio.h"
#include "string.h"
#include <iostream>
using namespace std;

class Person {
 public:
    int getPassType() { return passtype; }
    string getName() { return name; }
  protected:
    string name;
    int passtype;
};
class Student : public Person {
  public:
    Student(string Name, int Course) {
      name = Name;
      course = Course;
      passtype = 1;
    }
    string getName() { return name + "(" + to_string(course) + " course)"; }
  private:
    int course;
};
class Teacher : public Person {
  public:
    Teacher(string Name) {
      name = Name;
      passtype = 2;
    }
};
class TechWorker : public Person {
  public:
    TechWorker(string Name) {
      name = Name;
      passtype = 3;
    }
};
class ScientWorker : public Person {
  public:
    ScientWorker(string Name) {
      name = Name;
      passtype = 4;
    }
};

class University {
  public:
    static void getDiscount(int price, Student pers) {
      int disc = discount(pers.getPassType());
      float newprice = getPrice(price, disc);
      info(pers.getName(), disc, newprice, price);
    }
    static void getDiscount(int price, Teacher pers) {
      int disc = discount(pers.getPassType());
      float newprice = getPrice(price, disc);
      info(pers.getName(), disc, newprice, price);
    }
    static void getDiscount(int price, TechWorker pers) {
      int disc = discount(pers.getPassType());
      float newprice = getPrice(price, disc);
      info(pers.getName(), disc, newprice, price);
    }
    static void getDiscount(int price, ScientWorker pers) {
      int disc = discount(pers.getPassType());
      float newprice = getPrice(price, disc);
      info(pers.getName(), disc, newprice, price);
    }    
    static void info(string name, int disc, int newprice, int price) {
      printf("%s discount: %i\nprice: %i(%i) to paid\n", name.c_str(), disc, newprice, price);
    }
    static int discount(int type) {
      int _discount = 0;
      switch(type) {
        case 1: _discount = 15; break;
        case 2: _discount = 30; break;
        case 3: _discount = 20; break;
        case 4: _discount = 34; break;
      }
      return _discount;
    }
    static int getPrice(int price, int _discount) {
      return (int)((float)price - (float)price * ((float)_discount / 100.0));
    }
};


int main() {
  Student stud1("Maksim", 3);
  Student stud2("Anna", 2);
  Teacher teach1("Anatoly");
  TechWorker tech1("Dmitry");  
  ScientWorker scient1("Oleg");

  int prices[] = { 100, 300, 275 };
  string eattype[] = { "breakfast", "lunch", "dinner" };
  for (int i = 0; i < sizeof(eattype) / sizeof(string); i++) {
    printf("%s discount:\n\n", eattype[i].c_str());
    University::getDiscount(prices[i], stud1);
    University::getDiscount(prices[i], stud2);
    University::getDiscount(prices[i], teach1);
    University::getDiscount(prices[i], tech1);
    University::getDiscount(prices[i], scient1);
    printf("\n\n");
  }
}
