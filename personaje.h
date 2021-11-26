#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>

using namespace std:

class Personaje{
private:
  int vida;
  int mana;
  float precioVenta;
  string nombre;
public: 
  Personaje (strin nomb, int vida, int man, float precioVenta){
    nombre=nomb;
    vida=vid;
    mana=man;
    precioVenta=precio;
  }

  string getNombre(){
    return nombre;
  }
  int getVida(){
    return vida;
  }
  int getMana(){
    return mana;
  }
  float getPrecioVenta(){
    return precioVenta;
  }
  

  void golpe(int daño){
    vida=vida-daño;
  }
  void curar(int curaVida){
    vida=vida+curaVida;
  }


  void setVida(int v){
    vida=v;
  }
  void setMana(int m){
    mana=m;
  }
  
};
