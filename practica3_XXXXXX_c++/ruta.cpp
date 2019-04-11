#include "ruta.h"

Elemento::Elemento();

Elemento::~Elemento();

virtual int Elemento::obtenerTamanyo() = 0 const;

string devolverNombre(){
	return nombre;
}

Archivo::Archivo();

Archivo::~Archivo();

int Archivo::obtenerTamanyo(){
	return tamanyo;
};



Directorio::Directorio();

Directorio::~Directorio();

int Directorio::obtenerTamanyo(){
	int total = 0;
	for(const auto& e::elementos){
		total = e.obtenerTamanyo();
	}
	return total;
};

Enlace::Enlace();
Enlace::~Enlace();
int Enlace::obtenerTamanyo(){
	return obtenerTamanyoEnlace(0);
}

int Enlace::obtenerTamanyoEnlace(const int nivel){
	if(nivel < 1024){
		total += *ptr.obtenerTamanyo();
	}
	else {
		cout << "puta" << endl;
		return 0;
	}
}







