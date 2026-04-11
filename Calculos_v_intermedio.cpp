#include "Calculos_v_intermedio.h"
#include <cmath>
#include <string>
#include <wx/msgdlg.h>
using namespace std;

Calculos_v_intermedio::Calculos_v_intermedio() {}

Calculos_v_intermedio::Calculos_v_intermedio(int tipo_hormigon){
	m_tipos_hormigon = tipo_hormigon;
}

void Calculos_v_intermedio::Calculo_ancho_colaborante(float largo, float ancho, float altura_efect,float dist_v1, float dist_v2){
	
	float aux1,aux2,aux3;
	aux1 = largo/4;
	aux2 = ancho + 16*altura_efect;
	aux3 = ancho + 0.5*(dist_v1 + dist_v2);
	if(aux1<aux2 && aux1<aux3){
		m_res_ancho_colaborante = aux1;
	}else{
		if(aux2<aux3){
			m_res_ancho_colaborante = aux2;
		}else{
			m_res_ancho_colaborante = aux3;
		}
	}
}

void Calculos_v_intermedio::Calculo_acero_necesario(float altura, float recubrimiento){
	float as;
	this->Calculo_ke_kc(altura,recubrimiento);
	as = m_ke * ((m_res_momento_nominal/1000)/this->Calculo_altura_util_aux(altura,recubrimiento));
	m_res_acero_s = as;
}

void Calculos_v_intermedio::Calculo_ke_kc(float altura,float recubrimiento){
	this->Calculo_kd_aux(altura,recubrimiento);
	switch(m_tipos_hormigon){
	case 0:
		m_ke=0;
		m_kc=0;
		break;
	case 1:
		if(m_kd>0 && m_kd<0.58){
			m_ke=26.3986;
			m_kc=0.2308;
		}else if(m_kd>0.59 && m_kd<0.75){
			m_ke=25.2069;
			m_kc=0.1304;
		}else if(m_kd>0.76 && m_kd<1.22){
			m_ke=24.3013;
			m_kc=0.0476;
		}
		break;
	case 2:
		if(m_kd>0 && m_kd<0.51){
			m_ke=27.0134;
			m_kc=0.2791;
		}else if(m_kd>0.52 && m_kd<0.67){
			m_ke=25.6246;
			m_kc=0.1667;
		}else if(m_kd>0.68 && m_kd<1.09){
			m_ke=24.6593;
			m_kc=0.0811;
		}
		break;
	case 3:
		if(m_kd>0 && m_kd<0.47){
			m_ke=28.3236;
			m_kc=0.3750;
		}else if(m_kd>0.48 && m_kd<0.61){
			m_ke=26.3446;
			m_kc=0.2264;
		}else if(m_kd>0.62 && m_kd<0.999){
			m_ke=25.0891;
			m_kc=0.1200;
		}
		break;	
	}	
}
