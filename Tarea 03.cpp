// 1) A un trabajador le descuentan de su sueldo el 10% si su sueldo es menor o igual a 1000, por
// encima de 1000 y hasta 2000 el 5% del adicional, y por encima de 2000 el 3% del adicional.
// calcular el descuento y sueldo neto que resibe el trabajador dado su sueldo.

#include <iostream>
using namespace std;
int main(){
	double Suel, Desc, neto;
	for (int i=0; i=100; i++){
	cout <<"Igrese el Sueldo: ";
	cin >> Suel;
	
	if (Suel <= 1000){
	
	Desc=0.1*Suel;
	}
	else{
	 if (Suel <= 2000){
	 Desc=0.05 * (Suel-1000);
	 }
	 else 
	 Desc= 0.03 * (Suel-2000);
	}
	neto= Suel - Desc;
	cout <<"Sueldo     : " <<Suel <<endl;
	cout <<"Descuento  : " <<Desc <<endl;
	cout <<"Sueldo Neto: " <<neto <<endl;
	cout << "-------------------------------" <<endl;
	}
	return 0;
}	

// 2) Dado un monto calcular el descuento considerando que por encima de 1000 el descuento es
// el 20% y por debajo de 1000 el descuento es el 10%

#include <iostream>
using namespace std;
int main (){
	
	double A, Descuento;
	
	for (int i=0; i=100; i++){
	
	cout <<("Ingrese la cantidad: ");
	cin >> A;
	if (A <= 1000){
		Descuento = 0.1 * A;
	}
	else
	Descuento= 0.2 * A;
	
	cout <<"El Descuento es de: " <<Descuento;
	cout <<endl <<("----------------------------------------") <<endl;
	}
	
return 0;	
}

// 3) Permita determinar el voltaje de tres bombillos en kilovoltio, considerando q el bombillo 
//    trabaja con 120v, calcular y visualizar el voltaje

#include <iostream>
using namespace std;

double Convertidor (double voltageEnV) {
	return voltageEnV / 1000;
}
int main (){
	const double VoltajeTrabajo = 120;
	double bombillo1, bombillo2, bombillo3;
	cout <<"Cada bombillo trabaja con un voltaje de: " <<VoltajeTrabajo <<"V (Voltios)" <<endl;
	bombillo1= VoltajeTrabajo;
	bombillo2= VoltajeTrabajo;
	bombillo3= VoltajeTrabajo;
	
	double Voltaje1kv=Convertidor (bombillo1);
	double Voltaje2kv=Convertidor (bombillo2);
	double Voltaje3kv=Convertidor (bombillo3);
	
	cout <<("El Primer Bombillo Tranformado de V (voltios) a Kv (Kilo Voltios) es de  :") << Voltaje1kv <<endl;
	cout <<("El Segundo Bombillo Tranformado de V (voltios) a Kv (Kilo Voltios) es de :") << Voltaje2kv <<endl;
	cout <<("El Tercer Bombillo Tranformado de V (voltios) a Kv (Kilo Voltios) es de  :") << Voltaje3kv <<endl;

	return 0;
}

// 4) Desarrolla el código fuente de un programa que permita ingresar un dato entero y un dato real 
//    y visualizar los datos ingresados

#include <iostream>
using namespace std;

int main (){

int datoent;
float datoreal;

for (int i=0; i=100; i++){

cout <<("Ingrese un Dato Entero: ");
cin >> datoent;

cout <<("Ingrese un Dato Real: ");
cin >> datoreal;

cout <<("Datos Ingresados Fueron: ") <<endl;
cout <<("El Dato Entero Ingresado Fue: ") <<datoent <<endl;
cout <<("El Dato Real Ingresado Fue  : ") <<datoreal <<endl;
cout<<("----------------------------------------------------") <<endl;
}
	return 0;
}

// 5) Desarrolle el código fuente de un programa que permita calcular el área de un círculo,
//    adicional visualizar "DATOS ERRONEOS", si el área es mayor a 5000

#include <iostream>
using namespace std;

int main(){	
 float Radio, Area;
 const float Pi = 3.14159;

for (int i=0; i=100; i++){

 cout <<("Ingrese El Radio del Circulo a medir: ");
 cin >> Radio;
 
 Area= Pi * Radio*Radio;
 
  if (Area <= 5000){
 
 cout <<("El Area del circulo es de: ") << Area;
 }
 
 else{
    cout <<("DATOS ERRONEOS");
	} 
cout <<endl <<("-----------------------------------------") <<endl;
}
   
    return 0;
}

// 6) Desarrolle el codigo fuente de un programa que permita ingresar un número y visualizar si es 
//    positivo o negativo

#include <iostream>
using namespace std;

int main(){	
 double Numero;
 
 for (int i=0; i=100; i++){
 
 cout <<("Ingrese un Número: ");
 cin >>Numero;
 
 if (Numero < 0){
 	cout<<("El Numero Ingresado es Negativo");
 }
 else if (Numero > 0){
 	cout <<("El Numeto Ingresado es Positivo");
 }
 else
   cout <<("El Numero Ingresado es Cero");
 
 cout <<endl <<("------------------------------------------") <<endl;
 }
    return 0;
}

// 7) Desarrolle el codigo fuente de un programa que permita ingresar tres numeros, obtener su
//    promedio y visualizar "APROBADO", si su promedio es mayor a 7, caso contrario
//    visualizara "MEJORE LA NOTA".

#include <iostream>
using namespace std;

int main(){	
 double Nota1, Nota2, Nota3, Prome;
 
 for (int i=0; i=100; i++){
 
 cout <<("Ingrese la primera Nota: ");
 cin >>Nota1;
 
 cout <<("Ingrese la segunda Nota: ");
 cin >>Nota2;
 
 cout <<("Ingrese la tercera Nota: ");
 cin >>Nota3;
 
 Prome = (Nota1+Nota2+Nota3)/3;
 
 if (Prome >= 7){
 	cout <<(" Su Promedio es de ") << Prome <<(" APROBADO");
 }
 else
 cout <<"Su Promedio es de " << Prome << (" MEJORE SU NOTAS");
 cout <<endl <<("------------------------------------------") <<endl;
 }
    return 0;
}

// 8) Desarrole el código de un programa que permita ingresar edad y leer su edad
//    ingresada

#include <iostream>
using namespace std;

int main(){	
 int edad;
 
 for (int i=0; i=100; i++){
 	
 	cout <<("Ingrese la Edad: ");
 	cin >> edad;
 	
 	cout <<endl <<("Edad Ingresada es: ") <<edad;
 
 cout <<endl <<("------------------------------------------") <<endl;
 }
    return 0;
}

// 9) Desarrolle el código fuente de un programa que permita ingresar un numero y visualizar si es
//    par o impar

#include <iostream>
using namespace std;

int main(){	
 int num;
 
 for (int i=0; i=100; i++){
 	
cout <<("Ingrese un número: ");
cin >>num;

if (num % 2 == 0 ){
	cout <<("El numero ") <<num <<(" es Par");
}

else
  cout <<("El numero ") <<num <<(" es Impar");

 cout <<endl <<("------------------------------------------") <<endl;
 }
    return 0;
}

// 10) Desarrolle el código fuente de un programa que permita ingresar cinco voltajes, obtener su 
//     promedio y visualizar "ALTO VOLTAJE", si su promedio es mayor a 220, caso contrario sea
//     menor mostrar "VOLTAJE CORRECTO"

#include <iostream>
using namespace std;

int main(){	
 
 double Voltajes[5];
 double Promedio = 0;
 
 for (int i=0; i=100; i++){
 	
 	cout <<("Ingrese 5 Voltajes")<<endl;
 	for (int i=0; i < 5; ++i){
 		cout <<("Voltaje ") <<i+1<<": ";
 		cin >>Voltajes[i];
 		Promedio += Voltajes[i];
	 }
	 
	 Promedio /= 5;
	 
	 if (Promedio >= 220){
	 	
	 	cout <<("ALTO VOLTAJE");
	 	
	 }
	 
	 else 
	    cout <<("Voltaje Correcto");

 cout <<endl <<("------------------------------------------") <<endl;
 }
    return 0;
}

// Informaica Trayecto 1 Seccion 3
// Estudiante: Douglas Nicolas Suarez Sierra
// C.I: 30016433
