#pragma once

#include <memory>

class Elemento {
	string nombre;

public:
	Elemento();
	~Elemento();
	int obtenerTamanyo();
	string devolverNombre();
};

class Archivo:Elemento {
	int tamanto;
public:
	Archivo();
	~Archivo();
	int obtenerTamanyo();

};

class Directorio:Elemento {
	std::List<Elemento> elementos;
	int numElementos;
public:
	Directorio();
	~Directorio();
	int obtenerTamanyo();
};

class Enlace:Elemento {
	std::shared_ptr<Elemento> ptr;
public:
	Enlace();
	~Enlace();
	int obtenerTamanyo();
};