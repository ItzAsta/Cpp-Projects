#include <iostream>
using namespace std;

int main() {

    float miles;

    cout << "\n\n Konvertering av miles til kilometer: \n";
    cout << "Skriv inn hvor mange miles du vil konvertere: ";

    cin >> miles;
    float kilometer = miles * 1.609344;
    cout << "i " << miles << " miles er det " << kilometer << " Kilometer";
}