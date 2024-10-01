#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
cout<<endl;
cout<<"***************************************"<<endl;
cout<<"*Bienvenido al JUEGO de la adivinanza!*"<<endl;
cout<<"**************************************"<<endl;
cout<<endl;
cout<<"****Escoja el nivel de dificultad****"<<endl;
cout<<"**Fácil (F), Medio (M) o Dificil (D)**"<< endl;

cout<<"Ingrese opcion: " <<endl;

char dificultad;
int numero_tentativas;
cin>>dificultad;

if(dificultad == 'F'){
	numero_tentativas = 15;
}
else if(dificultad == 'M'){
	numero_tentativas = 10;
}
else if(dificultad == 'D'){
	numero_tentativas = 5;
}
else{
	cout<<"Valor ingresado no valido"<<endl;
	return 0;
}


cout<<"**************************************"<<endl;
cout<<"Ingrese un numero del rango: 1 a 100 *"<<endl;
cout<<"**************************************"<<endl;

//Iniciar la semilla para generar numeros aleatorios
srand(time(0));
const int numero_secreto = 1 + rand() % 100; //generar numero aleatorio entre 1 y 100
cout << "Numero secreto aleatorio generado entre 1 y 100: " << numero_secreto << endl;
int adivina;
int intentos = 0;
double puntos = 1000.0; //guarda los puntos ganados

bool no_acerto = true;

while(numero_tentativas > 0){
	numero_tentativas--;
	intentos++;
	cout <<"Tentativa "<< intentos << endl;
	cout<< "¿cual es el numero? ";
	cin>>adivina;
	double puntos_perdidos = abs(adivina - numero_secreto)/2.0;
	puntos = puntos - puntos_perdidos;
	cout<< "El valor del numero es: " <<adivina<<endl;

	bool acerto = adivina == numero_secreto;
	bool mayor = adivina > numero_secreto;

	if(acerto){
		cout << "Felicitaciones!!!...adivino el numero secreto" << endl;
		no_acerto = false;
		cout<<"Finalizo el juego"<<endl;
		cout << "Adivino el numero secreto en "<< intentos << " intentos." << endl;
		cout.precision(2);
		cout << fixed;
		cout << "Su puntuacion fue de "<< puntos << " puntos."<< endl;
		return 0;
		}
	else if(mayor){
		cout<< "El numero ingresado es mayor que el numero secreto" << endl;
		}
	else{
		cout << "El numero ingresado es menor que el numero secreto" << endl;
		}

	}

cout<<"Finalizo el juego, usted ha perdido, siga intentando ;=)!!!"<<endl;
}
