///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/combobox.h>
#include <wx/textctrl.h>
#include <wx/grid.h>
#include <wx/filepicker.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class calculadora_de_vigas
///////////////////////////////////////////////////////////////////////////////
class calculadora_de_vigas : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText3;
		wxButton* boton_intermedia;
		wxButton* boton_extrema;
		wxStaticBitmap* m_bitmap1;
		wxButton* acerca_de;
		wxButton* boton_historial;
		wxButton* boton_referencia;

		// Virtual event handlers, override them in your derived class
		virtual void Click_boton_intermedia( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_extrema( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_acerca_de( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_historial( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_referencia( wxCommandEvent& event ) { event.Skip(); }


	public:

		calculadora_de_vigas( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Calculadora de vigas"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 830,580 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~calculadora_de_vigas();

};

///////////////////////////////////////////////////////////////////////////////
/// Class viga_intermedia
///////////////////////////////////////////////////////////////////////////////
class viga_intermedia : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText107;
		wxStaticText* m_staticText108;
		wxStaticText* m_staticText16;
		wxComboBox* tipos_hormigon;
		wxStaticText* m_staticText17;
		wxTextCtrl* largo_v_intermedio;
		wxStaticText* m_staticText23;
		wxStaticText* m_staticText171;
		wxTextCtrl* ancho_v_intermedio;
		wxStaticText* m_staticText24;
		wxStaticText* m_staticText172;
		wxTextCtrl* altura_v_intermedio;
		wxStaticText* m_staticText25;
		wxStaticText* m_staticText174;
		wxTextCtrl* recubrimiento_v_intermedio;
		wxStaticText* m_staticText29;
		wxStaticText* m_staticText173;
		wxTextCtrl* momento_v_intermedio;
		wxStaticText* m_staticText26;
		wxStaticText* m_staticText1732;
		wxTextCtrl* altura_efect_v_intermedio;
		wxStaticText* m_staticText262;
		wxStaticText* m_staticText1733;
		wxTextCtrl* distancia_v1_intermedio;
		wxStaticText* m_staticText263;
		wxStaticText* m_staticText17331;
		wxTextCtrl* distancia_v2_intermedio;
		wxStaticText* m_staticText2631;
		wxButton* boton_calcular_v_intermedia;
		wxStaticText* m_staticText173121;
		wxTextCtrl* ver_ancho_colaborante;
		wxStaticText* m_staticText26121;
		wxStaticText* m_staticText17313;
		wxTextCtrl* ver_verificacion_b;
		wxStaticText* m_staticText1731;
		wxTextCtrl* ver_momento_nominal;
		wxStaticText* m_staticText261;
		wxStaticText* m_staticText17311;
		wxTextCtrl* ver_acero_necesario;
		wxStaticText* m_staticText2611;
		wxStaticText* m_staticText17312;
		wxTextCtrl* ver_acero_minimo;
		wxStaticText* m_staticText2612;
		wxStaticText* m_staticText98;
		wxButton* boton_diametros_comerciales_intermedia;
		wxTextCtrl* ver_as_mayor;
		wxStaticText* m_staticText39;
		wxTextCtrl* ver_total_as_elegido;
		wxButton* boton_volver_intermedia11;

		// Virtual event handlers, override them in your derived class
		virtual void Combo_tipos_hormigon( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_calcular_v_intermedia( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_diametros_comerciales_intermedia( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_volver_intermedia( wxCommandEvent& event ) { event.Skip(); }


	public:

		viga_intermedia( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Calculos de viga"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,827 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~viga_intermedia();

};

///////////////////////////////////////////////////////////////////////////////
/// Class calculadora_as_inter
///////////////////////////////////////////////////////////////////////////////
class calculadora_as_inter : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText109;
		wxTextCtrl* diametro_10;
		wxStaticText* m_staticText101;
		wxTextCtrl* resultado_total_diam_10;
		wxStaticText* m_staticText141;
		wxTextCtrl* diametro_12;
		wxStaticText* m_staticText1011;
		wxTextCtrl* resultado_total_diam_12;
		wxStaticText* m_staticText1411;
		wxTextCtrl* diametro_16;
		wxStaticText* m_staticText1012;
		wxTextCtrl* resultado_total_diam_16;
		wxStaticText* m_staticText1412;
		wxTextCtrl* diametro_20;
		wxStaticText* m_staticText1013;
		wxTextCtrl* resultado_total_diam_20;
		wxStaticText* m_staticText1413;
		wxButton* boton_calcular_as;
		wxStaticText* m_staticText1014;
		wxTextCtrl* resultado_total_diam;
		wxStaticText* m_staticText1414;

		// Virtual event handlers, override them in your derived class
		virtual void Click_boton_calcular_as( wxCommandEvent& event ) { event.Skip(); }


	public:

		calculadora_as_inter( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Calculadora acero necesario"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 614,393 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~calculadora_as_inter();

};

///////////////////////////////////////////////////////////////////////////////
/// Class historial
///////////////////////////////////////////////////////////////////////////////
class historial : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText7;
		wxComboBox* filtrar_tipo_hormigon;
		wxComboBox* filtrar_tipo_viga;
		wxButton* boton_filtrar;
		wxGrid* grilla_historial;
		wxButton* boton_cerrar_historial;
		wxButton* boton_actualizar;
		wxButton* boton_borrar;
		wxButton* boton_borrar_fila;
		wxButton* Reutilizar_datos;
		wxDirPickerCtrl* m_dirPicker1;
		wxButton* boton_exportar_historial;

		// Virtual event handlers, override them in your derived class
		virtual void Combo_filtrar_tipo_hormigon( wxCommandEvent& event ) { event.Skip(); }
		virtual void Combo_filtrar_tipo_viga( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_filtrar( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_cerrar_historial( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_actualizar( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_borrar( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_borrar_fila( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_reutilizar_datos( wxCommandEvent& event ) { event.Skip(); }
		virtual void boton_seleccion_exportacion( wxFileDirPickerEvent& event ) { event.Skip(); }
		virtual void Click_boton_exportar_historial( wxCommandEvent& event ) { event.Skip(); }


	public:

		historial( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Cálculos recientes"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 857,418 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~historial();

};

///////////////////////////////////////////////////////////////////////////////
/// Class acerca_de1
///////////////////////////////////////////////////////////////////////////////
class acerca_de1 : public wxFrame
{
	private:

	protected:
		wxStaticText* acerca_de;
		wxStaticText* m_staticText110;
		wxStaticText* m_staticText134;
		wxStaticText* m_staticText135;
		wxStaticText* m_staticText136;
		wxStaticText* m_staticText137;
		wxStaticText* m_staticText138;
		wxStaticText* m_staticText139;
		wxStaticText* m_staticText140;
		wxStaticText* m_staticText141;
		wxButton* boton_volver_acerca_de;
		wxStaticText* m_staticText1421;
		wxStaticText* m_staticText14211;
		wxStaticText* m_staticText14212;

		// Virtual event handlers, override them in your derived class
		virtual void Click_boton_volver_acerca_de( wxCommandEvent& event ) { event.Skip(); }


	public:

		acerca_de1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Acerca de"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 780,450 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~acerca_de1();

};

///////////////////////////////////////////////////////////////////////////////
/// Class referencias
///////////////////////////////////////////////////////////////////////////////
class referencias : public wxFrame
{
	private:

	protected:
		wxStaticBitmap* m_bitmap2;
		wxStaticText* m_staticText133;
		wxStaticText* m_staticText93;
		wxStaticText* m_staticText931;
		wxStaticText* m_staticText932;
		wxStaticText* m_staticText933;
		wxStaticText* m_staticText934;
		wxStaticText* m_staticText935;
		wxStaticText* m_staticText936;
		wxStaticText* m_staticText937;
		wxStaticText* m_staticText938;
		wxStaticText* m_staticText939;
		wxStaticText* m_staticText9310;
		wxStaticText* m_staticText93101;
		wxStaticText* m_staticText93102;
		wxStaticText* m_staticText93103;
		wxButton* boton_cerrar_referencias;

		// Virtual event handlers, override them in your derived class
		virtual void Click_boton_cerrar_referencias( wxCommandEvent& event ) { event.Skip(); }


	public:

		referencias( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Referencias"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 972,680 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~referencias();

};

