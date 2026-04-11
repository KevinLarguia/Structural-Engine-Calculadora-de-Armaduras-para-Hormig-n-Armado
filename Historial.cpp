#include "Historial.h"
#include <fstream>
#include <wx/msgdlg.h>
#include <wx/string.h>
#include "Datos_historial.h"
#include "ventana_historial.h"
#include "ventana_principal.h"
#include <wx/event.h>
#include "ventana_calculos_vigas.h"
using namespace std;

Historial::Historial() {
	m_filtro_hormigon = " ";
	m_filtro_viga = " ";
	
}

void Historial::Cargar_filtro_hormigon(string filtro_hormigon){
	m_filtro_hormigon = filtro_hormigon;
}

void Historial::Cargar_filtro_viga(string filtro_viga){
	m_filtro_viga = filtro_viga;
}

void Historial::Cargar_datos(int viga, string tipo_h, float largo_h, float ancho_h, float altura_h, float recubrimiento_h, float momento_h, float altura_efect_h, float distancia_v1_h, float distancia_v2_h, 
							 float ancho_colaborante_h, string verif_b_h, float momento_nominal_h, float acero_s_h, float acero_min_h){
	if(viga == 0){
		m_viga = "Error";
	}else if (viga == 1){
		m_viga= "H-20";
	}else if (viga == 2){
		m_viga= "H-25";
	}else if (viga == 3){
		m_viga= "H-30";
	}
	m_tipo = tipo_h;
	m_largo = largo_h;
	m_ancho = ancho_h;
	m_altura = altura_h;
	m_recubrimiento = recubrimiento_h;
	m_momento = momento_h;
	m_altura_efect = altura_efect_h;
	m_distancia_v1 = distancia_v1_h;
	m_distancia_v2 = distancia_v2_h;
	m_res_ancho_colaborante = ancho_colaborante_h;
	m_verif_b = verif_b_h;
	m_res_momento_nominal = momento_nominal_h;
	m_res_acero_s = acero_s_h;
	m_res_acero_min = acero_min_h;
}

void Historial::Guardar_datos_archivo(){
	Datos_historial enviar_historial;
	enviar_historial = Cargar_struct();
	ofstream archi("Historial.bin",ios::binary|ios::app); 
	archi.seekp(0, ios::end);
	if(archi.is_open()){
		archi.write(reinterpret_cast<char*>(&enviar_historial), sizeof(enviar_historial));
		archi.close();
	}else{
		wxMessageBox("No se encontró el archivo historial","ERROR");
	}
}

Datos_historial Historial::Cargar_struct(){
	Datos_historial aux;
	
	strcpy(aux.viga, m_viga.c_str());
	string str=m_tipo;
	strncpy(aux.tipo, str.c_str(), sizeof(aux.tipo));
	aux.tipo[sizeof(aux.tipo) - 1] = '\0';
	
	aux.largo = m_largo;
	aux.ancho = m_ancho;
	aux.altura = m_altura;
	aux.recubrimiento = m_recubrimiento;
	aux.momento = m_momento;
	aux.altura_efect = m_altura_efect;
	aux.distancia_v1 = m_distancia_v1;
	aux.distancia_v2 = m_distancia_v2;
	aux.res_ancho_colaborante = m_res_ancho_colaborante;
	
	string str2=m_verif_b;
	strncpy(aux.verif_b, str2.c_str(), sizeof(aux.verif_b));
	aux.verif_b[sizeof(aux.verif_b) - 1] = '\0';
	
	aux.res_momento_nominal = m_res_momento_nominal;
	aux.res_acero_s = m_res_acero_s;
	aux.res_acero_min = m_res_acero_min;
	
	aux.esta_borrado = false;
	return aux;
}

void Historial::Crear_txt(wxString directorio_importacion){
	ifstream archivoBin("Historial.bin",ios::binary);
	if (!archivoBin) {
		wxMessageBox("Error al abrir el archivo binario.","ERROR");
		return;
	}
	
	//Seccion para directorio de exportacion
	string dire = string(directorio_importacion);
	
	// Abrir el archivo de texto para escritura
	ofstream archivoTxt(dire);
	if (!archivoTxt) {
		wxMessageBox("Error al abrir el archivo de texto.","ERROR");
		return;
	}
	
	Datos_historial datos_exportar;
	// Leer y exportar cada estructura desde el archivo binario
	
	while (archivoBin.read(reinterpret_cast<char*>(&datos_exportar), sizeof(Datos_historial))) {
		if(!datos_exportar.esta_borrado){
			archivoTxt << "DATOS INGRESADOS"<<endl << " Hormigon: " << datos_exportar.viga << ", Tipo: " << datos_exportar.tipo << ", Largo: " << datos_exportar.largo 
				<< ", Ancho: " << datos_exportar.ancho << ", Altura: " << datos_exportar.altura << ", Recubrimiento: " << datos_exportar.recubrimiento
				<< ", Altura Efectiva: " << datos_exportar.altura_efect << ", Distancia a: " << datos_exportar.distancia_v1 << ", Distancia a': " << datos_exportar.distancia_v2<<endl
				<<"DATOS CALCULADOS"<<endl
				<< " Ancho Colaborante: " << datos_exportar.res_ancho_colaborante << ", Verif: " << datos_exportar.verif_b << ", Momento nominal: " << datos_exportar.res_acero_s
				<< ", Acero min: " << datos_exportar.res_acero_min<<endl<< "--------------------------------------------------"<<endl;
			
		}
	}
	// Cerrar los archivos
	archivoBin.close();
	archivoTxt.close();
	
	wxMessageBox("Datos cargados satisfactoriamente.","Succeffully");
}

void Historial::Agregar_Fila(Datos_historial& muestras_historial, wxGrid* ptr_grilla_historial,int Contador_grilla){
	
	ptr_grilla_historial->AppendRows(1);
	wxString Str_grilla;
	
	///Muestra de datos ingresados
	//Muestra tipo hormigon
	Str_grilla<<muestras_historial.viga;
	ptr_grilla_historial->SetCellValue(Contador_grilla,0,Str_grilla);
	Str_grilla.Clear();
	//Muestra tipo de viga
	Str_grilla<<muestras_historial.tipo;
	ptr_grilla_historial->SetCellValue(Contador_grilla,1,Str_grilla);
	Str_grilla.Clear();
	//Muestra Largo
	Str_grilla<<muestras_historial.largo;
	ptr_grilla_historial->SetCellValue(Contador_grilla,2,Str_grilla);
	Str_grilla.Clear();
	//Muestra Ancho
	Str_grilla<<muestras_historial.ancho;
	ptr_grilla_historial->SetCellValue(Contador_grilla,3,Str_grilla);
	Str_grilla.Clear();
	//Muestra Altura
	Str_grilla<<muestras_historial.altura;
	ptr_grilla_historial->SetCellValue(Contador_grilla,4,Str_grilla);
	Str_grilla.Clear();
	//Muestra Recubrimiento
	Str_grilla<<muestras_historial.recubrimiento;
	ptr_grilla_historial->SetCellValue(Contador_grilla,5,Str_grilla);
	Str_grilla.Clear();
	//Muestra Momento
	Str_grilla<<muestras_historial.momento;
	ptr_grilla_historial->SetCellValue(Contador_grilla,6,Str_grilla);
	Str_grilla.Clear();
	//Muestra Altura efectiva
	Str_grilla<<muestras_historial.altura_efect;
	ptr_grilla_historial->SetCellValue(Contador_grilla,7,Str_grilla);
	Str_grilla.Clear();
	//Muestra Distancia a
	Str_grilla<<muestras_historial.distancia_v1;
	ptr_grilla_historial->SetCellValue(Contador_grilla,8,Str_grilla);
	Str_grilla.Clear();
	//Muestra Distancia a'
	Str_grilla<<muestras_historial.distancia_v2;
	ptr_grilla_historial->SetCellValue(Contador_grilla,9,Str_grilla);
	Str_grilla.Clear();
	
	///Muestra de resultados
	//Muestra Ancho colaborante
	Str_grilla<<muestras_historial.res_ancho_colaborante;
	ptr_grilla_historial->SetCellValue(Contador_grilla,10,Str_grilla);
	Str_grilla.Clear();
	//Muestra Verificacion
	Str_grilla<<muestras_historial.verif_b;
	ptr_grilla_historial->SetCellValue(Contador_grilla,11,Str_grilla);
	Str_grilla.Clear();
	//Muestra Momento nominal
	Str_grilla<<muestras_historial.res_momento_nominal;
	ptr_grilla_historial->SetCellValue(Contador_grilla,12,Str_grilla);
	Str_grilla.Clear();
	//Muestra Acero necesario
	Str_grilla<<muestras_historial.res_acero_s;
	ptr_grilla_historial->SetCellValue(Contador_grilla,13,Str_grilla);
	Str_grilla.Clear();
	//Muestra Acero minimo
	Str_grilla<<muestras_historial.res_acero_min;
	ptr_grilla_historial->SetCellValue(Contador_grilla,14,Str_grilla);
	Str_grilla.Clear();
	
}

void Historial::Bucle_Grilla(wxGrid* ptr_grilla_historial, ventana_historial* ptr_ventana_historial){
	ifstream archi("Historial.bin",ios::binary|ios::in);
	archi.seekg(sizeof(Datos_historial)*ptr_ventana_historial->Ver_Contador_Grilla());
	Datos_historial muestras_historial;
	
	while (archi.read(reinterpret_cast<char*>(&muestras_historial),sizeof(Datos_historial))){
		if(!muestras_historial.esta_borrado){
			this->Agregar_Fila(muestras_historial, ptr_grilla_historial, ptr_ventana_historial->Ver_Contador_Grilla());
			ptr_ventana_historial->Incrementar_Contador_Grilla();
		}
	}
	archi.close();
}

void Historial::Borrar_Historial(){
	ofstream archi("Historial.txt",ios::out|ios::trunc);
	archi.close();
	ofstream archi2("Historial.bin",ios::binary|ios::out|ios::trunc);
	archi.close();
}

void Historial::Filtrar_datos(wxGrid* ptr_grilla_historial, ventana_historial* ptr_ventana_historial){
	ifstream archi("Historial.bin",ios::binary|ios::in);
	archi.seekg(0);
	Datos_historial muestras_historial;
	
	char aux_hormigon[6];
	string aux_hormigon_str;
	char aux_viga[6];
	string aux_viga_str;
	while (archi.read(reinterpret_cast<char*>(&muestras_historial),sizeof(Datos_historial))){
		aux_hormigon_str = m_filtro_hormigon;
		strcpy(aux_hormigon, aux_hormigon_str.c_str());
		aux_viga_str = m_filtro_viga;
		strcpy(aux_viga, aux_viga_str.c_str());
		if(!strcmp(aux_hormigon, muestras_historial.viga)||strcmp(aux_hormigon," ")==0){
			if(!strcmp(aux_viga, muestras_historial.tipo)||strcmp(aux_viga," ")==0){
				if(!muestras_historial.esta_borrado){
					this->Agregar_Fila(muestras_historial, ptr_grilla_historial, ptr_ventana_historial->Ver_Contador_Grilla());
					ptr_ventana_historial->Incrementar_Contador_Grilla();
				}
			}
			
		}
	}
}

void Historial::Borrar_un_dato(int fila_a_borrar, wxGrid* ptr_grilla_historial, ventana_historial* ptr_ventana_historial){
	fstream archi("Historial.bin",ios::binary|ios::in|ios::out);
	if(!archi.is_open()){
		wxMessageBox("El archivo no pudo abrirse","ERROR");
		return;
	}
	
	Datos_historial muestras_historial;
	int contador_filas_no_borradas = 0;
	int contador_filas_borradas = 0;
	bool fila_encontrada = false;
	
	while (archi.read(reinterpret_cast<char*>(&muestras_historial),sizeof(Datos_historial))){
		if(!muestras_historial.esta_borrado){
			contador_filas_no_borradas++;
			if(contador_filas_no_borradas == fila_a_borrar ){
				archi.seekp((contador_filas_no_borradas-1+contador_filas_borradas)*sizeof(Datos_historial));
				
				muestras_historial.esta_borrado = true;
				
				archi.write(reinterpret_cast<char*>(&muestras_historial), sizeof(Datos_historial));
				archi.close();
				ptr_grilla_historial->ClearGrid();
				ptr_grilla_historial->DeleteRows(0,ptr_ventana_historial->Ver_Contador_Grilla());
				
				ptr_ventana_historial->Cargar_Contador_Grilla(0);
				
				ifstream archi2("Historial.bin",ios::binary|ios::in);
				archi2.seekg(sizeof(Datos_historial)*(ptr_ventana_historial->Ver_Contador_Grilla()));
				Datos_historial muestras_historial_2;
				
				while (archi2.read(reinterpret_cast<char*>(&muestras_historial_2),sizeof(Datos_historial))){
					if(!muestras_historial_2.esta_borrado){
						this->Agregar_Fila(muestras_historial_2, ptr_grilla_historial, ptr_ventana_historial->Ver_Contador_Grilla());
						ptr_ventana_historial->Incrementar_Contador_Grilla();
					}
				}
				archi2.close();
				wxMessageBox("Se borro la fila " + to_string(fila_a_borrar),"Suceffully");
				return;
			}
		} else {
			contador_filas_borradas++;
		}
	}
	if(!fila_encontrada){
		wxMessageBox("Fila no encontrada","ERROR");
		archi.close();
		return;
	}
}

void Historial::Reutilizar_datos_viejos(int pos, ventana_principal *ptr_ventana_principal, ventana_historial *vent_historial){
	ifstream archivoBin("Historial.bin", ios::binary);
	archivoBin.seekg(0);
	
	Datos_historial buscar_en_historial;
	int contador_filas_no_borradas = 0;
	int contador_filas_borradas = 0;
	
	while (archivoBin.read(reinterpret_cast<char*>(&buscar_en_historial),sizeof(Datos_historial))){
		if(!buscar_en_historial.esta_borrado){
			contador_filas_no_borradas++;
			if(contador_filas_no_borradas == pos ){
				archivoBin.seekg((contador_filas_no_borradas-1+contador_filas_borradas)*sizeof(Datos_historial));
				Datos_historial muestra_en_calculadora;
				
				archivoBin.read(reinterpret_cast<char*>(&muestra_en_calculadora),sizeof(Datos_historial));
				
				archivoBin.close();
				if(muestra_en_calculadora.tipo[0] =='T'){
					ventana_calculos_vigas *intermedia = new ventana_calculos_vigas(muestra_en_calculadora,true,this,NULL);
					intermedia->Show();
					
				}else if(muestra_en_calculadora.tipo[0] =='L'){
					ventana_calculos_vigas *extrema = new ventana_calculos_vigas(muestra_en_calculadora,false,this,NULL);
					extrema->Show();
				}
				return;
			}
		} else {
			contador_filas_borradas++;
		}
	}
}
