#include <iostream>
//funciones realizar un proceso y devuelven un valor
using namespace std;

//funcion que calcula la potencia de un numero
// 2 ^ 5 = 2 x 2 x 2 x 2
double potencia (double base, int exponente)
{
    double resultado = 1;
    for(int i=1; i<= exponente; i++)
    {
        resultado = resultado * base;
    }
    return resultado;
}

//funcion factorial(5) = 1x2x3x4x5
double factorial (int num)
{
    double fac=1;
    for(int i=1; i<=num; i++)
        fac=fac* i;

    return fac;
}

//funcion que calcula la serie
double sumaserie(double x)
{
    double suma=0;
            suma= x - (potencia(x,3) / factorial(3))
                    + (potencia(x, 5) / factorial(5))
                    - (potencia(x,7) / factorial(7));
    return suma;
}

//funcio que recibe como parametro el nombre de una persona y su edad,
//y devuelve un saludo, indicando ademas si es o no mayor de edad

string saludos(string nombre, int edad)
{
    string mensaje="Bienvenido " + nombre;
    if(edad>=18)
        mensaje= mensaje + ", usted es mayor de edad";
    else
        mensaje= mensaje + ", usted es menor de edad";

    return mensaje;
}
//Una funcio recibe como parametro el nombre de una persona,
// el dia y mes de nacimiento. La funcion debe devolver el nombre
// de la persona indicando el signo del zodiaco al que pertenece
//Ejejmplo. Hola Christiopher, tu signo del zodiaco es piscis
//Aries (21 marzo y el 19 abril)
//Tauro (20 abril y el 21 mayo)
//Géminis (21 mayo y el 20 junio)
//Cáncer (21 junio y el 22 julio)
//Leo (23 julio y el 22 agosto)
//Virgo (23 agosto y el 22 septiembre)
//Libra (23 septiembre y el 22 octubre)
//Escorpión (23 octubre y el 21 noviembre)
//Sagitario (22 noviembre y el 21 diciembre)
//Capricornio (22 diciembre y el 19 enero)
//Acuario (20 enero y el 18 febrero)
//Piscis (19 febrero y el 20 marzo)

string signo_zodiacal(string nombre, int dia_nac, int mes_nac)
{
    string mensaje="Hola " + nombre + ", ";
    if((mes_nac==2  && dia_nac>=1) || (mes_nac==3 && dia_nac<=20))
            mensaje+="tu signo del zodiaco es Piscis ";

    return mensaje;
}
int main() {
    cout<<endl<<signo_zodiacal("Christopher", 1, 3);
    cout<<endl<<"El factorial de 5 es "<<factorial(5);
    cout<<endl<<"El factorial de 6 es "<<factorial(6);
    cout<<endl<<"El factorial de 10 es "<<factorial(10);

    cout<<endl<<potencia(5,3);
    cout<<endl<<potencia(2,5);
    cout<<endl<<potencia(10,3);

    cout<<endl<<"La sumatoria de la serie es "<<sumaserie(5);
    cout<<endl<<saludos("Christopher Caagua", 18);
    cout<<endl<<saludos("Escarlrth Garcia", 16);

   string nombre;
   cout<<"\nIngrese tu nombre: ";
   getline(cin,nombre);
    cout<<endl<<saludos(nombre, 22 );

    return 0;
}