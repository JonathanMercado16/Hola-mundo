#include <iostream>
#include <Mascota.hpp>
#include <Alimento.hpp>
#include <Dibujo.hpp>

using namespace std;
int main (int argc, char const *argv[])
{
    Dibujo dibujo1("./assets/Aldo.txt");
    dibujo1.Dibujar();

    Dibujo dibujo2("./assets/Panda.txt");
    dibujo2.Dibujar();

    Mascota m1;
    Mascota m2;
    Mascota m3;
    
    Alimento alimento(5);

    m1.Comer(alimento);
    m2.Comer(alimento);
    m3.Comer(alimento);

    cout<<"Mascota "<<m1.LeerEnergia()<<endl;

    return 0;
}