#include <iostream>
#include <cmath>
using namespace std;

/* This  build a temperature converter application that allows the user to input temperature in degrees Fahrenheit
or degrees Celsius to convert that temperature to degrees Celsius degrees Fahrenheit. */


// Create a class Temp.

class Temp {
    private:
        float celsius;
        float fahrenheit;
    public:
        // Setter
        void Setcelsius(float fahrenheit){
            celsius =  (5.0 / 9.0) * (fahrenheit - 32);
        }
        void Setfahrenheit(float celsius){
            fahrenheit = celsius * (9.0 / 5.0) + 32;
        }
         // Getter
         float Getcelsius(){
             return ceil(celsius);
         }
         float Getfahrenheit(){
             return fahrenheit;
         }


};
// Create a void function to display the result.
void repeat () {
    Temp myTemp;
    cout << endl << "Choose a temperature to convert to (Celsius or Fahrenheit), " << endl;
    cout << "\"f\" stands for Fahrenheit to Celsius and \"c\" the reverse: ";
    char choose;
    cin >> choose;
    try {
        if(choose == 'f') {
            cout << endl << "Enter your Fahrenheit temperature: ";
            float fah;
            cin >> fah;
            myTemp.Setcelsius(fah);
            cout << endl << myTemp.Getcelsius()<< " degrees Celsius." << endl;
            } else if(choose == 'c') {
                cout << endl << "Enter your degrees Celsius: ";
                float cel;
                cin >> cel;
                myTemp.Setfahrenheit(cel);
                cout << endl << myTemp.Getfahrenheit() << " degrees Fahrenheit" << endl;

            } else {
                 throw(choose);

            }

        }
        catch (char choose) {
            cout << "Choose c or f not " << choose;
        }

}
int main() {
    repeat();
    cout << endl << "Do you want to continue(y/n): ";
    // Get a letter from the user.
    char letter;
    cin >> letter;
    // Create a while loop to get the user decision.
    while(letter == 'y') {
        repeat();
        cout << endl << "Do you want to continue(y/n): ";
        char letter;
        cin >> letter;
        if(letter == 'n') {
            cout << "Good bye!" << endl;
            break;
        }
    }
    return 0;
}



