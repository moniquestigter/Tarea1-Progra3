#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    return *ptr;
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return *a+*b;
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(a == b)
        return true;
    return false;

}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if(*a == *b)
        return true;
    return false;

}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    return (*a)[0];
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, anan�, Malayalam, Neuqu�n, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    string str = *a;
    for(int x = 0; x<str.length(); x++){
        if(str[x]!= str[str.length()-1-x])
            return false;
    }
    return true;

}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int b = *base;
    int e = *exponente;
    int tot = 1;
    for(int x = 0; x<e; x++){
        tot*=b;
    }
    return tot;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}


