#include "laboratorio.h"
#include <fstream>
#include <algorithm>

Laboratorio::Laboratorio()
{

}

void Laboratorio::agregarComputadora(const Computadora &p)
{
	computadoras.push_back(p);
}

void Laboratorio::mostrar()
{
	cout << left;
	cout << setw(13) << "Sistema Op";
	cout << setw(13) << "Nombre";
	cout << setw(13) << "Procesador";
	cout << setw(6) << "Memoria RAM";
	cout << endl;
	for (size_t i = 0; i < computadoras.size(); i++)
	{
		Computadora &p = computadoras[i];
		cout<<p;
		
		//cout<<"Sistema operativo: "<< p.getSO() <<endl;
		//cout<<"Nombre del equipo: "<< p.getNombre() <<endl;
		//cout<<"Procesador: "<< p.getProcesador() <<endl;
		//cout<<"Memoria RAM: "<< p.getRam() <<endl; 
	}
}

void Laboratorio::respaldar_tabla()
{
	ofstream archivo ("computadoras_tabla.txt");
	if (archivo.is_open()){
		
		archivo << left;
		archivo << setw(13) << "Sistema Op";
		archivo << setw(13) << "Nombre";
		archivo << setw(13) << "Procesador";
		archivo << setw(6) << "Memoria RAM";
		archivo << endl;
		for (size_t i = 0; i < computadoras.size() ; i++)
		{
			Computadora &p = computadoras[i];
			archivo<<p;
		}
	}
	archivo.close();
}

void Laboratorio::respaldar()
{
	ofstream archivo ("computadoras.txt");
	if (archivo.is_open()){
		for (size_t i = 0; i < computadoras.size(); i++)
		{
			Computadora &p = computadoras[i];
			archivo<< p.getSO() << endl;
			archivo<< p.getNombre() << endl;
			archivo<< p.getProcesador() << endl;
			archivo<< p.getRam() << endl;
		}
	}
	archivo.close();
}

void Laboratorio::recuperar()
{

	ifstream archivo("computadoras.txt");
	if (archivo.is_open()) {
		string temp;
		int ram;
		Computadora p;
		while (true)
		{
			getline(archivo, temp);
			if (archivo.eof()){
				break;
			}
			p.setSO(temp);
			
			getline(archivo, temp);
			p.setNombre(temp);
			
			getline(archivo, temp);
			p.setProcesador(temp);
			
			getline(archivo, temp);
            ram = stoi(temp);
            p.setRam(ram);
			
			agregarComputadora(p);
		}
	}
	archivo.close();
}

void Laboratorio::insertar(const Computadora &p, size_t pos)
{
	computadoras.insert(computadoras.begin()+pos, p);
}

size_t Laboratorio::size()
{
	return computadoras.size();
}

void Laboratorio::inicializar(const Computadora &p, size_t n)
{
	computadoras = vector<Computadora>(n, p);
}

void Laboratorio::eliminar(size_t pos)
{
	computadoras.erase(computadoras.begin()+pos);
}

void Laboratorio::ordenar()
{
	sort(computadoras.begin(), computadoras.end());
}

Computadora* Laboratorio::buscar(const Computadora &p)
{
	auto it = find(computadoras.begin(), computadoras.end(), p);
	if (it == computadoras.end()){
		return nullptr;
	}
	else{
		return &(*it); 
	}
}

void Laboratorio::borrar_ultimo()
{
	if (computadoras.empty()){
		cout << "No hay computadoras agregadas"<< endl;
	}
	else{
		computadoras.pop_back();
	}
}

