#include "Beliche.h"

Beliche::Beliche(int id):Sala(id, "Beliche") 
{

}


Beliche::~Beliche()
{
}

Beliche::Beliche(Sala & outro) : Sala(outro, "Beliche")
{

}