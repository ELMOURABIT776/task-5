#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double weight, height, bmi;


    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;


    bmi = weight / (height * height);


    cout << fixed << setprecision(2);
    cout << "Your BMI is: " << bmi << endl;


    if (bmi < 18.5) {
        cout << "You are Underweight." << endl;
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "You have a Normal weight." << endl;
    }
    else if (bmi >= 25 && bmi < 29.9) {
        cout << "You are Overweight." << endl;
    }
    else {
        cout << "You are Obese." << endl;
    }

    return 0;
}

