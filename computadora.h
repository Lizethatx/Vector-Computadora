#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora
{
	string so;
	string nombre;
	string procesador;
	int ram;	
public:
	Computadora();
	Computadora(const string &so, const string &nombre, const string &procesador, int ram);
	
	void setSO(const string &v);
	string getSO();
	
	void setNombre(const string &v);
	string getNombre();
	
	void setProcesador(const string &v);
	string getProcesador();
	
	void setRam(int v);
	int getRam();
	
	friend ostream& operator <<(ostream &out, const Computadora &p)
	{
		out << left;
		out << setw(13)<<p.so;
		out << setw(13)<<p.nombre;
		out << setw(13)<<p.procesador;
		out << setw(6)<<p.ram;
		out << endl;
		return out;
	}
	
	friend istream& operator >>(istream &in, Computadora &p)
	{
		string temp;
		int ram;
		
		cout << "Sistema Op: ";
		getline(cin, p.so);
		
		cout << "Nombre: ";
		getline(cin, p.nombre);
		
		cout << "Procesador: ";
		getline(cin, p.procesador);
		
		cout << "Memoria RAM: ";
		cin >> p.ram;
		return in;
	} 
	
	bool operator == (const Computadora& p)
	{
		return so == p.so;
	}
	
	bool operator == (const Computadora& p) const
	{
		return so == p.so;
	}
	
	bool operator <(const Computadora& p)
	{
		return so < p.so;
	}
	bool operator <(const Computadora& p) const
	{
		return so < p.so;
	}
};


#endif
