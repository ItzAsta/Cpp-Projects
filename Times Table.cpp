#include <iostream>
using namespace std;




void en_gangen () {
    float en_gangen;
    for (int en_gangen = 1; en_gangen <= 10; en_gangen++)
        cout << en_gangen << "\n";

}

void to_gangen () {
    int to_gangen;
    for (int to_gangen = 2; to_gangen <= 20; to_gangen++, to_gangen++)
        cout << to_gangen << "\n";

}

void tre_gangen () {
    int tre_gangen;
    for (int tre_gangen = 3; tre_gangen <= 30; tre_gangen++, tre_gangen++, tre_gangen++)
        cout << tre_gangen << "\n";

}

void fire_gangen () {
    int fire_gangen;
    for (int fire_gangen = 4; fire_gangen <= 40; fire_gangen++, fire_gangen++, fire_gangen++, fire_gangen++)
        cout << fire_gangen << "\n";

}

void fem_gangen () {
    int fem_gangen;
    for (int fem_gangen = 5; fem_gangen <= 50; fem_gangen++, fem_gangen++, fem_gangen++, fem_gangen++, fem_gangen++)
        cout << fem_gangen << "\n";

}

void six_gangen () {
    int six_gangen;
    for (int six_gangen = 6; six_gangen <= 60; six_gangen++, six_gangen++, six_gangen++, six_gangen++, six_gangen++, six_gangen++)
        cout << six_gangen << "\n";

}

void syv_gangen () {
    int syv_gangen;
    for (int syv_gangen = 7; syv_gangen <= 70; syv_gangen++, syv_gangen++, syv_gangen++, syv_gangen++, syv_gangen++, syv_gangen++, syv_gangen++)
        cout << syv_gangen << "\n";

}

void otte_gangen () {
    int otte_gangen;
    for (int otte_gangen = 8; otte_gangen <= 80; otte_gangen++, otte_gangen++, otte_gangen++, otte_gangen++, otte_gangen++, otte_gangen++, otte_gangen++, otte_gangen++)
        cout << otte_gangen << "\n";

}

void ni_gangen () {
    int ni_gangen;
    for (int ni_gangen = 9; ni_gangen <= 90; ni_gangen++, ni_gangen++, ni_gangen++, ni_gangen++, ni_gangen++, ni_gangen++, ni_gangen++, ni_gangen++, ni_gangen++)
        cout << ni_gangen << "\n";

}

void ti_gangen () {
    int ti_gangen;
    for (int ti_gangen = 10; ti_gangen <= 100; ti_gangen++, ti_gangen++, ti_gangen++, ti_gangen++, ti_gangen++, ti_gangen++, ti_gangen++, ti_gangen++, ti_gangen++, ti_gangen++)
        cout << ti_gangen << "\n";

}





int main (){
    int x = 0;

    bool run = true;
    do {
        int svar;
        cout << "\n\n Velkommen Til Fabian Sin Gange Tabell!\n";
        cout << " 1-Gangen\n";
        cout << " 2-Gangen\n";
        cout << " 3-Gangen\n";
        cout << " 4-Gangen\n";
        cout << " 5-Gangen\n";
        cout << " 6-Gangen\n";
        cout << " 7-Gangen\n";
        cout << " 8-Gangen\n";
        cout << " 9-Gangen\n";
        cout << " 10-Gangen\n";
        cout << "\n\n Skriv hvilken tabell du vil se:";
        cin >> svar;

        x = svar;

        if (x == 1) {
            en_gangen();
            x = x;

        }

        else if (x == 2) {
            to_gangen();
            x = x;

        }

        else if (x == 3) {
            tre_gangen();
            x = x;

        }

        else if (x == 4) {
            fire_gangen();
            x = x;

        }

        else if (x == 5) {
            fem_gangen();
            x = x;

        }

        else if (x == 6) {
            six_gangen();
            x = x;

        }

        else if (x == 7) {
            syv_gangen();
            x = x;

        }

        else if (x == 8) {
            otte_gangen();
            x = x;

        }

        else if (x == 9) {
            ni_gangen();
            x = x;

        }

        else if (x == 10) {
            ti_gangen();
            x = x;

        }

        else {
            cout << "Tabellen for " << x << " er ikke tilgjengelig!";
        }

    }
    while (run = true);
        return 0;
}