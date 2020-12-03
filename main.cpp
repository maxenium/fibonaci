//
//
//  fibonacci
//
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    //Damit wiederholte Eingabe möglich ist.
    while (true) {
    //int long um sehr große Zahlen suchen zu können
    int long suchzahl;
    int long ergebnis = 0;
        //Userdialog
    cout << "Geben Sie die Zahl an, zu der Sie \ndie nächstgelegene Fibonaccizahl suchen: ";
        //Input in Variable suchzahl speichern
    cin >> suchzahl;
        //Array für die Zahlensuche
    int long zahl[3] = {0, 0, 1};
    for (; ergebnis<suchzahl; ) {
        //Verschieben der in dem Array befindlichen Werte z.B. [1, 2, 3 ] wird zu [2, 3, 3]
        zahl[0]=zahl[1];
        zahl[1]=zahl[2];
        //Fibonaccialgorithmus
        zahl[2]=zahl[0]+zahl[1];
        //sobald ergebnis größer gesuchter Zahl wird gestoppt
        ergebnis=zahl[2];
    }
        cout << endl;
        
        //Abstände vergleichen und ergebnis definieren und ausgeben
        //Größere Zahl minus gesuchte Zahl wird mit gesuchter Zahl minus kleinere Zahl verglichen
    if (zahl[2] - suchzahl == suchzahl - zahl[1]) {
        cout << zahl[1] << " und " << zahl[2] << " sind die nächsten Fibonaccizahlen zur Zahl" << suchzahl << ".";
    } else if (zahl[2] - suchzahl < suchzahl - zahl[1]) {
        cout << zahl[2] << " ist die nächste Fibonaccizahl zu " << suchzahl << ".";
    } else {
        cout << zahl[1] << " ist die nächste Fibonaccizahl zu " << suchzahl << ".";
    }
        //Optischer Effekt in der Ausgabe
    cout << "\n\n\n";
    }
}

