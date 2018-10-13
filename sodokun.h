#ifndef SODOKUN_H
#define SODOKUN_H

#include <QMainWindow>
#include <sudoku.h>
#include <QLabel>

namespace Ui {
class sodokun;
}

class sodokun : public QMainWindow
{
    Q_OBJECT

public:
    explicit sodokun(QWidget *parent = nullptr);
    ~sodokun();
    void setBackground(int i,int j, QLabel *prov);
    void exibirCelulaAtual(int i,int j,int valor);
    void exibirCelulaInicial(int i,int j,int valor);


private slots:
    void on_actionSair_triggered();

    void on_actionReiniciar_triggered();

    void on_actionNovo_triggered();

    void on_actionPreencher_Imediatas_triggered();

    void on_actionResolver_triggered();


    void on_ButtonJogar_clicked();

    void on_ButtonContinuar_clicked();

    void on_tableWidget_cellClicked(int row, int column);

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::sodokun *ui;
    Sudoku inicial,atual;
    Jogada J;
};

#endif // SODOKUN_H
