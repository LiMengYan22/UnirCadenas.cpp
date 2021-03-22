#include <iostream>
using namespace std;
void concatena(char *, char *);      //funcion: concatena + parametros de characteres con *punteros declarados
int main ()
{
   char cadena[100],cadena2[25];    //declarar variables
   cout << "Escribe una cadena:  "; //SALIDA de datos
   cin.getline(cadena,80);          //ENTRADA de datos con valor de las variables
   cout << "Escribe otra cadena:  ";
   cin.getline(cadena2,80);
   concatena(cadena,cadena2);
   cout << cadena << endl;
   return(0);    //system("pause"); //aqui iba pause y lo cambie por error.. (LimengY)
}

  //funcion: añade la segunda cadena al final de la primera  Enlace
void concatena(char *a, char *b) 
  //funcion +(DECLARACION DE PUNTEROS* accede al sitio memo donde esta el VALOR de las variables)
{
    while(*a)    //bucle
    {
       a++;      //llevamos el puntero hasta el final de la primera cadena
    }
    while(*b)    //mientras no lleguemos al final de la segunda cadena
    {
       *a=*b;    //copiamos el caracter
       a++;      //siguiente posición de la primera cadena
       b++;      //siguiente posición de la segunda cadena
    }
    *a='\0';     //añadimos el nulo al final
}
