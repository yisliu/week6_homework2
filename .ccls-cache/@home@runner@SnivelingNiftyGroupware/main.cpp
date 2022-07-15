#include <iostream>
#include <cmath>
using namespace std;

// int prime(int a, int &temp, int i = 0){
      //make for loop to check for other divisor and to see which is bigger?
    //divide a by i, then check if prime.
  // int temp2;
  // for(int j = 0;  j<=a; j++, i++){
  // //a=21, abs(21/i), 
  //   temp = abs(a/i);
  //   if(temp%i==0){
  //     continue;
  //   }
  //   else{
  //     temp2 = temp;
  //     c=max(temp, temp2);
  //   }
  // }
// }
//

/**

func is_prime(x: integer) {
  return true ? if x is prime : false;
}

main() {
  if max % 2 == 0; y = max  / 2;

  if y is prime; then cout;
  
  for (i = 3; i < max; i++) {
    if (max % i == 0) {
        if is_prime(i) == true; return max / i; return;
        else {
            continue;
        }
    }
  }
}

maybe start from the biggest nmber and then check if it divide the user input, after that check if it is prime. If it is, output.
  */

int prime(int a, int temp){
  for(int i = 2; i<a/2; i++){
    if(temp%i==0){
      return 0;
    }
    else{
      return 1;
    }
  }
}

int main() {
  //make variables
  int a, b, c;
  //input
  cin>>a;
  int i = 0;
  //use i to check for divisor?
  for(int i = a-1; i>1; i--){
    int temp = a;
    if(temp%i==0){
      int b = i;
      int prime1 = prime(a, b);
      if(prime1==0){
        // cout<<prime1;
        // cout<<"lol "<<i<<b;
        continue;
      }
      else{
        cout<<b;
        break;
      }
      //call function, if function = true, return
    }
    else{
      continue;
    }
  }
  // while(i != a){
  //   //works
  //   //cout<<6;
  //   //make temp for result of the divison
  //   int temp;
  //   int temp2;
  //   for(int j = 0;  j<=a; j++, i++){
  //     //a=21, abs(21/i), 
  //     temp = abs(a/i);
  //     if(temp%i==0){
  //       continue;
  //     }
  //     else{
  //       temp2 = temp;
  //       c=max(temp, temp2);
  //     }
  // }
    
  // }
}