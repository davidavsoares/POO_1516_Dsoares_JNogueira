#include "Enfermaria.h"

Enfermaria::Enfermaria(int id):Sala(id, "Enfermaria")
{

}


Enfermaria::~Enfermaria()
{
}

Enfermaria::Enfermaria(Sala & outro) : Sala(outro, "Enfermaria")
{

}