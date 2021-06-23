#include<iostream>
using namespace std;
void countNote() {

   int amount;
   cin >> amount;
   int notes[10] = { 2000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
   int noteFreq[10] = { 0 };
   if (amount > 25000 || amount < 0){
        cout << "Error";
   }else{
       for (int i = 0; i < 10; i++) {
        if (amount >= notes[i]) {
            noteFreq[i] = amount / notes[i];
            amount = amount - noteFreq[i] * notes[i];
      }
   }
        for (int i = 0; i < 10; i++){
            cout << noteFreq[i] << " ";
   }
   }
}
int main() {
    countNote();
}
