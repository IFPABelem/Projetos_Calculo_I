/***************************************************************
 * Name:      Projeto_Calculo_IApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Ewerton, Giovani, Leandro, Maurício, Thiago, Tiago ()
 * Created:   2019-03-16
 * Copyright: Ewerton, Giovani, Leandro, Maurício, Thiago, Tiago ()
 * License:
 **************************************************************/

#include "Projeto_Calculo_IApp.h"

//(*AppHeaders
#include "Projeto_Calculo_IMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Projeto_Calculo_IApp);

bool Projeto_Calculo_IApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Projeto_Calculo_IFrame* Frame = new Projeto_Calculo_IFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
