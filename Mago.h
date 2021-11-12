#include <string>

using namespace std;

class Mago{
private:
  string objeto;
  float precioVenta;
  int curaVida;
  float consumeMana;
public:
  Mago():objeto(""),precioVenta(0.0),curaVida(0),consumeMana(0.0){};
  
  Mago(string obj,float precio,int cura,float consume):objeto(obj),precioVenta(precio),curaVida(cura),consumeMana(consume){};
  
  string get_objeto();
  float get_precioVenta();
  int get_curaVida();
  float get_consumeMana();

  void set_objeto(string);
  void set_precioVenta(float);
  void set_curaVida(int);
  void set_consumeMana(float);
};


string Mago::get_objeto(){
  return objeto;
}
float Mago::get_precioVenta(){
  return precioVenta;
}
int Mago::get_curaVida(){
  return curaVida;
}
float Mago::get_consumeMana(){
  return consumeMana;
}


void Mago::set_objeto(string obj){
  objeto=obj;
}
void Mago::set_precioVenta(float precio){
  precioVenta=precio;
}
void Mago::set_curaVida(int cura){
  curaVida=cura;
}
void Mago::set_consumeMana(float consume){
  consumeMana=consume;
}