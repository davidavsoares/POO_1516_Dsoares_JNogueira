#include "Oficina_Robotica.h"

Oficina_Robotica::Oficina_Robotica(int id):Sala(id, "Oficina Robotica")
{

}


Oficina_Robotica::~Oficina_Robotica()
{
}

Oficina_Robotica::Oficina_Robotica(Sala & outro) : Sala(outro, "Oficina Robotica")
{

}