#include <iostream>

using namespace std;

int main (){
  int N;
  cin>>N;
  int count = 0;

  for (int i = 1; N/i != 0; i*=10){
    count++;
  }

  // while(N != 0){
  //   count++;
  //   N/=10;
  // }

  cout<<count<<endl;
}
