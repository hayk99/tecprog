#include "ruta.h"

Elemento::Elemento();

Elemento::~Elemento();

virtual int Elemento::obtenerTamanyo(int i = 0) = 0 const;

string devolverNombre(){
	return nombre;
}

Archivo::Archivo();

Archivo::~Archivo();

int Archivo::obtenerTamanyo(int i = 0){
	return tamanyo;
};



Directorio::Directorio();

Directorio::~Directorio();

int Directorio::obtenerTamanyo(int i = 0){
	int total = 0;
	for(const auto& e::elementos){
		total = e.obtenerTamanyo();
	}
	return total;
};

Enlace::Enlace();

Enlace::~Enlace();

int Enlace::obtenerTamanyo(int i = 0){
	return obtenerTamanyoEnlace(0);
}

int Enlace::obtenerTamanyoEnlace(int i = 0){
	if (i > 1024){
		cout "Maximo nivel de recursividad alcanzado jeje" << endl;
		return 0;
	}
	else{
		return *ptr.obtenerTamanyo(i+1);
	}
}







