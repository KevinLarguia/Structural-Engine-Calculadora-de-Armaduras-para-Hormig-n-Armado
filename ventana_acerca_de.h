#ifndef VENTANA_ACERCA_DE_H
#define VENTANA_ACERCA_DE_H
#include "wxfb_project.h"

class ventana_acerca_de : public acerca_de1 {
	
private:
	
protected:
	void Click_boton_volver_acerca_de( wxCommandEvent& event )  override;
	
public:
	ventana_acerca_de(wxWindow *parent=NULL);
	~ventana_acerca_de();
};

#endif

