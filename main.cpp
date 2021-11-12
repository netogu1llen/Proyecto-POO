#include<iostream>
#include<string>
#include"Melee.h"
#include"Mago.h"

using namespace std;

int main(){
  Melee Armas("Espada de cobre",5,.5,60);
  //objeto,daño,precioVenta,usosRestantes
//////////
  cout<<Armas.get_objeto()<<", daño por golpe: "<<Armas.get_daño()<<", se vende por "<<Armas.get_precioVenta()<<" de oro, cuenta con "<<Armas.get_usosRestantes()<<" usos restantes."<<endl;
  
  Armas.set_objeto("Bara de madera");
  Armas.set_daño(1);
  Armas.set_precioVenta(.01);
  Armas.set_usosRestantes(10);
  
  cout<<Armas.get_objeto()<<", daño por golpe: "<<Armas.get_daño()<<", se vende por "<<Armas.get_precioVenta()<<" de oro, cuenta con "<<Armas.get_usosRestantes()<<" usos restantes."<<endl;


//////////
  Mago Utilidad("Bastón de rubí",2,15,30);
  //objeto,precioVenta,curaVida,consumeMana
//////////  
  cout<<Utilidad.get_objeto()<<", se vende por: "<<Utilidad.get_precioVenta()<<" de oro, cura "<<Utilidad.get_curaVida()<<" puntos de vida, consume "<<Utilidad.get_consumeMana()<<" puntos de maná."<<endl;

  Utilidad.set_objeto("Vara innecesariamente grande");
  Utilidad.set_precioVenta(20);
  Utilidad.set_curaVida(150);
  Utilidad.set_consumeMana(100);
  
  cout<<Utilidad.get_objeto()<<", se vende por: "<<Utilidad.get_precioVenta()<<" de oro, cura "<<Utilidad.get_curaVida()<<" puntos de vida, consume "<<Utilidad.get_consumeMana()<<" puntos de maná."<<endl;
/////////
}



