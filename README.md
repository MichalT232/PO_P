# Kalkulator

### Autor: Michał Tasior 
### Nr. indeksu: 287179

## Opis:
Aplikacja, ktorą stworzyłem jest to kalkulator, który posiada interfejs graficzny. Obsługuje on podstawowe operacje matematyczne jak i również posiada wbudowaną obsługę błędów. 

## Zastosowanie: 
Język programowania: C++
Aplikacja okienkowa(GUI): QT 6.9.0

## Wymagania systemowe:
System: Windows

## Funkcjonalność:
dodawanie, odejmowanie, mnożenie, dzielenie, modulo
Prosty w obsłuce interfejs
Obsługa błędów

## Uruchomienie:
Włączasz plik klakulator.exe 2 razy PPM i aplikacja się otwiera. 

## Kawałek kodu c++:
class Kalkulator {
private:
double memory;
bool memory_used;

public:

Kalkulator() : memory(0), memory_used(false) {}


double dodaj(double a, double b) { return a + b; }
double odejmij(double a, double b) { return a - b; }
double razy(double a, double b) { return a * b; }

double dziel(double a, double b) {
if (b == 0) {
cout << "B nie moze byc 0";
return 0;
}
return a / b;
}

double modulo(double a, double b) {
if (b == 0) {
cout << "B nie moze byc 0";
return 0;
}
return fmod(a, b);
}


