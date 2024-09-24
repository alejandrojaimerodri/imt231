#include <iostream> 
using namespace std;
int main(){

cout << "************************" << endl;
cout << "Bienvenido al juego de la adivinanza" << endl;
cout << "************************" << endl;

int numero_secreto = 42;
cout <<"El número secreto es ..." << numero_secreto << ". No lodiga a para nadie! "  << endl;

int adivina;
cout << "Cuál es  el número" ;
cin >> adivina;
cout << "El valor de su número es: " << adivina << endl;

if (adivina == numero_secreto) {
    // El jugador ha adivinado correctamente el número
    cout << "¡Felicitaciones! Has adivinado el número secreto." << endl;
} 
else if (adivina > numero_secreto) {
    // El número ingresado es mayor que el número secreto
    cout << "El número ingresado es mayor que el número secreto." << endl;
} 
else {
    // El número ingresado es menor que el número secreto
    cout << "El número ingresado es menor que el número secreto." << endl;
}

}
