#ifndef DATOS_HISTORIAL_H
#define DATOS_HISTORIAL_H
struct Datos_historial{
	char viga[6]; //TIPO HORMIGON ("20", "25", "30")
	char tipo[6]; //TIPO DE VIGA ("T" o "L")
	float largo;
	float ancho;
	float altura;
	float recubrimiento;
	float momento;
	float altura_efect;
	float distancia_v1;
	float distancia_v2;
	float res_ancho_colaborante;
	char verif_b[15];
	float res_momento_nominal;
	float res_acero_s;
	float res_acero_min;
	
	bool esta_borrado; //false = se escribe ; true = no se escribe
};
#endif
