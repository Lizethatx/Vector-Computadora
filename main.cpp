#include <iostream>
#include "laboratorio.h"
using namespace std;

int main() {
	
	Laboratorio lab;
	
	string opc;
	while(true)
	{
		cout<<"  MENU LABORATORIO DE COMPUTADORAS  "<< endl;
		cout<< "1. Agregar "<< endl;
		cout<< "2. Mostrar"<< endl;
		cout<< "3. Respaldar"<< endl;
		cout<< "4. Recuperar"<< endl;
		cout<< "5. Insertar"<< endl;
		cout<< "6. Inicializar"<< endl;
		cout<< "7. Eliminar"<< endl;
		cout<< "8. Ordenar"<< endl;
		cout<< "9. Buscar"<< endl;
		cout<< "10. Borrar ultimo"<< endl;
		cout<< "0. Salir"<< endl;
		getline(cin,opc);
		if (opc == "1"){
			Computadora p;
			
			cin>> p;
			
			lab.agregarComputadora(p);
			cin.ignore();
		}
		else if (opc=="2"){
			lab.mostrar();
		}
		else if (opc=="3"){
			lab.respaldar();
		}
		else if (opc=="4"){
			lab.recuperar();
			
		}
		else if (opc=="5"){
			Computadora p;
			
			cin>> p;
			
			size_t pos;
			cout<<"Posicion: ";
			cin>> pos; cin.ignore();
			
			if (pos >= lab.size()){
				cout << "Posicion no valida"<< endl;
			}
			else{
				lab.insertar(p, pos);
			}	
		}
		else if (opc=="6"){
			Computadora p;
			cin>> p;
			
			size_t n;
			cout<<"Veces: ";
			cin>> n; cin.ignore();
			
			lab.inicializar(p, n);
		}
		else if (opc=="7"){
			size_t pos;
			cout<<"Posicion: ";
			cin>> pos; cin.ignore();
			
			if (pos >= lab.size()){
				cout << "Posicion no valida"<< endl;
			}
			else{
				lab.eliminar(pos);
			}	
		}
		else if (opc=="8"){
			lab.ordenar();
		}
		else if (opc=="9"){
			Computadora p;
			cin>> p; cin.ignore();
			
			Computadora *ptr = lab.buscar(p);
			
			if (ptr == nullptr){
				cout<< "No se encontro"<<endl;
			}
			else{
				cout << *ptr << endl;
			}
		}
		else if (opc=="10"){
			lab.borrar_ultimo();
		}
		else if (opc=="0"){
			break;
		}
	}
	
	return 0;
}
