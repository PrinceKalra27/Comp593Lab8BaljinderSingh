#include <iostream>
using namespace std;

int main() {
   int enteredAge;

   cin >> enteredAge;

   while (enteredAge < 16 || enteredAge > 30) {
      if (enteredAge < 16) {
         cout << "Very young" << endl;
      }
      else {
         cout << "Already adult" << endl;
      }
      cin >> enteredAge;
   }

   cout << "Perfect match";

   return 0;
}