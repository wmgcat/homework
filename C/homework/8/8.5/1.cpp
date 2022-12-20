#include <stdio.h>
#include <string>
#define PI 3.14
#define MAX 6


class Figure {
  public:
    std::string lable;
    Figure() {
      lable = "Figure";
    }
    virtual int area() {
        return 0;
    }
};

class Parallelogram : public Figure {
  public:
    Parallelogram() {}
    Parallelogram(int _w, int _h) {
      w = _w;
      h = _h;
      lable = "Parallelogram";
    }
    int area() {
      return w * h;
    }
  protected:
    int w, h;
};

class Rectangle : public Parallelogram {
  public:
    Rectangle() {}
    Rectangle(int _w, int _h) {
      w = _w;
      h = _h;
      lable = "Rectangle";
    }
    int area() {
      return w * h;
    }
};

class Square : public Parallelogram {
  public:
    Square() {}
    Square(int _w) {
      w = _w;
      lable = "Square";
    }
    int area() {
      return w * 2;
    }
};

class Rhombus : public Parallelogram {
  public:
    Rhombus() {}
    Rhombus(int _w, int _h) {
      w = _w;
      h = _h;
      lable = "Rhombus";
    }
    int area() {
      return .5 * h * w;
    }
};
class Circle : public Figure {
  public:
    Circle() {}
    Circle(int _radius) {
      radius = _radius;
      lable = "Circle";
    }
    int area() {
      return (float)radius * (float)radius * PI;
    }
  private:
    int radius;
};

int main() {
  // input:
  Figure figure1;
  Parallelogram figure2(10, 5);
  Rectangle figure3(12, 4);
  Square figure4(8);
  Rhombus figure5(8, 5);
  Circle figure6(16);
  
  Figure* figures[MAX] = {
    &figure1, &figure2, &figure3,
    &figure4, &figure5, &figure6
  };

  // output:
  printf("figures area:\n");
  for (int i = 0; i < MAX; i++) {
    printf("%i. %s area: %i\n", i + 1, figures[i]->lable.c_str(), figures[i]->area());
  }
  return 0;
}
