#ifndef RECTANGULO_H
#define RECTANGULO_H
#include<iostream>
#include<math.h>
#include"Punto.h"
using namespace std;
class Rectangulo
{
     private:
        Punto SuperiorIzq;
        Punto SuperiorDer;
        Punto InferiorIzq;
        Punto InferiorDer;
    public:
        Rectangulo()
        {
            cout<<"Se ha creado un rectangulo"<<endl;
        }
        void AsignarSupIzq(float x,float y)
        {
            SuperiorIzq.asignarX(x);
            SuperiorIzq.asignarY(y);
        }
        void AsignarSupDer(float x,float y)
        {
            SuperiorDer.asignarX(x);
            SuperiorDer.asignarY(y);
        }
        void AsignarInfIzq(float x,float y)
        {
            InferiorIzq.asignarX(x);
            InferiorIzq.asignarY(y);
        }
        void AsignarInfDer(float x,float y)
        {
            InferiorDer.asignarX(x);
            InferiorDer.asignarY(y);
        }
        float Perimetro()
        {
            float base=abs(InferiorDer.ObtenerX()-InferiorIzq.ObtenerX());
            float altura=abs(InferiorDer.ObtenerY()-SuperiorIzq.ObtenerY());
            return (base*2)+(altura*2);
        }
        float Area()
        {
            float base=abs(InferiorDer.ObtenerX()-InferiorIzq.ObtenerX());
            float altura=abs(InferiorDer.ObtenerY()-SuperiorDer.ObtenerY());
            return (base*altura);
        }
        void Condicion()
        {
            if(abs(InferiorDer.ObtenerY()-SuperiorDer.ObtenerY())!=abs(InferiorIzq.ObtenerY()-SuperiorIzq.ObtenerY()))
               {
                   cout<<"No es un rectangulo"<<endl;
               }
            else
               {
                   cout<<"Si es un Rectangulo"<<endl;
               }
        }
};

#endif
