#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"
#include <vector>

class Laboratorio
{
	vector<Computadora> computadoras;

public:
	Laboratorio();
	void agregarComputadora(const Computadora &p);
	void mostrar();
	void respaldar_tabla();
	void respaldar();
	void recuperar();
	
	void insertar(const Computadora &p, size_t pos);
	size_t size();
	void inicializar(const Computadora &p, size_t n);
	void eliminar(size_t pos);
	void ordenar();
	Computadora* buscar(const Computadora &p);
	void borrar_ultimo();
		
	friend Laboratorio& operator <<(Laboratorio &v, const Computadora &p)
	{
		v.agregarComputadora(p);
		
		return v;
	}
};

#endif

