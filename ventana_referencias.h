#ifndef VENTANA_REFERENCIAS_H
#define VENTANA_REFERENCIAS_H
#include "wxfb_project.h"

class ventana_referencias : public referencias {
	
private:
	
protected:
	void Click_boton_cerrar_referencias( wxCommandEvent& event )  override;
	
public:
	ventana_referencias(wxWindow *parent=NULL);
	~ventana_referencias();
};

#endif

