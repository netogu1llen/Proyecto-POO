/*
Ernesto Guillén Guerrero A01704967 */
#include<iostream>
#include<string>
#include"MeleePadre.h"

using namespace std;

int main(){
  //Datos de la primera espada.
  EspadaHierro E1("Hierro",40,3.5,10,5);
  cout<<"Espada de "<<E1.get_objeto()<<" inflinge "<<E1.get_danio()<<" de daño y se vende por "<<E1.get_precioVenta()<< " de oro. Al golpear al objetivo sangra por "<<E1.get_tiempoSangrado()<<" segundos y para crearse se necesitan "<<E1.get_lingotes()<<" lingotes de hierro."<<endl;
  cout<<" "<<endl;
  //Datos de la segunda espada.
  Semillera P1("Semillera",55,4.2,3,10);
  cout<<"La espada "<<P1.get_objeto()<<" inflinge "<<P1.get_danio()<<" de daño y se vende por "<<P1.get_precioVenta()<<" de oro. Al golpear al objetivo este crea "<<P1.get_numeroExplosiones()<<" numero de explosiones y planta "<< P1.get_plantaSemilla()<<" semillas en el suelo cerca del impacto"<<endl;
  cout<<" "<<endl;
  //Datos de la tercera espada.
  ProyectilesDisparados PD1(3,2);
  TerraBlade T1("Terrablade",80,11.5,8,PD1);
  cout<<"La espada "<<T1.get_objeto()<<"inflinge "<<T1.get_danio()<<" de daño y se vende por "<<T1.get_precioVenta()<<" de oro. Al impactar el objetivo se quema por "<<T1.get_tiempoQuemadura()<<" segundos."<<endl; 
  //Uso de la funcion para obtener la composición de la última espada.
  T1.obtenerDatos();
} 