#include "personaje.h"

class Melee: public Personaje{

  public:
    Melee(string nom,float precio):Personaje(nom,300,150,precio){

    }
  void golpear(int usosRestantes){
    usosRestantes=usosRestantes-1
  }
}