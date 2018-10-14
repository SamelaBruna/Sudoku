#ifndef SODOKUN_H
#define SODOKUN_H


#include <QMainWindow>
#include <QLabel>
#include "sudoku.h"


namespace Ui {
class sodokun;
}

class sodokun : public QMainWindow
{
    Q_OBJECT

public:

    explicit sodokun(QWidget *parent = nullptr);
    ~sodokun();

    void exibirCelulaAtual(int i, int j, int valor);

    void exibirCelulaInicial(int i, int j, int valor);

    void setBackground(int i,int j, QLabel *prov);

    void exibirAndamento(unsigned Ntab_testados, unsigned Ntab_gerados, unsigned Ntab_analisar);

private slots:
    void on_tableWidget_cellClicked(int row, int column);

    void on_spinBox_valueChanged(int arg1);

    void on_ButtonJogar_clicked();

    void on_actionSair_triggered();

    void on_actionResolver_triggered();

    void on_actionPreencher_Imediatas_triggered();

    void on_actionNovo_triggered();

    void on_actionReiniciar_triggered();

    void on_ButtonContinuar_clicked();

private:
    Ui::sodokun *ui;
    Sudoku inicial, atual;
    Jogada J;
};

#endif // sodokun_H


