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
#include <wx/panel.h>
#include <wx/radiobox.h>
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
        void OnClose1(wxCloseEvent& event);
        //*)

        //(*Identifiers(Projeto_Calculo_IFrame)
        static const long ID_STATICBOX2;
        static const long ID_STATICBOX3;
        static const long ID_STATICBOX1;
        static const long ID_SPINCTRL1;
        static const long ID_SPINCTRL2;
        static const long ID_SPINCTRL3;
        static const long ID_SPINCTRL5;
        static const long ID_SPINCTRL6;
        static const long ID_SPINCTRL7;
        static const long ID_SPINCTRL9;
        static const long ID_SPINCTRL10;
        static const long ID_SPINCTRL11;
        static const long ID_CHOICE1;
        static const long ID_SPINCTRL4;
        static const long ID_SPINCTRL8;
        static const long ID_SPINCTRL12;
        static const long ID_SPINCTRL15;
        static const long ID_SPINCTRL14;
        static const long ID_SPINCTRL13;
        static const long ID_SPINCTRL16;
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_RADIOBOX1;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT8;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_PANEL1;
        static const long ID_SPINCTRL32;
        static const long ID_SPINCTRL31;
        static const long ID_SPINCTRL30;
        static const long ID_SPINCTRL29;
        static const long ID_SPINCTRL28;
        static const long ID_SPINCTRL27;
        static const long ID_SPINCTRL26;
        static const long ID_SPINCTRL25;
        static const long ID_SPINCTRL24;
        static const long ID_SPINCTRL23;
        static const long ID_SPINCTRL22;
        static const long ID_SPINCTRL21;
        static const long ID_SPINCTRL20;
        static const long ID_SPINCTRL19;
        static const long ID_SPINCTRL18;
        static const long ID_SPINCTRL17;
        //*)

        //(*Declarations(Projeto_Calculo_IFrame)
        wxButton* Button1;
        wxChoice* Choice1;
        wxPanel* Panel1;
        wxRadioBox* RadioBox1;
        wxSpinCtrl* SpinCtrl10;
        wxSpinCtrl* SpinCtrl11;
        wxSpinCtrl* SpinCtrl12;
        wxSpinCtrl* SpinCtrl13;
        wxSpinCtrl* SpinCtrl14;
        wxSpinCtrl* SpinCtrl15;
        wxSpinCtrl* SpinCtrl16;
        wxSpinCtrl* SpinCtrl17;
        wxSpinCtrl* SpinCtrl18;
        wxSpinCtrl* SpinCtrl19;
        wxSpinCtrl* SpinCtrl1;
        wxSpinCtrl* SpinCtrl20;
        wxSpinCtrl* SpinCtrl21;
        wxSpinCtrl* SpinCtrl22;
        wxSpinCtrl* SpinCtrl23;
        wxSpinCtrl* SpinCtrl24;
        wxSpinCtrl* SpinCtrl25;
        wxSpinCtrl* SpinCtrl26;
        wxSpinCtrl* SpinCtrl27;
        wxSpinCtrl* SpinCtrl28;
        wxSpinCtrl* SpinCtrl29;
        wxSpinCtrl* SpinCtrl2;
        wxSpinCtrl* SpinCtrl30;
        wxSpinCtrl* SpinCtrl31;
        wxSpinCtrl* SpinCtrl32;
        wxSpinCtrl* SpinCtrl3;
        wxSpinCtrl* SpinCtrl4;
        wxSpinCtrl* SpinCtrl5;
        wxSpinCtrl* SpinCtrl6;
        wxSpinCtrl* SpinCtrl7;
        wxSpinCtrl* SpinCtrl8;
        wxSpinCtrl* SpinCtrl9;
        wxStaticBox* StaticBox1;
        wxStaticBox* StaticBox2;
        wxStaticBox* StaticBox3;
        wxStaticText* StaticText4;
        wxStaticText* txtDeterminante;
        wxStaticText* txtDiagonal;
        wxStaticText* txtIdentidade;
        wxStaticText* txtIgualdade;
        wxStaticText* txtNula;
        wxStaticText* txtResultado;
        wxStaticText* txtSimetrica;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // PROJETO_CALCULO_IMAIN_H
