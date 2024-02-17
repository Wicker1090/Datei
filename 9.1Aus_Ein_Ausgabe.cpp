//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

for



int main() {
    cout << "Vorkabeltraine \n";
    cout << "Bitte treffe eine Auswal:";
    cout << "(2) Vorkabeltest starten \n";
    string option;
    cin >> option;


    if(option == "1") {
        cout << "Welchee Vorkabel (Deutsch)?";
        string german_word;
        string spanish_word;
        cin >> german_word;
        cout << "Wie lautet die Übersetzung"
        cin >> spanish_word;
        cout << german_word + " lautet auf Spanisch " +
        spanish_word; 

} else {
    cout << " Vorkabeltest wird gestartet...";
}

return 0;