/***************************************************************
 * Name:      Projeto_Calculo_IMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Ewerton, Giovani, Leandro, Maurício, Thiago, Tiago ()
 * Created:   2019-03-16
 * Copyright: Ewerton, Giovani, Leandro, Maurício, Thiago, Tiago ()
 * License:
 **************************************************************/

#include "Projeto_Calculo_IMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Projeto_Calculo_IFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Projeto_Calculo_IFrame)
const long Projeto_Calculo_IFrame::ID_STATICBOX1 = wxNewId();
const long Projeto_Calculo_IFrame::ID_STATICBOX2 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL1 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL2 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL3 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL4 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL5 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL6 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL7 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL8 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL9 = wxNewId();
const long Projeto_Calculo_IFrame::ID_CHOICE1 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL10 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL11 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL12 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL14 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL15 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL16 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL13 = wxNewId();
const long Projeto_Calculo_IFrame::ID_STATICTEXT1 = wxNewId();
const long Projeto_Calculo_IFrame::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Projeto_Calculo_IFrame,wxFrame)
    //(*EventTable(Projeto_Calculo_IFrame)
    //*)
END_EVENT_TABLE()

Projeto_Calculo_IFrame::Projeto_Calculo_IFrame(wxWindow* parent,wxWindowID id)
{

    //(*Initialize(Projeto_Calculo_IFrame)
    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(430,256));
    StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Insira os valores da matriz"), wxPoint(8,0), wxSize(168,145), 0, _T("ID_STATICBOX1"));
    StaticBox2 = new wxStaticBox(this, ID_STATICBOX2, _("Inversa da Matriz"), wxPoint(248,0), wxSize(168,145), 0, _T("ID_STATICBOX2"));
    SpinCtrl1 = new wxSpinCtrl(this, ID_SPINCTRL1, _T("0"), wxPoint(16,16), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL1"));
    SpinCtrl1->SetValue(_T("0"));
    SpinCtrl2 = new wxSpinCtrl(this, ID_SPINCTRL2, _T("0"), wxPoint(56,16), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL2"));
    SpinCtrl2->SetValue(_T("0"));
    SpinCtrl3 = new wxSpinCtrl(this, ID_SPINCTRL3, _T("0"), wxPoint(96,16), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL3"));
    SpinCtrl3->SetValue(_T("0"));
    SpinCtrl4 = new wxSpinCtrl(this, ID_SPINCTRL4, _T("0"), wxPoint(16,48), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL4"));
    SpinCtrl4->SetValue(_T("0"));
    SpinCtrl5 = new wxSpinCtrl(this, ID_SPINCTRL5, _T("0"), wxPoint(56,48), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL5"));
    SpinCtrl5->SetValue(_T("0"));
    SpinCtrl6 = new wxSpinCtrl(this, ID_SPINCTRL6, _T("0"), wxPoint(96,48), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL6"));
    SpinCtrl6->SetValue(_T("0"));
    SpinCtrl7 = new wxSpinCtrl(this, ID_SPINCTRL7, _T("0"), wxPoint(16,80), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL7"));
    SpinCtrl7->SetValue(_T("0"));
    SpinCtrl8 = new wxSpinCtrl(this, ID_SPINCTRL8, _T("0"), wxPoint(56,80), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL8"));
    SpinCtrl8->SetValue(_T("0"));
    SpinCtrl9 = new wxSpinCtrl(this, ID_SPINCTRL9, _T("0"), wxPoint(96,80), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL9"));
    SpinCtrl9->SetValue(_T("0"));
    Choice1 = new wxChoice(this, ID_CHOICE1, wxPoint(184,24), wxSize(56,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    Choice1->Append(_("3x3"));
    Choice1->Append(_("4x4"));
    SpinCtrl10 = new wxSpinCtrl(this, ID_SPINCTRL10, _T("0"), wxPoint(136,16), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL10"));
    SpinCtrl10->SetValue(_T("0"));
    SpinCtrl11 = new wxSpinCtrl(this, ID_SPINCTRL11, _T("0"), wxPoint(136,48), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL11"));
    SpinCtrl11->SetValue(_T("0"));
    SpinCtrl12 = new wxSpinCtrl(this, ID_SPINCTRL12, _T("0"), wxPoint(136,80), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL12"));
    SpinCtrl12->SetValue(_T("0"));
    SpinCtrl14 = new wxSpinCtrl(this, ID_SPINCTRL14, _T("0"), wxPoint(96,112), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL14"));
    SpinCtrl14->SetValue(_T("0"));
    SpinCtrl15 = new wxSpinCtrl(this, ID_SPINCTRL15, _T("0"), wxPoint(56,112), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL15"));
    SpinCtrl15->SetValue(_T("0"));
    SpinCtrl16 = new wxSpinCtrl(this, ID_SPINCTRL16, _T("0"), wxPoint(16,112), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL16"));
    SpinCtrl16->SetValue(_T("0"));
    SpinCtrl13 = new wxSpinCtrl(this, ID_SPINCTRL13, _T("0"), wxPoint(136,112), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL13"));
    SpinCtrl13->SetValue(_T("0"));
    txtInversa = new wxStaticText(this, ID_STATICTEXT1, wxEmptyString, wxPoint(256,16), wxSize(152,120), 0, _T("ID_STATICTEXT1"));
    wxFont txtInversaFont(19,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial Narrow"),wxFONTENCODING_DEFAULT);
    txtInversa->SetFont(txtInversaFont);
    Button1 = new wxButton(this, ID_BUTTON1, _("CALCULAR"), wxPoint(168,152), wxSize(88,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));

    Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Projeto_Calculo_IFrame::OnChoice1Select);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto_Calculo_IFrame::OnButton1Click);
    //*)

    Choice1->SetSelection(0);
    SpinCtrl10->Hide();
    SpinCtrl11->Hide();
    SpinCtrl12->Hide();
    SpinCtrl13->Hide();
    SpinCtrl14->Hide();
    SpinCtrl15->Hide();
    SpinCtrl16->Hide();
}

Projeto_Calculo_IFrame::~Projeto_Calculo_IFrame()
{
    //(*Destroy(Projeto_Calculo_IFrame)
    //*)

}


void Projeto_Calculo_IFrame::OnChoice1Select(wxCommandEvent& event)
{
int esc = Choice1->GetCurrentSelection();
    if(esc == 1){
        SpinCtrl10->Show();
        SpinCtrl11->Show();
        SpinCtrl12->Show();
        SpinCtrl13->Show();
        SpinCtrl14->Show();
        SpinCtrl15->Show();
        SpinCtrl16->Show();
    }else{
         SpinCtrl10->Hide();
         SpinCtrl11->Hide();
         SpinCtrl12->Hide();
         SpinCtrl13->Hide();
         SpinCtrl14->Hide();
         SpinCtrl15->Hide();
         SpinCtrl16->Hide();
    }
}



void Projeto_Calculo_IFrame::OnButton1Click(wxCommandEvent& event)
{

    /*for (int i=0; i<4; i++){
        for(int j=0; i<4; i++){
            mat[i][j]=
        }
    }*/
    int mat[4][4];
    int esc = Choice1->GetCurrentSelection();
    wxString m="";
    if(esc == 1){
        mat[0][0]=SpinCtrl1->GetValue();
        mat[0][1]=SpinCtrl2->GetValue();
        mat[0][2]=SpinCtrl3->GetValue();
        mat[0][3]=SpinCtrl4->GetValue();
        mat[1][0]=SpinCtrl5->GetValue();
        mat[1][1]=SpinCtrl6->GetValue();
        mat[1][2]=SpinCtrl7->GetValue();
        mat[1][3]=SpinCtrl8->GetValue();
        mat[2][0]=SpinCtrl9->GetValue();
        mat[2][1]=SpinCtrl10->GetValue();
        mat[2][2]=SpinCtrl11->GetValue();
        mat[2][3]=SpinCtrl12->GetValue();
        mat[3][0]=SpinCtrl13->GetValue();
        mat[3][1]=SpinCtrl14->GetValue();
        mat[3][2]=SpinCtrl15->GetValue();
        mat[3][3]=SpinCtrl16->GetValue();

        for (int i=0; i<4; i++){
            for(int j=0; j<4; j++){
            m+=wxString::Format(wxT("%d"),(int)mat[i][j]);
            if(j!=3)m+="      ";
            }
            if(i!=3)m+="\n";
        }
    }else{
        mat[0][0]=SpinCtrl1->GetValue();
        mat[0][1]=SpinCtrl2->GetValue();
        mat[0][2]=SpinCtrl3->GetValue();
        mat[1][0]=SpinCtrl4->GetValue();
        mat[1][1]=SpinCtrl5->GetValue();
        mat[1][2]=SpinCtrl6->GetValue();
        mat[2][0]=SpinCtrl7->GetValue();
        mat[2][1]=SpinCtrl8->GetValue();
        mat[2][2]=SpinCtrl9->GetValue();

        for (int i=0; i<3; i++){
            for(int j=0; j<3; j++){
            m+=wxString::Format(wxT("%d"),(int)mat[i][j])+"      ";
            }
            m+="\n";
        }
    }
    txtInversa->SetLabel(m);

    //wxMessageBox(m);
}
