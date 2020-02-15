#include <iostream>
#include "Punto.h"
#include "Rectangulo.h"
using namespace std;

int main()
{
    Rectangulo miRectangulo;
    miRectangulo.AsignarSupIzq(15,5);
    miRectangulo.AsignarSupDer(68,5);
    miRectangulo.AsignarInfIzq(15,1);
    miRectangulo.AsignarInfDer(68,1);
    cout<<"El perimetro del rectangulo es: "<< miRectangulo.Perimetro() <<endl;
    cout<<"El area del rectangulo es: "<<miRectangulo.Area()<<endl;
    cout<<"===================================="<<endl;
    miRectangulo.Condicion();
    return 0;
}
