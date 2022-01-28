#include <iostream>
using namespace std;
struct Point{
 int point_x;
 int point_y;
};

struct Square{
Point point;
double a;
};

int main() {
  Square square;
  square.point.point_x = 0;
  square.point.point_y = 0;
  square.a = 10;
}
