
wxString exibirMatriz(int mat[][4], int T){
    wxString m="";

        for (int i=0; i<T; i++){
          for(int j=0; j<T; j++){
            m+=wxString::Format(wxT("%d"), mat[i][j]);
            if(j!=T-1)m+="      ";
          }
            if(i!=T-1)m+="\n";
        }
        return m;
}

wxString transposta(int mat[][4], int T){
    int matT[T][4];
    for (int i=0; i<T; i++){
        for (int j=0; j<T; j++){
            matT[i][j]=mat[j][i];
        }
    }
    return exibirMatriz(matT, T);
}

wxString soma(int mat[][4], int mat2[][4], int T){
    int matSoma[T][4];
    for (int i=0; i<T; i++){
        for (int j=0; j<T; j++){
            matSoma[i][j]=mat[i][j]+mat2[i][j];
        }
    }
    return exibirMatriz(matSoma, T);
}

wxString multiplicacao(int A[][4], int B[][4], int T){
    int AB[T][4], AUX=0;
    for (int k=0; k<T; k++){
        for (int i=0; i<T; i++){
            for (int j=0; j<T; j++){
                AUX=AUX+A[i][j]*B[j][k];
            }
            AB[i][k]=AUX;
            AUX=0;
        }
    }
    return exibirMatriz(AB, T);
}

wxString subtracao(int mat[][4], int mat2[][4], int T){
    int matSoma[T][4];
    for (int i=0; i<T; i++){
        for (int j=0; j<T; j++){
            matSoma[i][j]=mat[i][j]-mat2[i][j];
        }
    }
    return exibirMatriz(matSoma, T);
}

wxString identidade(int mat[][4], int T){
    wxString teste="Sim";
    for (int i=0; i<T; i++){
        for (int j=0; j<T; j++){
            if(i!=j && mat[i][j]!=0) teste="N�o";
            if(i==j && mat[i][j]!=1) teste="N�o";
        }
    }
    return teste;
}

wxString diagonal(int mat[][4], int T){
    wxString teste="Sim";
    for (int i=0; i<T; i++){
        for (int j=0; j<T; j++){
            if(i!=j && mat[i][j]!=0) teste="N�o";
        }
    }
    return teste;
}

wxString nula(int mat[][4], int T){
    wxString teste="Sim";
    for (int i=0; i<T; i++){
        for (int j=0; j<T; j++){
            if(mat[i][j]!=0){
                    teste="N�o";
            }
        }
    }
    return teste;
}

wxString simetrica(int mat[][4], int T){
    wxString teste="Sim";

            if(exibirMatriz(mat,T) != transposta(mat, T)){
                    teste="N�o";
            }

    return teste;
}

wxString igualdade(int mat[][4], int mat2[][4], int T){
    wxString teste="Sim";
    for (int i=0; i<T; i++){
        for (int j=0; j<T; j++){
            if(mat[i][j]!=mat2[i][j]){
                    teste="N�o";
            }
        }
    }
    return teste;
}
