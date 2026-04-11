#ifndef HISTORIAL_H
#define HISTORIAL_H
#include <string>
#include <wx/string.h>
#include <wx/grid.h>
#include "Datos_historial.h"
#include "ventana_historial.h"
#include "ventana_principal.h"
using namespace std;

class ventana_historial;
class Historial {
private:
	
	float m_res_ancho_colaborante, m_res_momento_nominal, m_res_acero_s, m_res_acero_min;
	float m_largo, m_ancho, m_altura, m_recubrimiento, m_momento, m_altura_efect, m_distancia_v1, m_distancia_v2;
	string m_tipo, m_verif_b;
	string m_viga;
	
	string m_filtro_hormigon;
	string m_filtro_viga;
	
	
public:
	Historial();
	///filtro tipo hormigon
	void Cargar_filtro_hormigon(string filtro_hormigon);
	///filtro tipo viga
	void Cargar_filtro_viga(string filtro_viga);
	
	void Cargar_datos(int viga, string tipo_h, float largo_h, float ancho_h, float altura_h, float recubrimiento_h, float momento_h, float altura_efect_h, float distancia_v1_h, float distancia_v2_h, 
					  float ancho_colaborante_h, string verif_b_h, float momento_nominal_h, float acero_s_h, float acero_min_h);
	
	void Guardar_datos_archivo();
	Datos_historial Cargar_struct();
	///correcciones ventana historial
	void Crear_txt(wxString directorio_importacion);
	void Agregar_Fila(Datos_historial& muestras_historial, wxGrid* ptr_grilla_historial, int Contador_grilla);
	void Bucle_Grilla(wxGrid* ptr_grilla_historial, ventana_historial* ptr_ventana_historial);
	void Borrar_Historial();
	void Filtrar_datos(wxGrid* ptr_grilla_historial, ventana_historial* ptr_ventana_historial);
	void Borrar_un_dato(int fila_a_borrar, wxGrid* ptr_grilla_historial, ventana_historial* ptr_ventana_historial);
	void Reutilizar_datos_viejos(int pos, ventana_principal *ptr_ventana_principal,  ventana_historial *vent_historial);
};

#endif

