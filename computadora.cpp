#include "computadora.h"

Computadora::Computadora()
{
	
}

Computadora::Computadora(const string &so,const string &nombre, const string &procesador, int ram)
{
	this->so = so;
	this->nombre = nombre;
	this->procesador = procesador;
	this->ram = ram;
}

void Computadora::setSO(const string &v)
{
	so = v;
}

string Computadora::getSO()
{
	return so;
}

void Computadora::setNombre(const string &v)
{
	nombre = v;
}

string Computadora::getNombre()
{
	return nombre;
}

void Computadora::setProcesador(const string &v)
{
	procesador = v;
}

string Computadora::getProcesador()
{
	return procesador;
}

void Computadora::setRam(int v)
{
	ram = v;
}

int Computadora::getRam()
{
	return ram;
}
