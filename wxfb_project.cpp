///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

calculadora_de_vigas::calculadora_de_vigas( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 830,580 ), wxSize( 830,580 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Calculadora de Vigas H°A°"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 28, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer4->Add( m_staticText3, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	boton_intermedia = new wxButton( this, wxID_ANY, wxT("Viga Intermedia"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_intermedia->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer4->Add( boton_intermedia, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 10 );

	boton_extrema = new wxButton( this, wxID_ANY, wxT("Viga Extrema"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_extrema->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer4->Add( boton_extrema, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	m_bitmap1 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("resources/viga_para_foto_principal.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_bitmap1, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer2->Add( bSizer4, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );

	acerca_de = new wxButton( this, wxID_ANY, wxT("Acerca de"), wxDefaultPosition, wxDefaultSize, 0 );
	acerca_de->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer34->Add( acerca_de, 0, wxALL, 5 );


	bSizer5->Add( bSizer34, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxVERTICAL );

	boton_historial = new wxButton( this, wxID_ANY, wxT("Ver historial"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_historial->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer35->Add( boton_historial, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer5->Add( bSizer35, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	boton_referencia = new wxButton( this, wxID_ANY, wxT("Referencias"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_referencia->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer36->Add( boton_referencia, 0, wxALIGN_RIGHT|wxALL, 5 );


	bSizer5->Add( bSizer36, 1, wxEXPAND, 5 );


	bSizer2->Add( bSizer5, 0, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	boton_intermedia->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_intermedia ), NULL, this );
	boton_extrema->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_extrema ), NULL, this );
	acerca_de->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_acerca_de ), NULL, this );
	boton_historial->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_historial ), NULL, this );
	boton_referencia->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_referencia ), NULL, this );
}

calculadora_de_vigas::~calculadora_de_vigas()
{
	// Disconnect Events
	boton_intermedia->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_intermedia ), NULL, this );
	boton_extrema->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_extrema ), NULL, this );
	acerca_de->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_acerca_de ), NULL, this );
	boton_historial->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_historial ), NULL, this );
	boton_referencia->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_referencia ), NULL, this );

}

viga_intermedia::viga_intermedia( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 600,-1 ), wxSize( 600,-1 ) );
	this->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );

	wxBoxSizer* contenedor_intermedia;
	contenedor_intermedia = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer223;
	bSizer223 = new wxBoxSizer( wxVERTICAL );

	m_staticText107 = new wxStaticText( this, wxID_ANY, wxT("Viga Intermedia (T)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText107->Wrap( -1 );
	m_staticText107->SetFont( wxFont( 22, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false, wxT("ISOCPEUR") ) );

	bSizer223->Add( m_staticText107, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	m_staticText108 = new wxStaticText( this, wxID_ANY, wxT("Viga Extrema (L)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText108->Wrap( -1 );
	m_staticText108->SetFont( wxFont( 22, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false, wxT("ISOCPEUR") ) );

	bSizer223->Add( m_staticText108, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	contenedor_intermedia->Add( bSizer223, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Tipo de Hormigón"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	m_staticText16->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer39->Add( m_staticText16, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	tipos_hormigon = new wxComboBox( this, wxID_ANY, wxEmptyString, wxPoint( -1,-1 ), wxDefaultSize, 0, NULL, 0 );
	tipos_hormigon->Append( wxEmptyString );
	tipos_hormigon->Append( wxT("H-20") );
	tipos_hormigon->Append( wxT("H-25") );
	tipos_hormigon->Append( wxT("H-30") );
	tipos_hormigon->SetSelection( 0 );
	tipos_hormigon->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer39->Add( tipos_hormigon, 0, wxALL, 5 );


	contenedor_intermedia->Add( bSizer39, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Largo (L)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	m_staticText17->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer42->Add( m_staticText17, 1, wxALL, 5 );


	bSizer41->Add( bSizer42, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );

	largo_v_intermedio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	largo_v_intermedio->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer61->Add( largo_v_intermedio, 0, wxALL, 5 );


	bSizer41->Add( bSizer61, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxVERTICAL );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("[m]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	m_staticText23->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer62->Add( m_staticText23, 1, wxALL|wxEXPAND, 5 );


	bSizer41->Add( bSizer62, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer41, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer421;
	bSizer421 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText171 = new wxStaticText( this, wxID_ANY, wxT("Ancho (Bw)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText171->Wrap( -1 );
	m_staticText171->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer60->Add( m_staticText171, 1, wxALL|wxEXPAND, 5 );


	bSizer421->Add( bSizer60, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer63;
	bSizer63 = new wxBoxSizer( wxVERTICAL );

	ancho_v_intermedio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	ancho_v_intermedio->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer63->Add( ancho_v_intermedio, 0, wxALL, 5 );


	bSizer421->Add( bSizer63, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer64;
	bSizer64 = new wxBoxSizer( wxVERTICAL );

	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("[m]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	m_staticText24->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer64->Add( m_staticText24, 1, wxALL|wxEXPAND, 5 );


	bSizer421->Add( bSizer64, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer421, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer422;
	bSizer422 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer65;
	bSizer65 = new wxBoxSizer( wxVERTICAL );

	m_staticText172 = new wxStaticText( this, wxID_ANY, wxT("Altura (h)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText172->Wrap( -1 );
	m_staticText172->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer65->Add( m_staticText172, 1, wxALL|wxEXPAND, 5 );


	bSizer422->Add( bSizer65, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer66;
	bSizer66 = new wxBoxSizer( wxVERTICAL );

	altura_v_intermedio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	altura_v_intermedio->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer66->Add( altura_v_intermedio, 0, wxALL, 5 );


	bSizer422->Add( bSizer66, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer67;
	bSizer67 = new wxBoxSizer( wxVERTICAL );

	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("[m]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	m_staticText25->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer67->Add( m_staticText25, 1, wxALL|wxEXPAND, 5 );


	bSizer422->Add( bSizer67, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer422, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer424;
	bSizer424 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxVERTICAL );

	m_staticText174 = new wxStaticText( this, wxID_ANY, wxT("Recubrimiento (r)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText174->Wrap( -1 );
	m_staticText174->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer68->Add( m_staticText174, 1, wxALL|wxEXPAND, 5 );


	bSizer424->Add( bSizer68, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer69;
	bSizer69 = new wxBoxSizer( wxVERTICAL );

	recubrimiento_v_intermedio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	recubrimiento_v_intermedio->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer69->Add( recubrimiento_v_intermedio, 0, wxALL, 5 );


	bSizer424->Add( bSizer69, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxVERTICAL );

	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("[m]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	m_staticText29->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer70->Add( m_staticText29, 1, wxALL|wxEXPAND, 5 );


	bSizer424->Add( bSizer70, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer424, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer423;
	bSizer423 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxVERTICAL );

	m_staticText173 = new wxStaticText( this, wxID_ANY, wxT("Momento último (Mu)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText173->Wrap( -1 );
	m_staticText173->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer71->Add( m_staticText173, 1, wxALL|wxEXPAND, 5 );


	bSizer423->Add( bSizer71, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer72;
	bSizer72 = new wxBoxSizer( wxVERTICAL );

	momento_v_intermedio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	momento_v_intermedio->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer72->Add( momento_v_intermedio, 0, wxALL, 5 );


	bSizer423->Add( bSizer72, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer73;
	bSizer73 = new wxBoxSizer( wxVERTICAL );

	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("[KNm]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	m_staticText26->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer73->Add( m_staticText26, 1, wxALL|wxEXPAND, 5 );


	bSizer423->Add( bSizer73, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer423, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer4232;
	bSizer4232 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer711;
	bSizer711 = new wxBoxSizer( wxVERTICAL );

	m_staticText1732 = new wxStaticText( this, wxID_ANY, wxT("Altura efectiva (hf)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1732->Wrap( -1 );
	m_staticText1732->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer711->Add( m_staticText1732, 1, wxEXPAND, 5 );


	bSizer4232->Add( bSizer711, 1, wxALL, 5 );

	wxBoxSizer* bSizer721;
	bSizer721 = new wxBoxSizer( wxVERTICAL );

	altura_efect_v_intermedio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	altura_efect_v_intermedio->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer721->Add( altura_efect_v_intermedio, 0, wxALL, 5 );


	bSizer4232->Add( bSizer721, 0, 0, 5 );

	wxBoxSizer* bSizer731;
	bSizer731 = new wxBoxSizer( wxVERTICAL );

	m_staticText262 = new wxStaticText( this, wxID_ANY, wxT("[m]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText262->Wrap( -1 );
	m_staticText262->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer731->Add( m_staticText262, 1, wxALL|wxEXPAND, 5 );


	bSizer4232->Add( bSizer731, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer4232, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer4233;
	bSizer4233 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer712;
	bSizer712 = new wxBoxSizer( wxVERTICAL );

	m_staticText1733 = new wxStaticText( this, wxID_ANY, wxT("Distancia a viga 1 (a)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1733->Wrap( -1 );
	m_staticText1733->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer712->Add( m_staticText1733, 1, wxALL|wxEXPAND, 5 );


	bSizer4233->Add( bSizer712, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer722;
	bSizer722 = new wxBoxSizer( wxVERTICAL );

	distancia_v1_intermedio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	distancia_v1_intermedio->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer722->Add( distancia_v1_intermedio, 0, wxALL, 5 );


	bSizer4233->Add( bSizer722, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer732;
	bSizer732 = new wxBoxSizer( wxVERTICAL );

	m_staticText263 = new wxStaticText( this, wxID_ANY, wxT("[m]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText263->Wrap( -1 );
	m_staticText263->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer732->Add( m_staticText263, 1, wxALL|wxEXPAND, 5 );


	bSizer4233->Add( bSizer732, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer4233, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer42331;
	bSizer42331 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer7121;
	bSizer7121 = new wxBoxSizer( wxVERTICAL );

	m_staticText17331 = new wxStaticText( this, wxID_ANY, wxT("Distancia a viga 2 (a')"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17331->Wrap( -1 );
	m_staticText17331->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer7121->Add( m_staticText17331, 1, wxALL|wxEXPAND, 5 );


	bSizer42331->Add( bSizer7121, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer7221;
	bSizer7221 = new wxBoxSizer( wxVERTICAL );

	distancia_v2_intermedio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	distancia_v2_intermedio->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer7221->Add( distancia_v2_intermedio, 0, wxALL, 5 );


	bSizer42331->Add( bSizer7221, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer7321;
	bSizer7321 = new wxBoxSizer( wxVERTICAL );

	m_staticText2631 = new wxStaticText( this, wxID_ANY, wxT("[m]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2631->Wrap( -1 );
	m_staticText2631->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer7321->Add( m_staticText2631, 1, wxALL|wxEXPAND, 5 );


	bSizer42331->Add( bSizer7321, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer42331, 0, wxEXPAND, 5 );

	wxBoxSizer* boton_calc;
	boton_calc = new wxBoxSizer( wxVERTICAL );

	boton_calcular_v_intermedia = new wxButton( this, wxID_ANY, wxT("Calcular"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_calcular_v_intermedia->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	boton_calcular_v_intermedia->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	boton_calcular_v_intermedia->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	boton_calc->Add( boton_calcular_v_intermedia, 0, wxALL, 10 );


	contenedor_intermedia->Add( boton_calc, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer423121;
	bSizer423121 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer811;
	bSizer811 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText173121 = new wxStaticText( this, wxID_ANY, wxT("Ancho colaborante (b)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText173121->Wrap( -1 );
	m_staticText173121->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer811->Add( m_staticText173121, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer423121->Add( bSizer811, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer821;
	bSizer821 = new wxBoxSizer( wxVERTICAL );

	ver_ancho_colaborante = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	ver_ancho_colaborante->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	ver_ancho_colaborante->Enable( false );

	bSizer821->Add( ver_ancho_colaborante, 0, wxALL, 5 );


	bSizer423121->Add( bSizer821, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer831;
	bSizer831 = new wxBoxSizer( wxVERTICAL );

	m_staticText26121 = new wxStaticText( this, wxID_ANY, wxT("[m]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26121->Wrap( -1 );
	m_staticText26121->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer831->Add( m_staticText26121, 0, wxALL, 5 );


	bSizer423121->Add( bSizer831, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer423121, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer42313;
	bSizer42313 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer74;
	bSizer74 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText17313 = new wxStaticText( this, wxID_ANY, wxT("Viga rectangular de ancho b"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17313->Wrap( -1 );
	m_staticText17313->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer74->Add( m_staticText17313, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer42313->Add( bSizer74, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer84;
	bSizer84 = new wxBoxSizer( wxVERTICAL );

	ver_verificacion_b = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	ver_verificacion_b->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	ver_verificacion_b->Enable( false );

	bSizer84->Add( ver_verificacion_b, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer42313->Add( bSizer84, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer85;
	bSizer85 = new wxBoxSizer( wxVERTICAL );


	bSizer85->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer42313->Add( bSizer85, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer42313, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer4231;
	bSizer4231 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer75;
	bSizer75 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1731 = new wxStaticText( this, wxID_ANY, wxT("Momento nominal (Mn)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1731->Wrap( -1 );
	m_staticText1731->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer75->Add( m_staticText1731, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer4231->Add( bSizer75, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer76;
	bSizer76 = new wxBoxSizer( wxVERTICAL );

	ver_momento_nominal = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	ver_momento_nominal->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	ver_momento_nominal->Enable( false );

	bSizer76->Add( ver_momento_nominal, 0, wxALL, 5 );


	bSizer4231->Add( bSizer76, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer77;
	bSizer77 = new wxBoxSizer( wxVERTICAL );

	m_staticText261 = new wxStaticText( this, wxID_ANY, wxT("[KNm]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText261->Wrap( -1 );
	m_staticText261->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer77->Add( m_staticText261, 0, wxALL, 5 );


	bSizer4231->Add( bSizer77, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer4231, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer42311;
	bSizer42311 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer78;
	bSizer78 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText17311 = new wxStaticText( this, wxID_ANY, wxT("Acero necesario (As)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17311->Wrap( -1 );
	m_staticText17311->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer78->Add( m_staticText17311, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer42311->Add( bSizer78, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer79;
	bSizer79 = new wxBoxSizer( wxVERTICAL );

	ver_acero_necesario = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	ver_acero_necesario->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	ver_acero_necesario->Enable( false );

	bSizer79->Add( ver_acero_necesario, 0, wxALL, 5 );


	bSizer42311->Add( bSizer79, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer80;
	bSizer80 = new wxBoxSizer( wxVERTICAL );

	m_staticText2611 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2611->Wrap( -1 );
	m_staticText2611->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer80->Add( m_staticText2611, 0, wxALL, 5 );


	bSizer42311->Add( bSizer80, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer42311, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer42312;
	bSizer42312 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText17312 = new wxStaticText( this, wxID_ANY, wxT("Acero mínimo (Asmin)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17312->Wrap( -1 );
	m_staticText17312->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer81->Add( m_staticText17312, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer42312->Add( bSizer81, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer82;
	bSizer82 = new wxBoxSizer( wxVERTICAL );

	ver_acero_minimo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	ver_acero_minimo->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	ver_acero_minimo->Enable( false );

	bSizer82->Add( ver_acero_minimo, 0, wxALL, 5 );


	bSizer42312->Add( bSizer82, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer83;
	bSizer83 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2612 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2612->Wrap( -1 );
	m_staticText2612->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer83->Add( m_staticText2612, 0, wxALL, 5 );

	wxBoxSizer* bSizer188;
	bSizer188 = new wxBoxSizer( wxVERTICAL );

	m_staticText98 = new wxStaticText( this, wxID_ANY, wxT(" Verificacion composición \n        de barras"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText98->Wrap( -1 );
	m_staticText98->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer188->Add( m_staticText98, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer83->Add( bSizer188, 1, wxALIGN_BOTTOM, 5 );

	wxBoxSizer* bSizer189;
	bSizer189 = new wxBoxSizer( wxVERTICAL );


	bSizer83->Add( bSizer189, 1, wxEXPAND, 5 );


	bSizer42312->Add( bSizer83, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer42312, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxHORIZONTAL );

	boton_diametros_comerciales_intermedia = new wxButton( this, wxID_ANY, wxT("Diámetros comerciales"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_diametros_comerciales_intermedia->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	boton_diametros_comerciales_intermedia->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	boton_diametros_comerciales_intermedia->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer58->Add( boton_diametros_comerciales_intermedia, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 15 );

	ver_as_mayor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	ver_as_mayor->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	ver_as_mayor->Enable( false );

	bSizer58->Add( ver_as_mayor, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 15 );

	wxBoxSizer* bSizer202;
	bSizer202 = new wxBoxSizer( wxVERTICAL );

	m_staticText39 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	m_staticText39->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer202->Add( m_staticText39, 0, wxBOTTOM|wxRIGHT|wxTOP, 15 );


	bSizer58->Add( bSizer202, 0, 0, 5 );

	ver_total_as_elegido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	ver_total_as_elegido->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	ver_total_as_elegido->Enable( false );

	bSizer58->Add( ver_total_as_elegido, 0, wxALIGN_CENTER_VERTICAL|wxLEFT, 15 );


	bSizer57->Add( bSizer58, 0, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer57, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer5711;
	bSizer5711 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer5911;
	bSizer5911 = new wxBoxSizer( wxHORIZONTAL );

	boton_volver_intermedia11 = new wxButton( this, wxID_ANY, wxT("Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_volver_intermedia11->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	boton_volver_intermedia11->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	boton_volver_intermedia11->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer5911->Add( boton_volver_intermedia11, 0, wxALL, 5 );


	bSizer5711->Add( bSizer5911, 1, wxEXPAND, 5 );


	contenedor_intermedia->Add( bSizer5711, 0, wxEXPAND, 5 );


	this->SetSizer( contenedor_intermedia );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	tipos_hormigon->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( viga_intermedia::Combo_tipos_hormigon ), NULL, this );
	boton_calcular_v_intermedia->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( viga_intermedia::Click_boton_calcular_v_intermedia ), NULL, this );
	boton_diametros_comerciales_intermedia->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( viga_intermedia::Click_boton_diametros_comerciales_intermedia ), NULL, this );
	boton_volver_intermedia11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( viga_intermedia::Click_boton_volver_intermedia ), NULL, this );
}

viga_intermedia::~viga_intermedia()
{
	// Disconnect Events
	tipos_hormigon->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( viga_intermedia::Combo_tipos_hormigon ), NULL, this );
	boton_calcular_v_intermedia->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( viga_intermedia::Click_boton_calcular_v_intermedia ), NULL, this );
	boton_diametros_comerciales_intermedia->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( viga_intermedia::Click_boton_diametros_comerciales_intermedia ), NULL, this );
	boton_volver_intermedia11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( viga_intermedia::Click_boton_volver_intermedia ), NULL, this );

}

calculadora_as_inter::calculadora_as_inter( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 614,393 ), wxSize( 614,393 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Acero necesario Viga T (As)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	m_staticText9->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer9->Add( m_staticText9, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	m_staticText109 = new wxStaticText( this, wxID_ANY, wxT("Acero necesario Viga L (As)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText109->Wrap( -1 );
	m_staticText109->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer9->Add( m_staticText109, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer8->Add( bSizer9, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxVERTICAL );

	diametro_10 = new wxTextCtrl( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	diametro_10->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer47->Add( diametro_10, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer91->Add( bSizer47, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxVERTICAL );

	m_staticText101 = new wxStaticText( this, wxID_ANY, wxT("Ø 10"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText101->Wrap( -1 );
	m_staticText101->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer49->Add( m_staticText101, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer91->Add( bSizer49, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxVERTICAL );

	resultado_total_diam_10 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	resultado_total_diam_10->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	resultado_total_diam_10->Enable( false );

	bSizer50->Add( resultado_total_diam_10, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer91->Add( bSizer50, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxVERTICAL );

	m_staticText141 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText141->Wrap( -1 );
	m_staticText141->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer51->Add( m_staticText141, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer91->Add( bSizer51, 1, wxEXPAND, 5 );


	bSizer8->Add( bSizer91, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer911;
	bSizer911 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer471;
	bSizer471 = new wxBoxSizer( wxVERTICAL );

	diametro_12 = new wxTextCtrl( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	diametro_12->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer471->Add( diametro_12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer911->Add( bSizer471, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer491;
	bSizer491 = new wxBoxSizer( wxVERTICAL );

	m_staticText1011 = new wxStaticText( this, wxID_ANY, wxT("Ø 12"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1011->Wrap( -1 );
	m_staticText1011->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer491->Add( m_staticText1011, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer911->Add( bSizer491, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer501;
	bSizer501 = new wxBoxSizer( wxVERTICAL );

	resultado_total_diam_12 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	resultado_total_diam_12->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	resultado_total_diam_12->Enable( false );

	bSizer501->Add( resultado_total_diam_12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer911->Add( bSizer501, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer511;
	bSizer511 = new wxBoxSizer( wxVERTICAL );

	m_staticText1411 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1411->Wrap( -1 );
	m_staticText1411->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer511->Add( m_staticText1411, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer911->Add( bSizer511, 1, wxEXPAND, 5 );


	bSizer8->Add( bSizer911, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer912;
	bSizer912 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer472;
	bSizer472 = new wxBoxSizer( wxVERTICAL );

	diametro_16 = new wxTextCtrl( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	diametro_16->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer472->Add( diametro_16, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer912->Add( bSizer472, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer492;
	bSizer492 = new wxBoxSizer( wxVERTICAL );

	m_staticText1012 = new wxStaticText( this, wxID_ANY, wxT("Ø 16"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1012->Wrap( -1 );
	m_staticText1012->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer492->Add( m_staticText1012, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer912->Add( bSizer492, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer502;
	bSizer502 = new wxBoxSizer( wxVERTICAL );

	resultado_total_diam_16 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	resultado_total_diam_16->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	resultado_total_diam_16->Enable( false );

	bSizer502->Add( resultado_total_diam_16, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer912->Add( bSizer502, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer512;
	bSizer512 = new wxBoxSizer( wxVERTICAL );

	m_staticText1412 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1412->Wrap( -1 );
	m_staticText1412->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer512->Add( m_staticText1412, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer912->Add( bSizer512, 1, wxEXPAND, 5 );


	bSizer8->Add( bSizer912, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer913;
	bSizer913 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer473;
	bSizer473 = new wxBoxSizer( wxVERTICAL );

	diametro_20 = new wxTextCtrl( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	diametro_20->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	diametro_20->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	bSizer473->Add( diametro_20, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer913->Add( bSizer473, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer493;
	bSizer493 = new wxBoxSizer( wxVERTICAL );

	m_staticText1013 = new wxStaticText( this, wxID_ANY, wxT("Ø 20"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1013->Wrap( -1 );
	m_staticText1013->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer493->Add( m_staticText1013, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer913->Add( bSizer493, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer503;
	bSizer503 = new wxBoxSizer( wxVERTICAL );

	resultado_total_diam_20 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	resultado_total_diam_20->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	resultado_total_diam_20->Enable( false );

	bSizer503->Add( resultado_total_diam_20, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer913->Add( bSizer503, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer513;
	bSizer513 = new wxBoxSizer( wxVERTICAL );

	m_staticText1413 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1413->Wrap( -1 );
	m_staticText1413->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer513->Add( m_staticText1413, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer913->Add( bSizer513, 1, wxEXPAND, 5 );


	bSizer8->Add( bSizer913, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer914;
	bSizer914 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer474;
	bSizer474 = new wxBoxSizer( wxVERTICAL );

	boton_calcular_as = new wxButton( this, wxID_ANY, wxT("Calcular"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_calcular_as->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	boton_calcular_as->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	boton_calcular_as->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer474->Add( boton_calcular_as, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer914->Add( bSizer474, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer494;
	bSizer494 = new wxBoxSizer( wxVERTICAL );

	m_staticText1014 = new wxStaticText( this, wxID_ANY, wxT("Total"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1014->Wrap( -1 );
	m_staticText1014->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer494->Add( m_staticText1014, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer914->Add( bSizer494, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer504;
	bSizer504 = new wxBoxSizer( wxVERTICAL );

	resultado_total_diam = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	resultado_total_diam->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	resultado_total_diam->Enable( false );

	bSizer504->Add( resultado_total_diam, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer914->Add( bSizer504, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer514;
	bSizer514 = new wxBoxSizer( wxVERTICAL );

	m_staticText1414 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1414->Wrap( -1 );
	m_staticText1414->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer514->Add( m_staticText1414, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer914->Add( bSizer514, 1, wxEXPAND, 5 );


	bSizer8->Add( bSizer914, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer8 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	boton_calcular_as->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_as_inter::Click_boton_calcular_as ), NULL, this );
}

calculadora_as_inter::~calculadora_as_inter()
{
	// Disconnect Events
	boton_calcular_as->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_as_inter::Click_boton_calcular_as ), NULL, this );

}

historial::historial( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer157;
	bSizer157 = new wxBoxSizer( wxVERTICAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Historial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer157->Add( m_staticText7, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer222;
	bSizer222 = new wxBoxSizer( wxHORIZONTAL );

	filtrar_tipo_hormigon = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 90,-1 ), 0, NULL, 0 );
	filtrar_tipo_hormigon->Append( wxEmptyString );
	filtrar_tipo_hormigon->Append( wxT("H-20") );
	filtrar_tipo_hormigon->Append( wxT("H-25") );
	filtrar_tipo_hormigon->Append( wxT("H-30") );
	filtrar_tipo_hormigon->SetSelection( 0 );
	filtrar_tipo_hormigon->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer222->Add( filtrar_tipo_hormigon, 0, wxALL, 5 );

	filtrar_tipo_viga = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 90,-1 ), 0, NULL, 0 );
	filtrar_tipo_viga->Append( wxEmptyString );
	filtrar_tipo_viga->Append( wxT("T") );
	filtrar_tipo_viga->Append( wxT("L") );
	filtrar_tipo_viga->SetSelection( 0 );
	filtrar_tipo_viga->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer222->Add( filtrar_tipo_viga, 0, wxALL, 5 );

	boton_filtrar = new wxButton( this, wxID_ANY, wxT("Filtrar"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_filtrar->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	boton_filtrar->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	boton_filtrar->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer222->Add( boton_filtrar, 0, wxALL, 5 );


	bSizer157->Add( bSizer222, 0, 0, 5 );

	grilla_historial = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxSize( -1,225 ), 0 );

	// Grid
	grilla_historial->CreateGrid( 0, 15 );
	grilla_historial->EnableEditing( false );
	grilla_historial->EnableGridLines( true );
	grilla_historial->EnableDragGridSize( false );
	grilla_historial->SetMargins( 0, 0 );

	// Columns
	grilla_historial->EnableDragColMove( false );
	grilla_historial->EnableDragColSize( true );
	grilla_historial->SetColLabelValue( 0, wxT("Tipo H") );
	grilla_historial->SetColLabelValue( 1, wxT("Viga") );
	grilla_historial->SetColLabelValue( 2, wxT("L") );
	grilla_historial->SetColLabelValue( 3, wxT("Bw") );
	grilla_historial->SetColLabelValue( 4, wxT("h") );
	grilla_historial->SetColLabelValue( 5, wxT("r") );
	grilla_historial->SetColLabelValue( 6, wxT("Mu") );
	grilla_historial->SetColLabelValue( 7, wxT("hf") );
	grilla_historial->SetColLabelValue( 8, wxT("a") );
	grilla_historial->SetColLabelValue( 9, wxT("a'") );
	grilla_historial->SetColLabelValue( 10, wxT("b") );
	grilla_historial->SetColLabelValue( 11, wxT("Verif. b") );
	grilla_historial->SetColLabelValue( 12, wxT("Mn") );
	grilla_historial->SetColLabelValue( 13, wxT("As") );
	grilla_historial->SetColLabelValue( 14, wxT("As min") );
	grilla_historial->SetColLabelValue( 15, wxEmptyString );
	grilla_historial->SetColLabelSize( 30 );
	grilla_historial->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	grilla_historial->AutoSizeRows();
	grilla_historial->EnableDragRowSize( false );
	grilla_historial->SetRowLabelSize( 60 );
	grilla_historial->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance
	grilla_historial->SetLabelBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );
	grilla_historial->SetLabelFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	// Cell Defaults
	grilla_historial->SetDefaultCellBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	grilla_historial->SetDefaultCellTextColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	grilla_historial->SetDefaultCellFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	grilla_historial->SetDefaultCellAlignment( wxALIGN_CENTER, wxALIGN_CENTER );
	grilla_historial->SetMinSize( wxSize( -1,225 ) );

	bSizer157->Add( grilla_historial, 0, wxALL, 15 );


	bSizer6->Add( bSizer157, 1, 0, 5 );

	wxBoxSizer* bSizer158;
	bSizer158 = new wxBoxSizer( wxHORIZONTAL );

	boton_cerrar_historial = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_cerrar_historial->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	boton_cerrar_historial->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	boton_cerrar_historial->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer158->Add( boton_cerrar_historial, 0, wxALL, 5 );

	wxBoxSizer* bSizer125;
	bSizer125 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer219;
	bSizer219 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer220;
	bSizer220 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer221;
	bSizer221 = new wxBoxSizer( wxHORIZONTAL );

	boton_actualizar = new wxButton( this, wxID_ANY, wxT("Actualizar"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_actualizar->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	boton_actualizar->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	boton_actualizar->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer221->Add( boton_actualizar, 0, wxALL, 5 );

	boton_borrar = new wxButton( this, wxID_ANY, wxT("Borrar Historial"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_borrar->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	boton_borrar->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INFOTEXT ) );
	boton_borrar->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer221->Add( boton_borrar, 0, wxALL, 5 );

	boton_borrar_fila = new wxButton( this, wxID_ANY, wxT("Borrar fila"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_borrar_fila->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	boton_borrar_fila->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	boton_borrar_fila->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer221->Add( boton_borrar_fila, 0, wxALL, 5 );

	Reutilizar_datos = new wxButton( this, wxID_ANY, wxT("Reutilizar Datos"), wxDefaultPosition, wxDefaultSize, 0 );
	Reutilizar_datos->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	Reutilizar_datos->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	Reutilizar_datos->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer221->Add( Reutilizar_datos, 0, wxALL, 5 );


	bSizer220->Add( bSizer221, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer219->Add( bSizer220, 1, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer125->Add( bSizer219, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer218;
	bSizer218 = new wxBoxSizer( wxHORIZONTAL );

	m_dirPicker1 = new wxDirPickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Seleccione destino para exportar el archivo de texto"), wxDefaultPosition, wxDefaultSize, wxDIRP_SMALL );
	m_dirPicker1->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer218->Add( m_dirPicker1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	boton_exportar_historial = new wxButton( this, wxID_ANY, wxT("Exportar a .txt"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_exportar_historial->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	boton_exportar_historial->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer218->Add( boton_exportar_historial, 0, wxALL, 5 );


	bSizer125->Add( bSizer218, 0, 0, 5 );


	bSizer158->Add( bSizer125, 1, 0, 5 );


	bSizer6->Add( bSizer158, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer6 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	filtrar_tipo_hormigon->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( historial::Combo_filtrar_tipo_hormigon ), NULL, this );
	filtrar_tipo_viga->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( historial::Combo_filtrar_tipo_viga ), NULL, this );
	boton_filtrar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_filtrar ), NULL, this );
	boton_cerrar_historial->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_cerrar_historial ), NULL, this );
	boton_actualizar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_actualizar ), NULL, this );
	boton_borrar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_borrar ), NULL, this );
	boton_borrar_fila->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_borrar_fila ), NULL, this );
	Reutilizar_datos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_reutilizar_datos ), NULL, this );
	m_dirPicker1->Connect( wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler( historial::boton_seleccion_exportacion ), NULL, this );
	boton_exportar_historial->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_exportar_historial ), NULL, this );
}

historial::~historial()
{
	// Disconnect Events
	filtrar_tipo_hormigon->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( historial::Combo_filtrar_tipo_hormigon ), NULL, this );
	filtrar_tipo_viga->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( historial::Combo_filtrar_tipo_viga ), NULL, this );
	boton_filtrar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_filtrar ), NULL, this );
	boton_cerrar_historial->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_cerrar_historial ), NULL, this );
	boton_actualizar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_actualizar ), NULL, this );
	boton_borrar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_borrar ), NULL, this );
	boton_borrar_fila->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_borrar_fila ), NULL, this );
	Reutilizar_datos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_reutilizar_datos ), NULL, this );
	m_dirPicker1->Disconnect( wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler( historial::boton_seleccion_exportacion ), NULL, this );
	boton_exportar_historial->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_exportar_historial ), NULL, this );

}

acerca_de1::acerca_de1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 780,450 ), wxSize( 780,450 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer123;
	bSizer123 = new wxBoxSizer( wxVERTICAL );

	acerca_de = new wxStaticText( this, wxID_ANY, wxT("Información sobre el proyecto"), wxDefaultPosition, wxDefaultSize, 0 );
	acerca_de->Wrap( -1 );
	acerca_de->SetFont( wxFont( 20, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer123->Add( acerca_de, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer245;
	bSizer245 = new wxBoxSizer( wxVERTICAL );

	m_staticText110 = new wxStaticText( this, wxID_ANY, wxT("Nuestro proyecto universitario surgió de la necesidad detectada por uno de los integrantes, un técnico constructor,"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText110->Wrap( -1 );
	m_staticText110->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer245->Add( m_staticText110, 0, wxALL, 5 );

	m_staticText134 = new wxStaticText( this, wxID_ANY, wxT("quien experimentó la complejidad de calcular vigas de hormigón manualmente para su trabajo final. En colaboración"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134->Wrap( -1 );
	m_staticText134->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer245->Add( m_staticText134, 0, wxALL, 5 );

	m_staticText135 = new wxStaticText( this, wxID_ANY, wxT("con dos compañeros, desarrollamos una calculadora de armadura para vigas de hormigón armado en C++, con el "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText135->Wrap( -1 );
	m_staticText135->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer245->Add( m_staticText135, 0, wxALL, 5 );

	m_staticText136 = new wxStaticText( this, wxID_ANY, wxT("propósito de simplificar este proceso. Reconocemos la falta de herramientas en español que faciliten estos cálculos,"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText136->Wrap( -1 );
	m_staticText136->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer245->Add( m_staticText136, 0, wxALL, 5 );

	m_staticText137 = new wxStaticText( this, wxID_ANY, wxT("por lo que creamos una solución accesible y precisa. Nuestra meta es ofrecer una herramienta útil para estudiantes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText137->Wrap( -1 );
	m_staticText137->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer245->Add( m_staticText137, 0, wxALL, 5 );

	m_staticText138 = new wxStaticText( this, wxID_ANY, wxT("y profesionales de la construcción, con una interfaz amigable que agilice el diseño de vigas de hormigón. Buscamos"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText138->Wrap( -1 );
	m_staticText138->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer245->Add( m_staticText138, 0, wxALL, 5 );

	m_staticText139 = new wxStaticText( this, wxID_ANY, wxT("que nuestro proyecto sea un recurso valioso que contribuya la aprendizaje en ingeniería estructural. Cabe destacar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText139->Wrap( -1 );
	m_staticText139->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer245->Add( m_staticText139, 0, wxALL, 5 );

	m_staticText140 = new wxStaticText( this, wxID_ANY, wxT("que algunos software extranjeros pueden mostrar resultados que invierten la representación de flexión y compresión"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText140->Wrap( -1 );
	m_staticText140->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer245->Add( m_staticText140, 0, wxALL, 5 );

	m_staticText141 = new wxStaticText( this, wxID_ANY, wxT("en vigas de hormigón, debido a convenciones diferentes en la representación de fuerzas internas."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText141->Wrap( -1 );
	m_staticText141->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer245->Add( m_staticText141, 0, wxALL, 5 );


	bSizer123->Add( bSizer245, 1, wxEXPAND, 5 );


	bSizer7->Add( bSizer123, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer124;
	bSizer124 = new wxBoxSizer( wxHORIZONTAL );

	boton_volver_acerca_de = new wxButton( this, wxID_ANY, wxT("Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_volver_acerca_de->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	boton_volver_acerca_de->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	boton_volver_acerca_de->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer124->Add( boton_volver_acerca_de, 0, wxALIGN_BOTTOM|wxALL, 5 );

	wxBoxSizer* bSizer249;
	bSizer249 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer248;
	bSizer248 = new wxBoxSizer( wxVERTICAL );

	m_staticText1421 = new wxStaticText( this, wxID_ANY, wxT("Técnico Mecánico: Del Carlo, Federico."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1421->Wrap( -1 );
	m_staticText1421->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer248->Add( m_staticText1421, 0, wxALL, 5 );

	m_staticText14211 = new wxStaticText( this, wxID_ANY, wxT("Técnico Informático: Bracamonte, Marcos."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14211->Wrap( -1 );
	m_staticText14211->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer248->Add( m_staticText14211, 0, wxALL, 5 );

	m_staticText14212 = new wxStaticText( this, wxID_ANY, wxT("Técnico Constructor: Larguía, Kevin."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14212->Wrap( -1 );
	m_staticText14212->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer248->Add( m_staticText14212, 0, wxALL, 5 );


	bSizer249->Add( bSizer248, 0, wxALIGN_RIGHT, 5 );


	bSizer124->Add( bSizer249, 1, wxEXPAND, 5 );


	bSizer7->Add( bSizer124, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer7 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	boton_volver_acerca_de->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( acerca_de1::Click_boton_volver_acerca_de ), NULL, this );
}

acerca_de1::~acerca_de1()
{
	// Disconnect Events
	boton_volver_acerca_de->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( acerca_de1::Click_boton_volver_acerca_de ), NULL, this );

}

referencias::referencias( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 972,680 ), wxSize( 972,680 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	wxBoxSizer* bSizer170;
	bSizer170 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer126;
	bSizer126 = new wxBoxSizer( wxHORIZONTAL );

	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("resources/img1_referencias.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer126->Add( m_bitmap2, 0, wxALL, 5 );

	wxBoxSizer* bSizer214;
	bSizer214 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer216;
	bSizer216 = new wxBoxSizer( wxVERTICAL );


	bSizer216->Add( 0, 0, 0, 0, 5 );

	m_staticText133 = new wxStaticText( this, wxID_ANY, wxT("Referencias:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText133->Wrap( -1 );
	m_staticText133->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer216->Add( m_staticText133, 0, wxTOP|wxBOTTOM|wxRIGHT, 20 );


	bSizer214->Add( bSizer216, 1, 0, 5 );

	wxBoxSizer* bSizer215;
	bSizer215 = new wxBoxSizer( wxVERTICAL );

	m_staticText93 = new wxStaticText( this, wxID_ANY, wxT("✤ Largo (L): Luz de la viga entre apoyos."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText93->Wrap( -1 );
	m_staticText93->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer215->Add( m_staticText93, 0, wxALL, 5 );


	bSizer214->Add( bSizer215, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2151;
	bSizer2151 = new wxBoxSizer( wxVERTICAL );

	m_staticText931 = new wxStaticText( this, wxID_ANY, wxT("✤ Altura (h): Resultado del alto de la viga rectangular sumado al hf."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText931->Wrap( -1 );
	m_staticText931->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer2151->Add( m_staticText931, 0, wxALL, 5 );


	bSizer214->Add( bSizer2151, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2152;
	bSizer2152 = new wxBoxSizer( wxVERTICAL );

	m_staticText932 = new wxStaticText( this, wxID_ANY, wxT("✤ Altura efectiva (hf): Altura de la losa superior."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText932->Wrap( -1 );
	m_staticText932->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer2152->Add( m_staticText932, 0, wxALL, 5 );


	bSizer214->Add( bSizer2152, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2153;
	bSizer2153 = new wxBoxSizer( wxVERTICAL );

	m_staticText933 = new wxStaticText( this, wxID_ANY, wxT("✤ Altura flexión (c): Sección donde hay fuerza interna flexionante."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText933->Wrap( -1 );
	m_staticText933->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer2153->Add( m_staticText933, 0, wxALL, 5 );


	bSizer214->Add( bSizer2153, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2154;
	bSizer2154 = new wxBoxSizer( wxVERTICAL );

	m_staticText934 = new wxStaticText( this, wxID_ANY, wxT("✤ Ancho (bw): Ancho de la viga."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText934->Wrap( -1 );
	m_staticText934->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer2154->Add( m_staticText934, 0, wxALL, 5 );


	bSizer214->Add( bSizer2154, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2155;
	bSizer2155 = new wxBoxSizer( wxVERTICAL );

	m_staticText935 = new wxStaticText( this, wxID_ANY, wxT("✤ Ancho (a): Distancia entre vigas."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText935->Wrap( -1 );
	m_staticText935->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer2155->Add( m_staticText935, 0, wxALL, 5 );


	bSizer214->Add( bSizer2155, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2156;
	bSizer2156 = new wxBoxSizer( wxVERTICAL );

	m_staticText936 = new wxStaticText( this, wxID_ANY, wxT("✤ Recubrimiento (r): Distancia de las armaduras a los extremos de la viga."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText936->Wrap( -1 );
	m_staticText936->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer2156->Add( m_staticText936, 0, wxALL, 5 );


	bSizer214->Add( bSizer2156, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2157;
	bSizer2157 = new wxBoxSizer( wxVERTICAL );

	m_staticText937 = new wxStaticText( this, wxID_ANY, wxT("✤ Momento último (Mu): Esfuerzo último sobre la normal de la viga."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText937->Wrap( -1 );
	m_staticText937->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer2157->Add( m_staticText937, 0, wxALL, 5 );


	bSizer214->Add( bSizer2157, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2158;
	bSizer2158 = new wxBoxSizer( wxVERTICAL );

	m_staticText938 = new wxStaticText( this, wxID_ANY, wxT("✤ Momento nominal (Mn): Momento último dividido por un coeficiente de seguridad."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText938->Wrap( -1 );
	m_staticText938->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer2158->Add( m_staticText938, 0, wxALL, 5 );


	bSizer214->Add( bSizer2158, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2159;
	bSizer2159 = new wxBoxSizer( wxVERTICAL );

	m_staticText939 = new wxStaticText( this, wxID_ANY, wxT("✤ (Ke), (Kd), (Kc): Coeficientes de efectividad de armaduras de refuerzo."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText939->Wrap( -1 );
	m_staticText939->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer2159->Add( m_staticText939, 0, wxALL, 5 );


	bSizer214->Add( bSizer2159, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer21510;
	bSizer21510 = new wxBoxSizer( wxVERTICAL );

	m_staticText9310 = new wxStaticText( this, wxID_ANY, wxT("✤ Área steel (As): Área de acero necesario para la viga."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9310->Wrap( -1 );
	m_staticText9310->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer21510->Add( m_staticText9310, 0, wxALL, 5 );


	bSizer214->Add( bSizer21510, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer215101;
	bSizer215101 = new wxBoxSizer( wxVERTICAL );

	m_staticText93101 = new wxStaticText( this, wxID_ANY, wxT("✤ Área steel mínimo (Asmin):  Área mínima para soportar esfuerzos de flexión o cortante."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText93101->Wrap( -1 );
	m_staticText93101->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer215101->Add( m_staticText93101, 0, wxALL, 5 );


	bSizer214->Add( bSizer215101, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer215102;
	bSizer215102 = new wxBoxSizer( wxVERTICAL );

	m_staticText93102 = new wxStaticText( this, wxID_ANY, wxT("✤ Diámetros comerciales: Secciones de las barras de acero que se consiguen en el mercado."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText93102->Wrap( -1 );
	m_staticText93102->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer215102->Add( m_staticText93102, 0, wxALL, 5 );


	bSizer214->Add( bSizer215102, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer215103;
	bSizer215103 = new wxBoxSizer( wxVERTICAL );

	m_staticText93103 = new wxStaticText( this, wxID_ANY, wxT("✤ (H-20), (H-25), (H-30): Resistencias nominales a la compresión del hormigón."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText93103->Wrap( -1 );
	m_staticText93103->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );

	bSizer215103->Add( m_staticText93103, 0, wxALL, 5 );


	bSizer214->Add( bSizer215103, 1, wxEXPAND, 5 );


	bSizer126->Add( bSizer214, 1, wxEXPAND, 5 );


	bSizer170->Add( bSizer126, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer127;
	bSizer127 = new wxBoxSizer( wxVERTICAL );

	boton_cerrar_referencias = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	boton_cerrar_referencias->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("ISOCPEUR") ) );
	boton_cerrar_referencias->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	boton_cerrar_referencias->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_SCROLLBAR ) );

	bSizer127->Add( boton_cerrar_referencias, 0, wxALL, 5 );


	bSizer170->Add( bSizer127, 0, 0, 5 );


	this->SetSizer( bSizer170 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	boton_cerrar_referencias->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( referencias::Click_boton_cerrar_referencias ), NULL, this );
}

referencias::~referencias()
{
	// Disconnect Events
	boton_cerrar_referencias->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( referencias::Click_boton_cerrar_referencias ), NULL, this );

}
