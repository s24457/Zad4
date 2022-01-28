#include <iostream>
using namespace std;
struct Point{
 int point_x;
 int point_y;
};

struct Circle{
Point point;
double r;
};

int main() {
  Circle circle;
  circle.point.point_x = 0;
  circle.point.point_y = 0;
  circle.r = 10;
}
