#include <iostream>

using namespace std;

char int_to_char(int i){
  return i + 55;
}

void ten_to_m(int a, int b){
  if (a == 0){
    return;
  }

  int res = a%b;

  ten_to_m(a/b, b);

  if(res < 10){
    cout<<res;
  }

  else {
    cout<<int_to_char(res);
  }
}

int main (){
  int N, M;
  cin>>N>>M;
  ten_to_m(N, M);
  cout<<endl;
}
