#include <iostream>

using namespace std;

int main(){
  int n = 0;
  for(int i = 0; i < 101; i++){
    if(n % 3 == 0 && n % 5 == 0){
        cout << "FizzBuzz" << endl;
    }else if(n % 3 == 0){
        cout << "Fizz" << endl;
    }else if(n % 5 == 0){
        cout << "Buzz" << endl;
    }else{
        cout << n << endl;
    }
    n++;
  }
}
