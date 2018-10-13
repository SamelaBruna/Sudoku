#include "sudoku.h"
#include "sodokun.h"

extern sodokun *pt_w;

void Sudoku::exibir() const{
    for(int i=0; i<9; i++) for(int j=0; j<9; j++){
        pt_w->exibirCelulaAtual(i,j,this->at(i,j));
    }
}

void Sudoku::exibir_origem() const{
    for(int i=0; i<9; i++) for(int j=0; j<9; j++){
        pt_w->exibirCelulaInicial(i,j,this->at(i,j));
    }
}
