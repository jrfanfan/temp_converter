#include <iostream>
#include <cmath>
using namespace std;

/* This  build a temperature converter application that allows the user
to input temperature in degrees Fahrenheit
or degrees Celsius to convert that temperature to degrees Celsius degrees Fahrenheit. */


// Create a class Temp.

class Temp {
    private:
        // Private attribute
        float celsius;
        float fahrenheit;
    public:
        // Setter
        void Setcelsius(float fahrenheit){
            celsius =  (5.0 / 9.0) * (fahrenheit - 32);
        }
        // Setter
        void Setfahrenheit(float celsius){
            fahrenheit = celsius * (9.0 / 5.0) + 32;
        }
        // Setter
         float Getcelsius(){
             return ceil(celsius);
         }
         // Setter
         float Getfahrenheit(){
             return fahrenheit;
         }


};
// Create a void function to display the result.
void display () {
    // Create an object of myTemp.
    Temp myTemp;
    // Ask the user for a choice.
    cout << endl << "Choose a temperature to convert to (Celsius or Fahrenheit), " << endl;
    cout << "\"f\" stands for Fahrenheit to Celsius and \"c\" the reverse: ";
    // Create a variable that will store the user input.
    char choose;
    // The input.
    cin >> choose;
    //We use the try block to test some code.
    try {
        if(choose == 'f') {
            cout << endl << "Enter your Fahrenheit temperature: ";
            float fah;
            cin >> fah;
            // Call the setter function Celsius.
            myTemp.Setcelsius(fah);
            // Display the result with the getter function.
            cout << endl << myTemp.Getcelsius()<< " degrees Celsius." << endl;
            } else if(choose == 'c') {
                cout << endl << "Enter your degrees Celsius: ";
                float cel;
                cin >> cel;
                // Call the setter function Fahrenheit.
                myTemp.Setfahrenheit(cel);
                // Display the result with the getter funtion.
                cout << endl << myTemp.Getfahrenheit() << " degrees Fahrenheit" << endl;

            } else {
                // Throw an exception when a problem arise
                 throw(choose);

            }

        }
        catch (char choose) {
            cout << "Choose c or f not " << choose;
        }

}
int main() {
    // Call the display function.
    display();
    cout << endl << "Do you want to continue(y/n): ";
    // Get a letter from the user.
    char letter;
    cin >> letter;
    // Create a while loop to continue or stop the program.
    while(letter == 'y') {
        // Call the display function.
        display();
        cout << endl << "Do you want to continue(y/n): ";
        char letter;
        cin >> letter;
        // The if condition to stop the program.
        if(letter == 'n') {
            cout << "Good bye!" << endl;
            break;
        }
    }
    return 0;
}



