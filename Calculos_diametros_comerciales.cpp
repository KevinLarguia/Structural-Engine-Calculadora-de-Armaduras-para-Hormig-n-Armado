#include "Calculos_diametros_comerciales.h"

Calculos_diametros_comerciales::Calculos_diametros_comerciales() {
	
}

void Calculos_diametros_comerciales::Calculos_diametro(int cant_10,int cant_12,int cant_16,int cant_20){
	float resultado_total;
	m_resultado_1 = cant_10*0.78;
	m_resultado_2 = cant_12*1.13;
	m_resultado_3 = cant_16*2.01;
	m_resultado_4 = cant_20*3.14;
	
	resultado_total = m_resultado_1 + m_resultado_2 + m_resultado_3 + m_resultado_4;
	m_resultado_total = resultado_total;
}

float Calculos_diametros_comerciales::Mostrar_resultado_1(){return m_resultado_1;}

float Calculos_diametros_comerciales::Mostrar_resultado_2(){return m_resultado_2;}

float Calculos_diametros_comerciales::Mostrar_resultado_3(){return m_resultado_3;}

float Calculos_diametros_comerciales::Mostrar_resultado_4(){return m_resultado_4;}

float Calculos_diametros_comerciales::Mostrar_resultado_total(){return m_resultado_total;}
