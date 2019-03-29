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
#include "Funcoes.h"

//(*InternalHeaders(Projeto_Calculo_IFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
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
const long Projeto_Calculo_IFrame::ID_STATICBOX2 = wxNewId();
const long Projeto_Calculo_IFrame::ID_STATICBOX3 = wxNewId();
const long Projeto_Calculo_IFrame::ID_STATICBOX1 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL1 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL2 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL3 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL5 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL6 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL7 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL9 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL10 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL11 = wxNewId();
const long Projeto_Calculo_IFrame::ID_CHOICE1 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL4 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL8 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL12 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL15 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL14 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL13 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL16 = wxNewId();
const long Projeto_Calculo_IFrame::ID_STATICTEXT1 = wxNewId();
const long Projeto_Calculo_IFrame::ID_BUTTON1 = wxNewId();
const long Projeto_Calculo_IFrame::ID_RADIOBOX1 = wxNewId();
const long Projeto_Calculo_IFrame::ID_STATICTEXT3 = wxNewId();
const long Projeto_Calculo_IFrame::ID_STATICTEXT2 = wxNewId();
const long Projeto_Calculo_IFrame::ID_STATICTEXT7 = wxNewId();
const long Projeto_Calculo_IFrame::ID_STATICTEXT8 = wxNewId();
const long Projeto_Calculo_IFrame::ID_STATICTEXT4 = wxNewId();
const long Projeto_Calculo_IFrame::ID_STATICTEXT5 = wxNewId();
const long Projeto_Calculo_IFrame::ID_PANEL1 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL32 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL31 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL30 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL29 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL28 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL27 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL26 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL25 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL24 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL23 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL22 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL21 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL20 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL19 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL18 = wxNewId();
const long Projeto_Calculo_IFrame::ID_SPINCTRL17 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Projeto_Calculo_IFrame,wxFrame)
    //(*EventTable(Projeto_Calculo_IFrame)
    //*)
END_EVENT_TABLE()

Projeto_Calculo_IFrame::Projeto_Calculo_IFrame(wxWindow* parent,wxWindowID id)
{

    //(*Initialize(Projeto_Calculo_IFrame)
    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(510,375));
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INACTIVECAPTION));
    StaticBox2 = new wxStaticBox(this, ID_STATICBOX2, _("Resultado da Matriz"), wxPoint(248,0), wxSize(168,145), 0, _T("ID_STATICBOX2"));
    StaticBox3 = new wxStaticBox(this, ID_STATICBOX3, _("Segunda Matriz"), wxPoint(128,192), wxSize(168,145), 0, _T("ID_STATICBOX3"));
    StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Insira os valores da matriz"), wxPoint(8,0), wxSize(168,145), 0, _T("ID_STATICBOX1"));
    SpinCtrl1 = new wxSpinCtrl(this, ID_SPINCTRL1, _T("0"), wxPoint(16,16), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL1"));
    SpinCtrl1->SetValue(_T("0"));
    SpinCtrl2 = new wxSpinCtrl(this, ID_SPINCTRL2, _T("0"), wxPoint(56,16), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL2"));
    SpinCtrl2->SetValue(_T("0"));
    SpinCtrl3 = new wxSpinCtrl(this, ID_SPINCTRL3, _T("0"), wxPoint(96,16), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL3"));
    SpinCtrl3->SetValue(_T("0"));
    SpinCtrl5 = new wxSpinCtrl(this, ID_SPINCTRL5, _T("0"), wxPoint(16,48), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL5"));
    SpinCtrl5->SetValue(_T("0"));
    SpinCtrl6 = new wxSpinCtrl(this, ID_SPINCTRL6, _T("0"), wxPoint(56,48), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL6"));
    SpinCtrl6->SetValue(_T("0"));
    SpinCtrl7 = new wxSpinCtrl(this, ID_SPINCTRL7, _T("0"), wxPoint(96,48), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL7"));
    SpinCtrl7->SetValue(_T("0"));
    SpinCtrl9 = new wxSpinCtrl(this, ID_SPINCTRL9, _T("0"), wxPoint(16,80), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL9"));
    SpinCtrl9->SetValue(_T("0"));
    SpinCtrl10 = new wxSpinCtrl(this, ID_SPINCTRL10, _T("0"), wxPoint(56,80), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL10"));
    SpinCtrl10->SetValue(_T("0"));
    SpinCtrl11 = new wxSpinCtrl(this, ID_SPINCTRL11, _T("0"), wxPoint(96,80), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL11"));
    SpinCtrl11->SetValue(_T("0"));
    Choice1 = new wxChoice(this, ID_CHOICE1, wxPoint(184,24), wxSize(56,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    Choice1->Append(_("3x3"));
    Choice1->Append(_("4x4"));
    SpinCtrl4 = new wxSpinCtrl(this, ID_SPINCTRL4, _T("0"), wxPoint(136,16), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL4"));
    SpinCtrl4->SetValue(_T("0"));
    SpinCtrl8 = new wxSpinCtrl(this, ID_SPINCTRL8, _T("0"), wxPoint(136,48), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL8"));
    SpinCtrl8->SetValue(_T("0"));
    SpinCtrl12 = new wxSpinCtrl(this, ID_SPINCTRL12, _T("0"), wxPoint(136,80), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL12"));
    SpinCtrl12->SetValue(_T("0"));
    SpinCtrl15 = new wxSpinCtrl(this, ID_SPINCTRL15, _T("0"), wxPoint(96,112), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL15"));
    SpinCtrl15->SetValue(_T("0"));
    SpinCtrl14 = new wxSpinCtrl(this, ID_SPINCTRL14, _T("0"), wxPoint(56,112), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL14"));
    SpinCtrl14->SetValue(_T("0"));
    SpinCtrl13 = new wxSpinCtrl(this, ID_SPINCTRL13, _T("0"), wxPoint(16,112), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL13"));
    SpinCtrl13->SetValue(_T("0"));
    SpinCtrl16 = new wxSpinCtrl(this, ID_SPINCTRL16, _T("0"), wxPoint(136,112), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL16"));
    SpinCtrl16->SetValue(_T("0"));
    txtResultado = new wxStaticText(this, ID_STATICTEXT1, wxEmptyString, wxPoint(256,16), wxSize(152,120), 0, _T("ID_STATICTEXT1"));
    wxFont txtResultadoFont(19,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial Narrow"),wxFONTENCODING_DEFAULT);
    txtResultado->SetFont(txtResultadoFont);
    Button1 = new wxButton(this, ID_BUTTON1, _("CALCULAR"), wxPoint(168,152), wxSize(88,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxString __wxRadioBoxChoices_1[4] =
    {
    	_("Transposta"),
    	_("Soma"),
    	_(wxT("Multiplicação")),
    	_(wxT("Subtração"))
    };
    RadioBox1 = new wxRadioBox(this, ID_RADIOBOX1, _(wxT("Operação")), wxPoint(8,192), wxDefaultSize, 4, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(320,200), wxSize(168,128), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
    txtIdentidade = new wxStaticText(Panel1, ID_STATICTEXT3, _("Matriz Identidade:"), wxPoint(8,32), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    txtDiagonal = new wxStaticText(Panel1, ID_STATICTEXT2, _("Matriz Diagonal:"), wxPoint(8,48), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    txtNula = new wxStaticText(Panel1, ID_STATICTEXT7, _("Matriz Nula:"), wxPoint(8,64), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    txtIgualdade = new wxStaticText(Panel1, ID_STATICTEXT8, _("Igualdade de Matrizes:"), wxPoint(8,96), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    txtSimetrica = new wxStaticText(Panel1, ID_STATICTEXT4, _(wxT("Matriz Simétrica:")), wxPoint(8,80), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Dados"), wxPoint(64,8), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    wxFont StaticText4Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    SpinCtrl32 = new wxSpinCtrl(this, ID_SPINCTRL32, _T("0"), wxPoint(256,304), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL32"));
    SpinCtrl32->SetValue(_T("0"));
    SpinCtrl31 = new wxSpinCtrl(this, ID_SPINCTRL31, _T("0"), wxPoint(216,304), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL31"));
    SpinCtrl31->SetValue(_T("0"));
    SpinCtrl30 = new wxSpinCtrl(this, ID_SPINCTRL30, _T("0"), wxPoint(176,304), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL30"));
    SpinCtrl30->SetValue(_T("0"));
    SpinCtrl29 = new wxSpinCtrl(this, ID_SPINCTRL29, _T("0"), wxPoint(136,304), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL29"));
    SpinCtrl29->SetValue(_T("0"));
    SpinCtrl28 = new wxSpinCtrl(this, ID_SPINCTRL28, _T("0"), wxPoint(256,272), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL28"));
    SpinCtrl28->SetValue(_T("0"));
    SpinCtrl27 = new wxSpinCtrl(this, ID_SPINCTRL27, _T("0"), wxPoint(216,272), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL27"));
    SpinCtrl27->SetValue(_T("0"));
    SpinCtrl26 = new wxSpinCtrl(this, ID_SPINCTRL26, _T("0"), wxPoint(176,272), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL26"));
    SpinCtrl26->SetValue(_T("0"));
    SpinCtrl25 = new wxSpinCtrl(this, ID_SPINCTRL25, _T("0"), wxPoint(136,272), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL25"));
    SpinCtrl25->SetValue(_T("0"));
    SpinCtrl24 = new wxSpinCtrl(this, ID_SPINCTRL24, _T("0"), wxPoint(256,240), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL24"));
    SpinCtrl24->SetValue(_T("0"));
    SpinCtrl23 = new wxSpinCtrl(this, ID_SPINCTRL23, _T("0"), wxPoint(216,240), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL23"));
    SpinCtrl23->SetValue(_T("0"));
    SpinCtrl22 = new wxSpinCtrl(this, ID_SPINCTRL22, _T("0"), wxPoint(176,240), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL22"));
    SpinCtrl22->SetValue(_T("0"));
    SpinCtrl21 = new wxSpinCtrl(this, ID_SPINCTRL21, _T("0"), wxPoint(136,240), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL21"));
    SpinCtrl21->SetValue(_T("0"));
    SpinCtrl20 = new wxSpinCtrl(this, ID_SPINCTRL20, _T("0"), wxPoint(256,208), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL20"));
    SpinCtrl20->SetValue(_T("0"));
    SpinCtrl19 = new wxSpinCtrl(this, ID_SPINCTRL19, _T("0"), wxPoint(216,208), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL19"));
    SpinCtrl19->SetValue(_T("0"));
    SpinCtrl18 = new wxSpinCtrl(this, ID_SPINCTRL18, _T("0"), wxPoint(176,208), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL18"));
    SpinCtrl18->SetValue(_T("0"));
    SpinCtrl17 = new wxSpinCtrl(this, ID_SPINCTRL17, _T("0"), wxPoint(136,208), wxSize(32,21), 0, 0, 9, 0, _T("ID_SPINCTRL17"));
    SpinCtrl17->SetValue(_T("0"));

    Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Projeto_Calculo_IFrame::OnChoice1Select);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto_Calculo_IFrame::OnButton1Click);
    //*)

    Choice1->SetSelection(0);
    SpinCtrl4->Hide();
    SpinCtrl8->Hide();
    SpinCtrl12->Hide();
    SpinCtrl13->Hide();
    SpinCtrl14->Hide();
    SpinCtrl15->Hide();
    SpinCtrl16->Hide();
    SpinCtrl20->Hide();
    SpinCtrl24->Hide();
    SpinCtrl28->Hide();
    SpinCtrl29->Hide();
    SpinCtrl30->Hide();
    SpinCtrl31->Hide();
    SpinCtrl32->Hide();
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
        SpinCtrl4->Show();
        SpinCtrl8->Show();
        SpinCtrl12->Show();
        SpinCtrl13->Show();
        SpinCtrl14->Show();
        SpinCtrl15->Show();
        SpinCtrl16->Show();

        SpinCtrl20->Show();
        SpinCtrl24->Show();
        SpinCtrl28->Show();
        SpinCtrl29->Show();
        SpinCtrl30->Show();
        SpinCtrl31->Show();
        SpinCtrl32->Show();
    }else{
        SpinCtrl4->Hide();
        SpinCtrl8->Hide();
        SpinCtrl12->Hide();
        SpinCtrl13->Hide();
        SpinCtrl14->Hide();
        SpinCtrl15->Hide();
        SpinCtrl16->Hide();

        SpinCtrl20->Hide();
        SpinCtrl24->Hide();
        SpinCtrl28->Hide();
        SpinCtrl29->Hide();
        SpinCtrl30->Hide();
        SpinCtrl31->Hide();
        SpinCtrl32->Hide();
    }
}



void Projeto_Calculo_IFrame::OnButton1Click(wxCommandEvent& event)
{


    int mat[4][4], mat2[4][4];

    int T=(Choice1->GetCurrentSelection()==1)?4:3;
    wxString m;
    if(T == 4){
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

        mat2[0][0]=SpinCtrl17->GetValue();
        mat2[0][1]=SpinCtrl18->GetValue();
        mat2[0][2]=SpinCtrl19->GetValue();
        mat2[0][3]=SpinCtrl20->GetValue();
        mat2[1][0]=SpinCtrl21->GetValue();
        mat2[1][1]=SpinCtrl22->GetValue();
        mat2[1][2]=SpinCtrl23->GetValue();
        mat2[1][3]=SpinCtrl24->GetValue();
        mat2[2][0]=SpinCtrl25->GetValue();
        mat2[2][1]=SpinCtrl26->GetValue();
        mat2[2][2]=SpinCtrl27->GetValue();
        mat2[2][3]=SpinCtrl28->GetValue();
        mat2[3][0]=SpinCtrl29->GetValue();
        mat2[3][1]=SpinCtrl30->GetValue();
        mat2[3][2]=SpinCtrl31->GetValue();
        mat2[3][3]=SpinCtrl32->GetValue();


        m=exibirMatriz(mat,T);
    }else{
        mat[0][0]=SpinCtrl1->GetValue();
        mat[0][1]=SpinCtrl2->GetValue();
        mat[0][2]=SpinCtrl3->GetValue();
        mat[1][0]=SpinCtrl5->GetValue();
        mat[1][1]=SpinCtrl6->GetValue();
        mat[1][2]=SpinCtrl7->GetValue();
        mat[2][0]=SpinCtrl9->GetValue();
        mat[2][1]=SpinCtrl10->GetValue();
        mat[2][2]=SpinCtrl11->GetValue();

        mat2[0][0]=SpinCtrl17->GetValue();
        mat2[0][1]=SpinCtrl18->GetValue();
        mat2[0][2]=SpinCtrl19->GetValue();
        mat2[1][0]=SpinCtrl21->GetValue();
        mat2[1][1]=SpinCtrl22->GetValue();
        mat2[1][2]=SpinCtrl23->GetValue();
        mat2[2][0]=SpinCtrl25->GetValue();
        mat2[2][1]=SpinCtrl26->GetValue();
        mat2[2][2]=SpinCtrl27->GetValue();

        m=exibirMatriz(mat,T);
    }

    StaticBox2->SetLabel("Resultado: "+RadioBox1->GetStringSelection());

    txtIdentidade->SetLabel("Matriz Identidade: "+identidade(mat, T));
    txtDiagonal->SetLabel("Matriz Diagonal: "+diagonal(mat, T));
    txtNula->SetLabel("Matriz Nula: "+nula(mat, T));
    txtSimetrica->SetLabel(wxT("Matriz Simétrica: ")+simetrica(mat, T));
    txtIgualdade->SetLabel("Igualdade de Matrizes: "+igualdade(mat, mat2, T));

    switch(RadioBox1->GetSelection()){
        case 0:
            m=transposta(mat,T);
            break;
        case 1:
            m=soma(mat, mat2,T);
            break;
        case 2:
            m=multiplicacao(mat, mat2,T);
            break;
        case 3:
            m=subtracao(mat, mat2,T);
            break;


    }
txtResultado->SetLabel(m);
}

