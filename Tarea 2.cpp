//1)Ingreso de dos numeros enteros y/o reales, muestre suma,resta, multiplicacion, divisiony el resto (modulo) de la division

// yo coloque q funcionara con decimales 


#include <iostream>
using namespace std ;
int main (){
	int c;
	double a,b , suma , resta , multiplicacion , division;
	for (int i = 0; i = 100; i++){
	cout << "Coloque algun numero: ";
	cin >> a ;
	cout << "Coloque algun numero: ";
	cin >> b ;
	cout << "Elija entre estas opciones para poder proseguir con la operacion" << endl;
	cout << "1) Suma" << endl << "2) Resta" << endl << "3) Multiplicacion" << endl << "4) Division" << endl ;
	suma = a + b ;
	resta = a - b ;
	multiplicacion = a * b ;
	division = a / b ;
	cout << "Elija con cual desea calcular del 1 al 4: " ;
	cin >> c ;
	if (c == 1){
	cout << "Resultado de la Suma es: " << suma ;
	}
	if (c == 2){
		cout << "Resultado de la Resta es: " << resta ;
	}
	if (c == 3){
		cout << "Resultado de la multiplicacion es: " << multiplicacion ;
	}
	if (c == 4){
		cout << "Resultado de la division es: " << division ;
	}
	cout <<endl <<("---------------------------")<<endl;}
	return 0;
}

//2) Ingrese de tres números enteros y/o reales, muestre su respectiva suma y multiplicación.

#include <iostream>
using namespace std;
int main (){
	int f ;
	double a , b , c , suma , multiplicacion ;
	for (int i = 0 ; i = 100 ; i++){
	cout << "coloque el primer valor: " ;
	cin >> a ;
	cout << "coloque el Segundo valor: " ;
	cin >> b ;
	cout << "coloque el Tercer valor: " ;
	cin >> c ;
	suma = a + b + c ;
	multiplicacion = a * b * c ;
	cout << "Seleccione con Digitos numericos una de las siguientes opciones" << endl;
	cout << "1) Suma" << endl << "2) Multiplicacion" << endl ;
	cout << "Selecciono: " ;
	cin >> f ;
	if (f == 1){
	cout << "Su Resultado es: " << suma << endl ;
	}
	if (f == 2){
	cout << " Su resultado es: " << multiplicacion << endl ;
	}
	cout << "-----------------------" << endl ; }
	
	return 0;
}

//3) Calcule el área y el perímetro de un rectángulo dada la base y la altura.

#include <iostream>
using namespace std;
int main(){
	int L , W , P;
	cout << "Coloca la Longitud de tu rectangulo aqui: ";
	cin >> L;
	cout << "Coloca el Ancho de tu rectangulo aqui: ";
	cin >> W;
	P = (2*L) + (2*W);
	cout << "El resultado es: " << P;
	
	return 0;
}	

//4) Crear una función que reciba como parámetro un numero entero y escriba la tabla de multiplicar de ese número (para el 3 deberá llegar desde 3x0=0 hasta 3x10=30)

#include <iostream>
using namespace std;
int main(){
	int a;
	for (int i=0; i=100; i++) {
	cout << "Seleccione el numero a Multiplicar: ";
	cin >> a;
	for (int i = 0; i <= 10; i++){
		cout << a << " * " << i << " = " << a * i << endl;
		}
		cout << "------------------------------------------" << endl;
	}

	
	return 0;
}

//5) Calcule el área de un cuadrado.

#include <iostream>
using namespace std;
int main(){
	cout<<"Ponga sus Parametros para poder calcular el area de un cuadrado"<<endl;
	for(int i=0; i=100; i++){
	double a, b;
	cout <<"Coloque la longitud de x: ";
	cin >> a;
	cout <<"Coloque la longitud de y: ";
	cin >> b;
	cout << "su resultado es: "<< a * b << "cm Al cuadrado" <<endl;
	cout <<"---------------------------------" <<endl;
}
	return 0;
}

//6) Introducir una medida expresada en centímetros y la convierta en pulgadas (1pulgada = 2,54 centímetros)

#include <iostream>
using namespace std;
int main(){
	double a, b;
	b = 0.393701;
	for(int i= 0; i=100; i++){
	cout <<"Introduzca una medida expresada en centimetro para convertirla en pulgadas" <<endl;
	cout <<"aqui: ";
	cin >> a;
	cout <<"la conversion de " << a<<"cm a pulgada es de: "<< a * b <<" Pulgadas" <<endl;
	cout << "-------------------------------------------" <<endl;
}
	return 0;
}

//7) Desarrolle una función que reciba un número y devuelva el valor 1 si es un número primo o 0 en caso contrario.

#include <iostream>
using namespace std;
int main(){
	int a, numero, cont=0;
	printf ("Digite un numero: ") << scanf("%i",&numero);
	for (a=1; a<=numero; a++){
		if(numero%a==0){
			cont++;
		}
	}
	if(cont>2){
		printf("el numero es compuesto"); 
	}
	else{
		printf ("el numero es primo");
	}
	return 0;
}	

//8) Convierta en horas, minutos y segundos un tiempo expresado en segundos.

#include <iostream>
#include <conio.h>
using namespace std;

void tiempo(int,int&,int&,int&);

int main(){
	
	int totalseg,horas,min,seg;
	
	for(int i=0; i=100; i++){	
	
	cout <<("Digite el numero total en Segundos: ");
	cin >>totalseg;
	
	tiempo(totalseg,horas,min,seg);
	
	cout<<("El Tiempo equivalente a la cantidad de numeros digitados es:") <<endl;
	cout<<"Horas: " <<horas <<endl;
	cout<<"Minutos: " <<min <<endl;
	cout<<"Segundos:" <<seg <<endl;
	cout<<"----------------------------" <<endl;
	}
	return 0;
}	

void tiempo(int totalseg,int& horas,int& min, int& seg){
	horas= totalseg/3600;
	totalseg %= 3600;
	min= totalseg/60;
	seg= totalseg%60;
}

//9) Desarrollar una función que reciba un numero cualquiera y que devuelva como resultado la suma de sus dígitos.

#include <iostream>
using namespace std;


int main(){
	
	int a;
	for(int i=0; i=100; i++){
	
	cout<<("OJO obtengase a colocar solamente 10 numeros")<<endl;
	cout<<("Coloque un cantidad cualquiera: ");
	cin >>a;
	
	int suma=0;
	
	while (a>0){
		suma=suma+a%10;
		a=a/10;
	}
	cout<<"la suma de la cantidad puesta es de: "<<suma <<endl;
	cout<<"-------------------------"<<endl;
}
	return 0;
}	

//10) Dadas las horas trabajadas de una persona y el valor por hora. Calcular su salario y visualizarlos.

#include <iostream>
using namespace std;


int main(){
	
	int horas,Ingresos;
	
	for(int i=0; i=100; i++){
	
	cout<<"Ingrese cuanto es la paga por horas: ";
	cin>>Ingresos;
	cout<<"Ingrese Cuantas horas trabajo: ";
	cin>>horas;
	
	cout<<"Su paga sera de: "<< horas * Ingresos; 
	cout<<endl;
	cout<<"-----------------------" <<endl;
	
	}
	
	return 0;
}

//OJO estan enumerado por tarea cada progama lo debe ejecutar por separados no juntos
// Estudiante; Douglas Suarez C.I: 30.016.433

