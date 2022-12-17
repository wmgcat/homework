#include <iostream>
#include <stdio.h>
#include <fstream>
//#include <string>

using namespace std;

class FileWasNotOpenedException : public exception {
  public:
    string what() {
      return "file was not opened!";
    }
};

void readFile(string path) {
  fstream file;
  file.open(path, ios::in);
  if (!file) throw FileWasNotOpenedException();
  char ch;
  while(true) {
    file >> ch;
    if (file.eof()) break;
    printf("%c", ch);
  }
  file.close();
}


int main() {
  try {
    readFile("test.txt");
  }
  catch(FileWasNotOpenedException &err) {
    printf("Error!\nMessage: %s", err.what().c_str());
  }
}
