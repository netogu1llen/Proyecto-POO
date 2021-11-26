/*
Ernesto Guillén Guerrero A01704967 */
#include<iostream>
#include<string>
#include"Melee.h"
#include"Mago.h"
#include"Ranger.h"

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
  cout<<Utilidad.get_objeto()<<", se vende por "<<Utilidad.get_precioVenta()<<" de oro, cura "<<Utilidad.get_curaVida()<<" puntos de vida, consume "<<Utilidad.get_consumeMana()<<" puntos de maná."<<endl;

  Utilidad.set_objeto("Vara innecesariamente grande");
  Utilidad.set_precioVenta(20);
  Utilidad.set_curaVida(150);
  Utilidad.set_consumeMana(100);
  
  cout<<Utilidad.get_objeto()<<", se vende por "<<Utilidad.get_precioVenta()<<" de oro, cura "<<Utilidad.get_curaVida()<<" puntos de vida, consume "<<Utilidad.get_consumeMana()<<" puntos de maná."<<endl;
//////////
  Ranger Fusiles("Cañón de fuego rápido",7,2.5,40,12.5);
  //objeto,daño,precioVenta,ammoCapacity,rangoMaximo
//////////    
  cout<<Fusiles.get_objeto()<<", se vende por "<<Fusiles.get_precioVenta()<<" de oro, cada disparo inflinge "<<Fusiles.get_daño()<<", tiene una capacidad de  "<<Fusiles.get_ammoCapacity()<<" balas y un alcance de  "<<Fusiles.get_rangoMaximo()<<" unidades."<<endl;

  Fusiles.set_objeto("Cañón de estrellas");
  Fusiles.set_precioVenta(50);
  Fusiles.set_daño(300);
  Fusiles.set_ammoCapacity(5);
  Fusiles.set_rangoMaximo(40);

  cout<<Fusiles.get_objeto()<<", se vende por "<<Fusiles.get_precioVenta()<<" de oro, cada disparo inflinge "<<Fusiles.get_daño()<<", tiene una capacidad de  "<<Fusiles.get_ammoCapacity()<<" balas y un alcance de  "<<Fusiles.get_rangoMaximo()<<" unidades."<<endl;
}


