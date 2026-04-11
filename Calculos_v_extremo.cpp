#include "Calculos_v_extremo.h"
#include <cmath>
#include <string>
#include <wx/msgdlg.h>
using namespace std;

Calculos_v_extremo::Calculos_v_extremo() {}

Calculos_v_extremo::Calculos_v_extremo(int tipo_hormigon){
	m_tipos_hormigon = tipo_hormigon;
}

void Calculos_v_extremo::Calculo_ancho_colaborante(float largo, float ancho, float altura_efect,float dist_v1,float dist_v2){
	
	float aux1,aux2,aux3;
	aux1 = (largo/12) + ancho;
	aux2 = ancho + 6*altura_efect;
	aux3 = ancho + 0.5*(dist_v1);
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

void Calculos_v_extremo::Calculo_acero_necesario(float altura, float recubrimiento){
	float as;
	this->Calculo_ke_kc(altura,recubrimiento);
	if(m_ke==0 && m_kc==0){
		wxMessageBox("No has seleccionado tipo de hormigon","ERROR");
	}
	as = 1.10 * m_ke * ((m_res_momento_nominal/1000)/this->Calculo_altura_util_aux(altura,recubrimiento));
	m_res_acero_s = as;
}

void Calculos_v_extremo::Calculo_ke_kc(float altura,float recubrimiento){
	this->Calculo_kd_aux(altura,recubrimiento);
	switch(m_tipos_hormigon){
	case 0:
		m_ke=0;
		m_kc=0;
		break;
	case 1:
		if(m_kd>0 && m_kd<0.58){
			m_ke=27.9836;
			m_kc=0.3218;
		}else if(m_kd>0.59 && m_kd<0.75){
			m_ke=26.2746;
			m_kc=0.2140;
		}else if(m_kd>0.76 && m_kd<1.22){
			m_ke=25.4026;
			m_kc=0.0591;
		}
		break;
	case 2:
		if(m_kd>0 && m_kd<0.51){
			m_ke=28.0253;
			m_kc=0.2879;
		}else if(m_kd>0.52 && m_kd<0.67){
			m_ke=26.7234;
			m_kc=0.1956;
		}else if(m_kd>0.68 && m_kd<1.09){
			m_ke=25.7361;
			m_kc=0.0976;
		}
		break;
	case 3:
		if(m_kd>0 && m_kd<0.47){
			m_ke=29.4113;
			m_kc=0.4298;
		}else if(m_kd>0.48 && m_kd<0.61){
			m_ke=27.4399;
			m_kc=0.3014;
		}else if(m_kd>0.62 && m_kd<0.999){
			m_ke=26.0982;
			m_kc=0.2214;
		}
		break;	
	}		
}

