/***************************************************************
 * Name:      Projeto_Calculo_IMain.h
 * Purpose:   Defines Application Frame
 * Author:    Ewerton, Giovani, Leandro, Maurício, Thiago, Tiago ()
 * Created:   2019-03-16
 * Copyright: Ewerton, Giovani, Leandro, Maurício, Thiago, Tiago ()
 * License:
 **************************************************************/

#ifndef PROJETO_CALCULO_IMAIN_H
#define PROJETO_CALCULO_IMAIN_H

//(*Headers(Projeto_Calculo_IFrame)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/frame.h>
#include <wx/spinctrl.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
//*)

class Projeto_Calculo_IFrame: public wxFrame
{
    public:

        Projeto_Calculo_IFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Projeto_Calculo_IFrame();

    private:

        //(*Handlers(Projeto_Calculo_IFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnChoice1Select(wxCommandEvent& event);
        void OnSpinCtrl13Change(wxSpinEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(Projeto_Calculo_IFrame)
        static const long ID_STATICBOX1;
        static const long ID_STATICBOX2;
        static const long ID_SPINCTRL1;
        static const long ID_SPINCTRL2;
        static const long ID_SPINCTRL3;
        static const long ID_SPINCTRL4;
        static const long ID_SPINCTRL5;
        static const long ID_SPINCTRL6;
        static const long ID_SPINCTRL7;
        static const long ID_SPINCTRL8;
        static const long ID_SPINCTRL9;
        static const long ID_CHOICE1;
        static const long ID_SPINCTRL10;
        static const long ID_SPINCTRL11;
        static const long ID_SPINCTRL12;
        static const long ID_SPINCTRL14;
        static const long ID_SPINCTRL15;
        static const long ID_SPINCTRL16;
        static const long ID_SPINCTRL13;
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        //*)

        //(*Declarations(Projeto_Calculo_IFrame)
        wxButton* Button1;
        wxChoice* Choice1;
        wxSpinCtrl* SpinCtrl10;
        wxSpinCtrl* SpinCtrl11;
        wxSpinCtrl* SpinCtrl12;
        wxSpinCtrl* SpinCtrl13;
        wxSpinCtrl* SpinCtrl14;
        wxSpinCtrl* SpinCtrl15;
        wxSpinCtrl* SpinCtrl16;
        wxSpinCtrl* SpinCtrl1;
        wxSpinCtrl* SpinCtrl2;
        wxSpinCtrl* SpinCtrl3;
        wxSpinCtrl* SpinCtrl4;
        wxSpinCtrl* SpinCtrl5;
        wxSpinCtrl* SpinCtrl6;
        wxSpinCtrl* SpinCtrl7;
        wxSpinCtrl* SpinCtrl8;
        wxSpinCtrl* SpinCtrl9;
        wxStaticBox* StaticBox1;
        wxStaticBox* StaticBox2;
        wxStaticText* txtInversa;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PROJETO_CALCULO_IMAIN_H
