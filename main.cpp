/**
 * Software bajo la licensia Apache License 2.0
 * para mas informacion leer fichero LICENSE
 *
 * Programa sencillo que da una informacion basica sobre un poligono regular
 * dado su numero de lados.
 * La informacion mostrada es:
 *  - Diagonales que pueden pasar por un punto
 *  - Diagonales totales
 *  - Suma de los angulos interiores
 *  - Amplitud de un angulo interior
 *  - Amplitud de un angulo exterior
 * Toda la informacion sobre los calculos se encuentran en el fichero README
**/

#include <iostream>

using namespace std;

int main(){ //Driver principal del programa
    cout<<"PoligonosRegulares v1.0"<<endl;

    //Numero de lados, numero total de diagonales y numero de diagonales que
    //pasan por un punto respecticamente
    int numLados, numDiag, numDiagPunt;
    //Suma de todos los angulos interiores, amplitud de un angulo interios
    //y amplitud de un angulo exterior respect.
    float gradosTotal, gradosInterios, gradosExterior;

    cout<<"Introduzca el numero de lados > "; cin>>numLados;

    numDiag = numLados*(numLados-2)/2;
    numDiagPunt = numLados-2;
    gradosTotal=180.0 *(numLados-2);
    gradosInterios=gradosTotal/numLados;
    gradosExterior = 360.0/numLados;


    cout<<"Informacion sobre el poligono:"<<endl;
    cout<<"- Numero de Lados:   \t\t"<<numLados<<endl
        <<"- Numero de Diagonales:\t\t"<<numDiag<<endl
        <<"- Diagonales en un Pto.:\t"<<numDiagPunt<<endl
        <<"- Suma de sus Ang. Interiores:\t"<<gradosTotal<<" grados"<<endl
        <<"- Angulo Interior: \t\t"<<gradosInterios<<" grados"<<endl
        <<"- Angulo Exterior: \t\t"<<gradosExterior<<" grados"<<endl;

    return 0;
}
