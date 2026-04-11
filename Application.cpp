#include <wx/image.h>
#include "Application.h"
//Incluidos personales
#include "ventana_principal.h"

IMPLEMENT_APP(Application)
	
	bool Application::OnInit() {
	wxInitAllImageHandlers();
	ventana_principal *calcu = new ventana_principal(NULL);
	calcu->Show();
	return true;
}

