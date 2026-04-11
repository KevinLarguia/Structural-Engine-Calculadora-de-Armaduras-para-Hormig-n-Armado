#include "Calculos_generales.h"
#include <cmath>
using namespace std;

Calculos_generales::Calculos_generales() {
	m_tipos_hormigon = 0;
	m_resultado_total = 0;
}

void Calculos_generales::Cargar_tipos_hormigon(int valores_hormigon){
	m_tipos_hormigon = valores_hormigon;
}

void Calculos_generales::Calculo_momento_nominal(float m_ultimo){
	m_res_momento_nominal = m_ultimo/0.9;
}

void Calculos_generales::Calculo_acero_minimo(float ancho, float altura, float recubrimiento){
	float as_min;
	as_min = ((1.4*ancho*this->Calculo_altura_util_aux(altura,recubrimiento))/420)*10000;
	m_res_acero_min = as_min;
}

float Calculos_generales::Calculo_altura_util_aux(float altura, float recubrimiento){
	float a_util;
	a_util = (altura-recubrimiento)-0.01/2;
	return a_util;
}

float Calculos_generales::Calculo_c_aux(float altura,float recubrimiento){
	float c_aux;
	c_aux = m_kc*this->Calculo_altura_util_aux(altura,recubrimiento);
	return c_aux;
}

float Calculos_generales::Calculo_a_aux(float c_aux,float altura,float recubrimiento){
	float a_aux;
	a_aux = 0.85*this->Calculo_c_aux(altura,recubrimiento);
	return a_aux;
}

bool Calculos_generales::Comparacion_ancho_necesario(float altura_efect, float altura,float recubrimiento){
	float a_aux,c_aux;
	c_aux = this->Calculo_c_aux(altura, recubrimiento);
	a_aux = this->Calculo_a_aux(c_aux,altura,recubrimiento);
	if(altura_efect>a_aux){
		return true;
	}else{
		return false;
	}
}

void Calculos_generales::Calculo_kd_aux(float altura,float recubrimiento){
	float kd_aux;
	kd_aux = this->Calculo_altura_util_aux(altura,recubrimiento)/(sqrt((m_res_momento_nominal/1000)/altura));
	m_kd = kd_aux;
}

float Calculos_generales::Mostrar_ancho_colaborante(){
	return m_res_ancho_colaborante;
}

string Calculos_generales::Mostrar_mensaje_comparacion(float altura_efect, float altura,float recubrimiento){
	bool condicion;
	condicion = this->Comparacion_ancho_necesario(altura_efect,altura,recubrimiento);
	if(condicion){
		return "Verifica";
	}else{
		return "No Verifica";
	}
}

float Calculos_generales::Mostrar_momento_nominal(){
	return m_res_momento_nominal;
}

float Calculos_generales::Mostrar_acero_necesario(){
	return m_res_acero_s;
}

float Calculos_generales::Mostrar_acero_min(){
	return m_res_acero_min;
}

float Calculos_generales::Mostrar_as_mayor(){
	if (m_res_acero_s > m_res_acero_min){
		return m_res_acero_s;
	}else{
		return m_res_acero_min;
	}
}

int Calculos_generales::Mostrar_tipo_hormigon(){
	return m_tipos_hormigon;
}

void Calculos_generales::Calculos_diametro(int cant_10,int cant_12,int cant_16,int cant_20){
	float resultado_total;
	m_resultado_1 = cant_10*0.78;
	m_resultado_2 = cant_12*1.13;
	m_resultado_3 = cant_16*2.01;
	m_resultado_4 = cant_20*3.14;
	
	resultado_total = m_resultado_1 + m_resultado_2 + m_resultado_3 + m_resultado_4;
	m_resultado_total = resultado_total;
}

float Calculos_generales::Mostrar_resultado_1(){return m_resultado_1;}

float Calculos_generales::Mostrar_resultado_2(){return m_resultado_2;}

float Calculos_generales::Mostrar_resultado_3(){return m_resultado_3;}

float Calculos_generales::Mostrar_resultado_4(){return m_resultado_4;}

float Calculos_generales::Mostrar_resultado_total(){return m_resultado_total;}

string Calculos_generales::Mostrar_verificacion_as(){
	if(m_res_acero_s > m_res_acero_min){
		if(m_resultado_total > m_res_acero_s){
			return "Verifica";
		}else{ 
			return "No verifica";
		}
	}else{
		if(m_res_acero_min < m_resultado_total){
			return "Verifica";
		}else{ 
			return "No verifica";
		}
	}
}
