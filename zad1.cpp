#include <iostream>
using namespace std;

struct Switch{
  //description  nie zrozumialem co ta zmienna ma robic
  bool toggled;
 bool is_on(){
    return toggled;
  }
  bool toggle(){
    if(toggled == false) toggled = true;
    else toggled = false;
    return toggled;
  }
};
int main() {
Switch a;
a.toggled = true;
cout << a.is_on() << " " << a.toggle();
}
