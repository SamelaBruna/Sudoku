/********************************************************************************
** Form generated from reading UI file 'sodokun.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SODOKUN_H
#define UI_SODOKUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sodokun
{
public:
    QAction *actionReiniciar;
    QAction *actionNovo;
    QAction *actionPreencher_Imediatas;
    QAction *actionResolver;
    QAction *actionSair;
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *ButtonJogar;
    QPushButton *ButtonContinuar;
    QLabel *label_18;
    QLabel *label_19;
    QMenuBar *menuBar;
    QMenu *menuReiniciar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *sodokun)
    {
        if (sodokun->objectName().isEmpty())
            sodokun->setObjectName(QStringLiteral("sodokun"));
        sodokun->resize(600, 420);
        actionReiniciar = new QAction(sodokun);
        actionReiniciar->setObjectName(QStringLiteral("actionReiniciar"));
        actionNovo = new QAction(sodokun);
        actionNovo->setObjectName(QStringLiteral("actionNovo"));
        actionPreencher_Imediatas = new QAction(sodokun);
        actionPreencher_Imediatas->setObjectName(QStringLiteral("actionPreencher_Imediatas"));
        actionResolver = new QAction(sodokun);
        actionResolver->setObjectName(QStringLiteral("actionResolver"));
        actionSair = new QAction(sodokun);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        centralWidget = new QWidget(sodokun);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        if (tableWidget->rowCount() < 9)
            tableWidget->setRowCount(9);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 40, 272, 272));
        tableWidget->setRowCount(9);
        tableWidget->setColumnCount(9);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(30);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(30);
        tableWidget_2 = new QTableWidget(centralWidget);
        if (tableWidget_2->columnCount() < 9)
            tableWidget_2->setColumnCount(9);
        if (tableWidget_2->rowCount() < 9)
            tableWidget_2->setRowCount(9);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(310, 40, 272, 272));
        tableWidget_2->setRowCount(9);
        tableWidget_2->setColumnCount(9);
        tableWidget_2->horizontalHeader()->setVisible(false);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(30);
        tableWidget_2->horizontalHeader()->setHighlightSections(false);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setHighlightSections(false);
        tableWidget_2->verticalHeader()->setMinimumSectionSize(30);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 310, 341, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 330, 31, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 350, 41, 16));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(140, 340, 61, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 340, 47, 21));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 0, 111, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(400, 0, 111, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 20, 271, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 50, 21, 20));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(310, 20, 271, 16));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(290, 110, 21, 16));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(290, 80, 21, 16));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(290, 140, 21, 16));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(290, 170, 21, 16));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(290, 200, 21, 16));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(290, 230, 21, 16));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(290, 260, 21, 16));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(290, 290, 21, 16));
        ButtonJogar = new QPushButton(centralWidget);
        ButtonJogar->setObjectName(QStringLiteral("ButtonJogar"));
        ButtonJogar->setGeometry(QRect(220, 340, 75, 23));
        ButtonContinuar = new QPushButton(centralWidget);
        ButtonContinuar->setObjectName(QStringLiteral("ButtonContinuar"));
        ButtonContinuar->setGeometry(QRect(500, 340, 75, 23));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(60, 330, 21, 16));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(70, 350, 21, 16));
        sodokun->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(sodokun);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuReiniciar = new QMenu(menuBar);
        menuReiniciar->setObjectName(QStringLiteral("menuReiniciar"));
        sodokun->setMenuBar(menuBar);
        statusBar = new QStatusBar(sodokun);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        sodokun->setStatusBar(statusBar);

        menuBar->addAction(menuReiniciar->menuAction());
        menuReiniciar->addAction(actionReiniciar);
        menuReiniciar->addAction(actionNovo);
        menuReiniciar->addAction(actionPreencher_Imediatas);
        menuReiniciar->addAction(actionResolver);
        menuReiniciar->addSeparator();
        menuReiniciar->addAction(actionSair);

        retranslateUi(sodokun);

        QMetaObject::connectSlotsByName(sodokun);
    } // setupUi

    void retranslateUi(QMainWindow *sodokun)
    {
        sodokun->setWindowTitle(QApplication::translate("sodokun", "Sudoku - Quadrados M\303\241gicos", nullptr));
        actionReiniciar->setText(QApplication::translate("sodokun", "Reiniciar", nullptr));
        actionNovo->setText(QApplication::translate("sodokun", "Novo", nullptr));
        actionPreencher_Imediatas->setText(QApplication::translate("sodokun", "Preencher Imediatas", nullptr));
        actionResolver->setText(QApplication::translate("sodokun", "Resolver", nullptr));
        actionSair->setText(QApplication::translate("sodokun", "Sair", nullptr));
        label->setText(QApplication::translate("sodokun", "Escolha a casa(clique no tabuleiro) e o valor da joga(1 a 9;ou Apagar):", nullptr));
        label_2->setText(QApplication::translate("sodokun", "Linha:     ", nullptr));
        label_3->setText(QApplication::translate("sodokun", "Coluna:  ", nullptr));
        label_4->setText(QApplication::translate("sodokun", "VALOR:", nullptr));
        label_5->setText(QApplication::translate("sodokun", "TABULEIRO ATUAL", nullptr));
        label_6->setText(QApplication::translate("sodokun", "TABULEIRO INICIAL", nullptr));
        label_7->setText(QApplication::translate("sodokun", "    1        2        3       4         5        6        7        8        9 ", nullptr));
        label_8->setText(QApplication::translate("sodokun", " A", nullptr));
        label_9->setText(QApplication::translate("sodokun", "    1        2        3       4         5        6        7        8        9 ", nullptr));
        label_10->setText(QApplication::translate("sodokun", " C", nullptr));
        label_11->setText(QApplication::translate("sodokun", " B", nullptr));
        label_12->setText(QApplication::translate("sodokun", " D", nullptr));
        label_13->setText(QApplication::translate("sodokun", " E", nullptr));
        label_14->setText(QApplication::translate("sodokun", " F", nullptr));
        label_15->setText(QApplication::translate("sodokun", " G", nullptr));
        label_16->setText(QApplication::translate("sodokun", " H", nullptr));
        label_17->setText(QApplication::translate("sodokun", " I", nullptr));
        ButtonJogar->setText(QApplication::translate("sodokun", "JOGAR", nullptr));
        ButtonContinuar->setText(QApplication::translate("sodokun", "CONTINUAR", nullptr));
        label_18->setText(QApplication::translate("sodokun", "?", nullptr));
        label_19->setText(QApplication::translate("sodokun", "?", nullptr));
        menuReiniciar->setTitle(QApplication::translate("sodokun", "Sudoku", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sodokun: public Ui_sodokun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SODOKUN_H
