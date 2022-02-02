#include <iostream>

using namespace std;

//constante gloval (es un valor que no va cambiar con el paso del tiempo)
#define e=2.7458;                       //ESTA CONSTANTE VIVIRA EN TODO EL PROGRAMA

int main(){

    //constante de scope(ambito)
    const float pi= 3.1415;             //VIVIRA DENTRO DE LA FUNSION

    int entero=10;
    float decila=10.5;
    double decimal_de_mayor_presicion=10.564;
    long int entero_de_mayor_tamaño= 24624814;
    short int entero_reducido=415;
    bool valor =true;

    unsigned int sinSigno=1;      //no permite que el entero tener numeros negativos
    signed int conSigno=-1;       //permite tener numero negativos

    char cadena1="a";                   //por defeecto almacena un solo valor
    char cadenaSub1[3]= "abc";
    string cadena2 = "Hola mundo";
    return 0;
}
