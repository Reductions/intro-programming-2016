#include <iostream>

using std::cin;
using std::cout;

int main(){
  double A, B, C;
  cin>>A>>B>>C;
  double D = B*B -4*A*C;
  if (D == 0) {
    cout<<"1 koren\n";
  } else if (D > 0) {
    cout<<"2 korena\n";
  } else {
    cout<<"nyama koreni\n";
  }
}
