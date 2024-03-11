/*
kenneth guillont
kenneth.guillont83@myhunter.cuny.edu
lab 5b
*/

#include <iostream>
using namespace std;


bool isPrime(int x) {
    if(x <= 1) {
        return false;
    }
    else{
        for(int i = 2; i < x; i++) {
            if(x % i == 0) {
                return false;
            }
        }
        return true;
    }
}

bool isDivisibleBy(int x, int y) {
    if(x % y == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    cout << "enter integer n: ";
    int n; cin >> n;
    
    cout << "enter integer d: ";
    int d; cin >> d;

   bool divs = isDivisibleBy(n, d);

   if(divs == true) {
    cout << "Yes\n";
   }
   else {
    cout << "No\n";
   }

   bool prim = isPrime(n);

   if(prim == true) {
    cout << "Yes\n";
   }
   else {
    cout << "No\n";
   }

return 0;
}