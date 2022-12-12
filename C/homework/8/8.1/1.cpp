#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class Person {
  public: 
    Person() {}
    Person(string Name, string Gender, int Old, int Mass) {
      name = Name;
      gender = Gender;
      old = Old;
      mass = Mass;
    }
    void getInfo() {
      printf("info by %s:\ngender: %s\nold: %i\tmass: %ikg\n", name.c_str(), gender.c_str(), old, mass);
    }
    int getOld() { return old; }
    string getName() { return name; }
    string getGender() { return gender; }
    void setOld(int Old) { old = Old; }
    void setName(string Name) { name = Name; }
    void setGender(string Gender) { gender = Gender; }
  protected:
    string name, gender;
    int old;
  private:
    int mass;
};

class Student : public Person {
  public:
    Student(string Name, string Gender, int Old) {
      name = Name;
      gender = Gender;
      old = Old;
      course = 1;
    }
    Student(string Name, string Gender, int Old, int Course) {
      name = Name;
      gender = Gender;
      old = Old;
      course = Course;
    }
    Student(Person person) {
      name = person.getName();
      gender = person.getGender();
      old = person.getOld();
      course = 1;
    }
    Student(Person person, int Course) {
      name = person.getName();
      gender = person.getGender();
      old = person.getOld();
      course = Course;
    }
    void getInfo() {
      printf("info by student %s:\ngender: %s\nold: %i\tcourse: %i\n", name.c_str(), gender.c_str(), old, course);
    }
    void setCourse(int Course) { course = Course; }
    int getCourse() { return course; }
  private:
    int course;
};

int main() {
  Person user1("Vasya", "male", 18, 30);
  Student user2("Anna", "female", 19, 2);
  Student user3(user1, 4);
  user1.getInfo();
  user2.getInfo();
  user3.getInfo();
}
