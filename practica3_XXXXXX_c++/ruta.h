#pragma once

#include <memory>

class Elemento {
	string nombre;

public:
	Elemento();
	~Elemento();
	int obtenerTamanyo(int i = 0);
	string devolverNombre();
};

class Archivo:Elemento {
	int tamanto;
public:
	Archivo();
	~Archivo();
	int obtenerTamanyo(int i = 0);

};

class Directorio:Elemento {
	std::List<Elemento> elementos;
	int numElementos;
public:
	Directorio();
	asdasdasd
	asd
	asd
	a
	sd
	asd
	ads

	asd
	~Directorio();
	int obtenerTamanyo(int i = 0);
};

class Enlace:Elemento {
	std::shared_ptr<Elemento> ptr;
public:
	Enlace();
	~Enlace();
	int obtenerTamanyo(int i = 0);
};