#ifndef CALCULOS_DIAMETROS_COMERCIALES_H
#define CALCULOS_DIAMETROS_COMERCIALES_H

class Calculos_diametros_comerciales {
private:
	float m_resultado_1, m_resultado_2, m_resultado_3, m_resultado_4,m_resultado_total;
public:
	Calculos_diametros_comerciales();
	///Funcion para calculos
	void Calculos_diametro(int cant_10,int cant_12,int cant_16,int cant_20);
	
	///Funciones para mostrar
	float Mostrar_resultado_1();
	float Mostrar_resultado_2();
	float Mostrar_resultado_3();
	float Mostrar_resultado_4();
	float Mostrar_resultado_total();
};

#endif

