#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
class StudentCard {
  public:
    static StudentCard create(int _old) {
      StudentCard st;
      st.old = _old;
      st.course = 1;
      return st;
    }
    void setCourse(int my_old) {
      int range = my_old - old;
      if (range > 0) {
        course = 1 + range;
      }
    }
    int getCourse() { return course; }
    void getInfo() {
      printf("student card:\ncourse: %i\nold in start study: %i\n\n", course, old);
    }
  private:
    int old, course;
};

class Person {
  public:
    Person(string _name, string _gender, int _old, int _mass) {
      name = _name;
      gender = _gender;
      old = _old;
      mass = _mass;
      is_student = false;
    } 
    int getOld() { return old; }
    int getMass() { return mass; }
    string getName() { return name; }
    string getGender() { return gender; }
    void setOld(int newold) {
      if (newold < old) {
        printf("Error!\n%s can't be less years old than he is now!\n", name.c_str());
      } else {
        old = newold;
        if (is_student) {
          studentcard.setCourse(old);
        }
        printf("setting new old from %s: %i\n", name.c_str(), old);
      }
    }
    void setMass(int newmass) {
      mass = newmass;
      printf("setting new mass from %s: %i\n", name.c_str(), mass);
    }
    void getInfo() {
      printf("info about %s:\ngender: %s\nold: %i\nmass: %ikg\n", name.c_str(), gender.c_str(), old, mass);
      if (is_student) {
        studentcard.getInfo();
      }
    }
    void setStudent() {
      if (old >= 18 && !is_student) {
        studentcard = StudentCard::create(old);
        is_student = true;
      } else {
        if (old < 18) {
          printf("Error!\n%s must be 18 years old or older to become a student!\n", name.c_str());
        }
        if (is_student) {
          printf("Error!\n%s alredy is student!\n", name.c_str());
        }
      }
    }
  private:
    string name, gender;
    int mass, old;
    bool is_student;
    StudentCard studentcard;
};
int main() {
  Person maksim("Maksim", "male", 17, 75);
  Person anna("Anna", "female", 29, 60);

  maksim.setStudent();
  anna.setStudent();
  anna.setOld(30);
  maksim.setOld(18);
  maksim.setStudent();
  maksim.setOld(17);
  maksim.setOld(20);
  anna.setStudent();
  maksim.getInfo();
  anna.getInfo();
}
