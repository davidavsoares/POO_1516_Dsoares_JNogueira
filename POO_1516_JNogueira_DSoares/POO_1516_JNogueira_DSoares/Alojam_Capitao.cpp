#include "Alojam_Capitao.h"

Alojam_Capitao::Alojam_Capitao(int id):Sala(id, "Alojamento Capitao")
{
}


Alojam_Capitao::~Alojam_Capitao()
{
}

Alojam_Capitao::Alojam_Capitao(Sala & outro) : Sala(outro, "Alojamento Capitao")
{

}