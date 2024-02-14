#include <cstdlib>
#include <iostream>  //
#include <fstream>  //Datei beschreiben und lesen
#include <string>

using namespace std;                
int main(int argc, char *argv[])        //
{
    char n_t, n_f;
    ifstream infile("Hello_World.txt");
    cout << "Terminaleingabe: "; cin >> n_t;
    cout << "Dateieingabe: " << endl;
    infile >> n_f;
    
    cout << endl;
    cout << " Die Dateiausgabe lautet." << n_f << endl;
    cout << " Die Terminaleingabe lautet. " << n_t << endl;
    cout << endl;
    
    return EXIT_SUCCESS;
}