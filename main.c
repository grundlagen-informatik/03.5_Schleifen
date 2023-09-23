#include <stdio.h>

// Funktionsprototyp für Aufgabe 1
void pyramide();

// Funktionsprototyp für Aufgabe 2
void notenRechner();

// Funktionsprototyp für Aufgabe 3
void pin();

// Am Hauptteil muss nichts geändert werden. Der Code kann in die zwei Funktionen geschrieben werden.
int main() {
    int aufgabe;

    printf("Fuer die Pyramide druecke: 1\n"
           "Fuer den Noten-Rechner druecke: 2\n");
    scanf("%d", &aufgabe);

    if (aufgabe == 1) {
        pyramide();
    } else if (aufgabe == 2) {
        notenRechner();
    } else if (aufgabe == 3){
        pin();
    }else {
        printf("Ungueltige Eingabe, Programm muss neu gestartet werden.\n");
    }
    return 0;
}


void pyramide(){
    // Hier muss der Code für die Pyramiden Aufgabe geschrieben werden.
}

void notenRechner(){
    // Hier muss der Code für den Noten-Rechner geschrieben werden.
}

void pin(){
    // Hier muss der Code für die Pin Aufgabe geschrieben werden.
}