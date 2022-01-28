#include <iostream>
using namespace std;

struct Button{
  bool is_on;
  Button(bool a){
    is_on = a;
  }
  void push(){
    is_on = true;
  }
};
int main() {
 Button b = Button(false);
 cout << b.is_on << " \n";
 b.push();
 cout << b.is_on << endl;
}
