#include "Calculos_generales.h"
#ifndef CALCULOS_V_INTERMEDIO_H
#define CALCULOS_V_INTERMEDIO_H
#include <string>
using namespace std;

class Calculos_v_intermedio:public Calculos_generales{
private:
public:
	Calculos_v_intermedio();
	Calculos_v_intermedio(int tipo_hormigon);

	///-------------------------------------Frame Viga intermedia-------------------------------------
	void Calculo_ancho_colaborante(float largo, float ancho, float altura_efect,float dist_v1, float dist_v2)override;
	void Calculo_acero_necesario(float altura, float recubrimiento)override;
	void Calculo_ke_kc(float altura, float recubrimiento)override;
	
	
};
#endif
