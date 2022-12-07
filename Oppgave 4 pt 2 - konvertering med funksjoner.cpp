#include <iostream>
using namespace std;




// funksjonen som konverterer miles til kilometer
void miles () {
    float miles;

    cout << "\n\n Konvertering av miles til kilometer: \n";
    cout << "Skriv inn hvor mange miles du vil konvertere: ";

    cin >> miles;
    float kilometer = miles / 1.609344;
    cout << "i " << miles << " miles er det " << kilometer << " Kilometer";
}



// funksjonen som konverterer celsius til fahrenheit
void celsius () {
    float celsius;

    cout << "\n\n Konvertering av celsius til fahrenheit: \n";
    cout << "Skriv inn hvor mange celsius du vil konvertere: ";

    cin >> celsius;
    float fahr = celsius * 1.8 + 32;
    cout << celsius << " Grader celsius er " << fahr << " grader i fahrenheit";
}




// funksjonen som konverterer kilometer til miles
void kilometer () {
    float km;

    cout << "\n\n Konvertering av kilometer til miles: \n";
    cout << "Skriv inn hvor mange kilometer du vil konvertere: ";

    cin >> km;
    float mils = km / 1.609344;
    cout << "i " << km << " miles er det " << mils << " Kilometer";

}



// funksjonen som konverterer celsius til fahrenheit
void fahrenheit () {
    float fahrenheit;

    cout << "\n\n Konvertering av fahrenheit til celsius \n";
    cout << "Skriv inn hvor mange fahrenheit du vil konvertere: ";

    cin >> fahrenheit;
    float cels = fahrenheit - 32 * 0.5556;
    cout << fahrenheit << " Grader fahrenheit er " << cels << " grader i celsius";
}


// funksjonen som avslutter programmet.
void avslutt () {
    exit;

}




int main() {
    int i = 0;
    do {

    // Her lister den opp funksjonene som er tilgjengelige også ber den deg velge en av dem
    cout << "\n\n Velkommen til konverterings konsollen! \n";

    cout << "Du kan velge mellom å konvertere: \n";

    float valgfunk;

    cout << "1. Miles Til Kilometer\n";
    cout << "2. Celsius Til Fahrenheit\n";
    cout << "3. Kilometer Til Miles\n";
    cout << "4. Fahrenheit TIl Celsius\n";
    cout << "5. Forlat programmet.\n";
    cout << "\n";
    cout << "Skriv nummeret som viser til hva du vil gjøre: \n";

        cin >> valgfunk;
        i = valgfunk;

    // hvis du skriver 1 så kjører miles
    if (i == 1) {
        miles();
    i = i;
        
    
    }   

    // hvis du skriver 2 så kjører celsius
    else if (i == 2) {
        celsius();
    i = i;
        
    }
    

    // hvis du skriver 3 så kjører kilometer
    else if (i == 3) {
        kilometer();
    i = i;
        
    }

    // hvis du skriver 5 så kjører fahrenheit
    else if (i == 4) {
        fahrenheit();
    i = i;
        
    }

    i = i;

    }
    while (i < 5);
    return 0;
}