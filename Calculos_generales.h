#ifndef CALCULOS_GENERALES_H
#define CALCULOS_GENERALES_H
#include <string>
using namespace std;

class Calculos_generales {
protected:
	///frame viga intermedia
	float m_res_ancho_colaborante, m_res_momento_nominal, m_res_acero_s, m_res_acero_min;
	int m_tipos_hormigon;
	float m_ke,m_kc,m_kd;
	///frame diametros comerciales
	float m_resultado_1, m_resultado_2, m_resultado_3, m_resultado_4,m_resultado_total;
public:
	Calculos_generales();
	///-------------------------------------Frame Viga intermedia-------------------------------------
	void Cargar_tipos_hormigon(int valores_hormigon);
	///Funciones para obtener resultados
	void Calculo_momento_nominal(float m_ultimo);
	void Calculo_acero_minimo(float ancho, float altura, float recubrimiento);
	virtual void Calculo_ancho_colaborante(float largo, float ancho, float altura_efect,float dist_v1, float dist_v2)=0;
	virtual void Calculo_acero_necesario(float altura, float recubrimiento)=0;
	///Funciones para calculos auxiliares
	float Calculo_altura_util_aux(float altura, float recubrimiento);
	float Calculo_c_aux(float altura,float recubrimiento);
	float Calculo_a_aux(float c_aux,float altura,float recubrimiento);
	bool Comparacion_ancho_necesario(float altura_efect, float altura,float recubrimiento);
	void Calculo_kd_aux(float altura, float recubrimiento);
	virtual void Calculo_ke_kc(float altura, float recubrimiento)=0;
	///Funciones para mostrar datos
	float Mostrar_ancho_colaborante();
	string Mostrar_mensaje_comparacion(float altura_efect, float altura,float recubrimiento);
	float Mostrar_momento_nominal();
	float Mostrar_acero_necesario();
	float Mostrar_acero_min();
	float Mostrar_as_mayor();
	int Mostrar_tipo_hormigon();
	
	///-------------------------------------Frame diametros comerciales-------------------------------------
	///Funciones para calculos
	void Calculos_diametro(int cant_10,int cant_12,int cant_16,int cant_20);
	///Funciones para mostrar
	float Mostrar_resultado_1();
	float Mostrar_resultado_2();
	float Mostrar_resultado_3();
	float Mostrar_resultado_4();
	float Mostrar_resultado_total();
	string Mostrar_verificacion_as();
};

#endif

