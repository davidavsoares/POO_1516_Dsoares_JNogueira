#include "Sistema_Seguranca.h"

Sistema_Seguranca::Sistema_Seguranca(int id):Sala(id, "Sistena Seguranca")
{
}


Sistema_Seguranca::~Sistema_Seguranca()
{
}

Sistema_Seguranca::Sistema_Seguranca(Sala & outro) : Sala(outro, "Sistena Seguranca")
{

}
