#pragma once

class Elemento {
	int tamnyo;
	string nombre;
	std:list 
public:
	Elemento();
	~Elemento();
	obtenerTamanyo();
	devolverNombre();
	calcularTamanyo();
};

class Archivo:Elemento {
	Archivo();
	~Archivo();
	calcularTamanyo();


};

class