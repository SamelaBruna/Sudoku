#include "sodokun.h"
#include "ui_sodokun.h"
#include <QString>

sodokun::sodokun(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sodokun),
    inicial("sudoku.txt"),
    atual(inicial), //atual inicializa com o inicial
    J(0,0,0)
{
    ui->setupUi(this);
    ui->ButtonContinuar->hide();
    ui->tableWidget_2->setEnabled(false); //TABELA 2
    ui->tableWidget->setSelectionMode(QAbstractItemView::NoSelection); //TABELA 1
    ui->tableWidget->setTabKeyNavigation(false);


    QLabel *prov;
    for(int i=0;i<9;i++) for(int j=0;j<9;j++)
    {
       prov = new QLabel;
       prov->setAlignment(Qt::AlignCenter);
       prov->setGeometry(0,0,30,30);
       if(i==0 && j==0)prov->setStyleSheet("background:lightyellow");
       else  setBackground(i,j,prov);
       if(atual.at(i,j)==0)
       {
            prov->setText("");
            ui->ButtonJogar->setEnabled(false);
            ui->label_18->setText("A");
            ui->label_19->setNum(1);
       }

       else prov->setNum(atual.at(i,j));
       ui->tableWidget->setCellWidget(i,j,prov); //ATUAL


       prov = new QLabel;
       prov->setAlignment(Qt::AlignCenter);
       prov->setGeometry(0,0,30,30);
       setBackground(i,j,prov);
        if(inicial.at(i,j)==0)prov->setText("");
        else prov->setNum(inicial.at(i,j));
       ui->tableWidget_2->setCellWidget(i,j,prov); //INICIAL
    }

   ui->spinBox->setRange(0,9);
   ui->spinBox->setWrapping(true);
   ui->spinBox->setSpecialValueText("Apagar");


}

void sodokun::setBackground(int i,int j, QLabel *prov)
{
    int ii = i/3;
    int jj = j/3;
    if((ii == 0 || ii == 2) && (jj==1)) prov->setStyleSheet("background:lightcyan");
    else if(ii==1 && (jj==0 || jj==2)) prov->setStyleSheet("background:lightcyan");
    else  prov->setStyleSheet("background:white");

 }


void sodokun::exibirCelulaAtual(int i, int j, int valor)
{
        QLabel *prov = (QLabel*)ui->tableWidget->cellWidget(i,j);
        if(valor==0) prov->setText("");
        else prov->setNum(valor);
}

void sodokun::exibirCelulaInicial(int i, int j, int valor)
{

    QLabel *prov = (QLabel*)ui->tableWidget_2->cellWidget(i,j);
    if(valor==0) prov->setText("");
    else prov->setNum(valor);

}


sodokun::~sodokun()
{
    delete ui;
}

void sodokun::on_actionSair_triggered()
{
      QCoreApplication::quit();

}

void sodokun::on_actionReiniciar_triggered()
{
    atual=inicial;
    atual.exibir();

}

void sodokun::on_actionNovo_triggered()
{
    inicial.gerar();
    inicial.exibir_origem();
    atual=inicial;
    atual.exibir();
}

void sodokun::on_actionPreencher_Imediatas_triggered()
{
    int numCp = atual.resolver_casas_faceis();
    atual.exibir();
    if(numCp >0) ui->statusBar->showMessage(QString::number(numCp) + QString(" casas preenchidas"));
    else if(numCp<0 && numCp>-81) ui->statusBar->showMessage(QString("TABULEIRO INSOLUVEL!")+((-numCp==1) ? QString("%1 casa preenchida.").arg(-numCp) : QString("%1 casas preenchidas.").arg(-numCp)));
    else if(numCp<-81)ui->statusBar->showMessage(QString("TABULEIRO INSOLUVEL"));
}

void sodokun::on_actionResolver_triggered()
{

    atual.exibir_origem();
    atual.resolver();
    ui->tableWidget->setEnabled(false);
    ui->menuBar->setEnabled(false);
    ui->ButtonContinuar->show();
    ui->ButtonJogar->setEnabled(false);
    ui->spinBox->setEnabled(false);
}


void sodokun::on_ButtonJogar_clicked()
{
    if(J.valor()==0) atual.apagar_jogada(J,inicial);
    else atual.fazer_jogada(J);

    exibirCelulaAtual(J.linha(),J.coluna(),J.valor());
    sodokun::on_spinBox_valueChanged(J.valor());

}

void sodokun::on_ButtonContinuar_clicked()
{
       inicial.exibir_origem();
       atual.exibir();

       ui->statusBar->clearMessage();
       ui->tableWidget->setEnabled(true);
       ui->menuBar->setEnabled(true);
       ui->ButtonJogar->setEnabled(true);
       ui->spinBox->setEnabled(true);
       ui->ButtonContinuar->hide();
}

void sodokun::on_spinBox_valueChanged(int arg1)
{
   J.setValue(arg1);
   if(atual.jogada_valida(J) || atual.apagamento_valido(J,inicial)) ui->ButtonJogar->setEnabled(true);
   else ui->ButtonJogar->setEnabled(false);
}

void sodokun::on_tableWidget_cellClicked(int row, int column)
{
    QLabel *prov;
        prov=(QLabel*)ui->tableWidget->cellWidget(J.linha(),J.coluna());
        setBackground(J.linha(),J.coluna(),prov);
        J.setCell(row,column);
        prov=(QLabel*)ui->tableWidget->cellWidget(J.linha(),J.coluna());
        prov->setStyleSheet("background:lightyellow");
        ui->label_18->setText(QString(J.linha()+'A'));
        ui->label_19->setNum(J.coluna()+1);
        sodokun::on_spinBox_valueChanged(J.valor());


}

void sodokun::exibirAndamento(unsigned Ntab_testados, unsigned Ntab_gerados, unsigned Ntab_analisar)
{
    ui->statusBar->showMessage(QString("TABULEIROS: %1 gerados; %2 gerados; %3 a analisar").arg(Ntab_testados).arg(Ntab_gerados).arg(Ntab_analisar));
}


