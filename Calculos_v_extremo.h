#ifndef CALCULOS_V_EXTREMO_H
#define CALCULOS_V_EXTREMO_H
#include <string>
#include "Calculos_generales.h"
using namespace std;

class Calculos_v_extremo :public Calculos_generales{
private:
public:
	Calculos_v_extremo();
	Calculos_v_extremo(int tipo_hormigon);
	///-------------------------------------Frame Viga intermedia-------------------------------------
	void Calculo_ancho_colaborante(float largo, float ancho, float altura_efect,float dist_v1, float dist_v2)override;
	void Calculo_acero_necesario(float altura, float recubrimiento)override;
	void Calculo_ke_kc(float altura, float recubrimiento)override;
};

#endif

