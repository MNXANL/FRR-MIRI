/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <qglobal.h>
#include <QtCore/QVariant>
#if QT_VERSION >= 0x050000  // Using Qt5
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#else // Using Qt4
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#endif
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionLoad;
    QAction *actionLoad_Specular;
    QAction *actionLoad_Diffuse;
    QWidget *Widget;
    QHBoxLayout *horizontalLayout;
    GLWidget *glwidget;
    QVBoxLayout *Configuration;
    QGroupBox *TreeOptions;
    QRadioButton *radio_reflection;
    QRadioButton *radio_brdf;
    QDoubleSpinBox *spin_f0r;
    QDoubleSpinBox *spin_f0g;
    QDoubleSpinBox *spin_f0b;
    QDoubleSpinBox *spin_g;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QRadioButton *radio_refraction;
    QSpacerItem *Spacer;
    QGroupBox *RenderOptions;
    QLabel *Label_NumFaces;
    QLabel *Label_Faces;
    QLabel *Label_Vertices;
    QLabel *Label_NumVertices;
    QLabel *Label_Framerate;
    QLabel *Label_NumFramerate;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(827, 629);
        MainWindow->setMinimumSize(QSize(827, 618));
        MainWindow->setBaseSize(QSize(600, 600));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionLoad_Specular = new QAction(MainWindow);
        actionLoad_Specular->setObjectName(QString::fromUtf8("actionLoad_Specular"));
        actionLoad_Diffuse = new QAction(MainWindow);
        actionLoad_Diffuse->setObjectName(QString::fromUtf8("actionLoad_Diffuse"));
        Widget = new QWidget(MainWindow);
        Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setMinimumSize(QSize(827, 0));
        Widget->setBaseSize(QSize(600, 600));
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        glwidget = new GLWidget(Widget);
        glwidget->setObjectName(QString::fromUtf8("glwidget"));
        glwidget->setMinimumSize(QSize(600, 600));
        glwidget->setMaximumSize(QSize(16777215, 16777215));
        glwidget->setBaseSize(QSize(600, 600));

        horizontalLayout->addWidget(glwidget);

        Configuration = new QVBoxLayout();
        Configuration->setSpacing(6);
        Configuration->setObjectName(QString::fromUtf8("Configuration"));
        TreeOptions = new QGroupBox(Widget);
        TreeOptions->setObjectName(QString::fromUtf8("TreeOptions"));
        TreeOptions->setMinimumSize(QSize(200, 0));
        TreeOptions->setMaximumSize(QSize(200, 16777215));
        radio_reflection = new QRadioButton(TreeOptions);
        radio_reflection->setObjectName(QString::fromUtf8("radio_reflection"));
        radio_reflection->setGeometry(QRect(20, 70, 117, 22));
        radio_reflection->setChecked(false);
        radio_brdf = new QRadioButton(TreeOptions);
        radio_brdf->setObjectName(QString::fromUtf8("radio_brdf"));
        radio_brdf->setGeometry(QRect(20, 100, 117, 22));
        spin_f0r = new QDoubleSpinBox(TreeOptions);
        spin_f0r->setObjectName(QString::fromUtf8("spin_f0r"));
        spin_f0r->setGeometry(QRect(70, 140, 69, 27));
        spin_f0r->setMaximum(2.000000000000000);
        spin_f0r->setSingleStep(0.050000000000000);
        spin_f0r->setValue(0.200000000000000);
        spin_f0g = new QDoubleSpinBox(TreeOptions);
        spin_f0g->setObjectName(QString::fromUtf8("spin_f0g"));
        spin_f0g->setGeometry(QRect(70, 180, 69, 27));
        spin_f0g->setMaximum(2.000000000000000);
        spin_f0g->setSingleStep(0.050000000000000);
        spin_f0g->setValue(0.200000000000000);
        spin_f0b = new QDoubleSpinBox(TreeOptions);
        spin_f0b->setObjectName(QString::fromUtf8("spin_f0b"));
        spin_f0b->setGeometry(QRect(70, 220, 69, 27));
        spin_f0b->setMaximum(2.000000000000000);
        spin_f0b->setSingleStep(0.050000000000000);
        spin_f0b->setValue(0.200000000000000);

        spin_g = new QDoubleSpinBox(TreeOptions);
        spin_g->setObjectName(QString::fromUtf8("spin_f0b"));
        spin_g->setGeometry(QRect(100, 290, 41, 27));
        spin_g->setMaximum(3.000000000000000);
        spin_g->setSingleStep(1.000000000000000);
        spin_g->setValue(0.000000000000000);

        label = new QLabel(TreeOptions);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 140, 31, 31));
        label_2 = new QLabel(TreeOptions);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 180, 31, 31));
        label_3 = new QLabel(TreeOptions);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 220, 31, 31));
        label_4 = new QLabel(TreeOptions);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 260, 31, 31));
        radio_refraction = new QRadioButton(TreeOptions);
        radio_refraction->setObjectName(QString::fromUtf8("radio_refraction"));
        radio_refraction->setGeometry(QRect(20, 40, 117, 22));
        radio_refraction->setContextMenuPolicy(Qt::CustomContextMenu);
        radio_refraction->setChecked(true);

        Configuration->addWidget(TreeOptions);

        Spacer = new QSpacerItem(50, 50, QSizePolicy::Minimum, QSizePolicy::Maximum);

        Configuration->addItem(Spacer);

        RenderOptions = new QGroupBox(Widget);
        RenderOptions->setObjectName(QString::fromUtf8("RenderOptions"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RenderOptions->sizePolicy().hasHeightForWidth());
        RenderOptions->setSizePolicy(sizePolicy);
        RenderOptions->setMaximumSize(QSize(200, 80));
        RenderOptions->setBaseSize(QSize(0, 100));
        Label_NumFaces = new QLabel(RenderOptions);
        Label_NumFaces->setObjectName(QString::fromUtf8("Label_NumFaces"));
        Label_NumFaces->setGeometry(QRect(90, 10, 91, 17));
        Label_Faces = new QLabel(RenderOptions);
        Label_Faces->setObjectName(QString::fromUtf8("Label_Faces"));
        Label_Faces->setGeometry(QRect(10, 10, 67, 17));
        Label_Vertices = new QLabel(RenderOptions);
        Label_Vertices->setObjectName(QString::fromUtf8("Label_Vertices"));
        Label_Vertices->setGeometry(QRect(10, 30, 67, 17));
        Label_NumVertices = new QLabel(RenderOptions);
        Label_NumVertices->setObjectName(QString::fromUtf8("Label_NumVertices"));
        Label_NumVertices->setGeometry(QRect(90, 30, 91, 17));
        Label_Framerate = new QLabel(RenderOptions);
        Label_Framerate->setObjectName(QString::fromUtf8("Label_Framerate"));
        Label_Framerate->setGeometry(QRect(10, 60, 71, 17));
        Label_NumFramerate = new QLabel(RenderOptions);
        Label_NumFramerate->setObjectName(QString::fromUtf8("Label_NumFramerate"));
        Label_NumFramerate->setGeometry(QRect(90, 60, 91, 17));

        Configuration->addWidget(RenderOptions);


        horizontalLayout->addLayout(Configuration);

        MainWindow->setCentralWidget(Widget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 827, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionLoad_Specular);
        menuFile->addAction(actionLoad_Diffuse);

        retranslateUi(MainWindow);
        QObject::connect(glwidget, SIGNAL(SetFaces(QString)), Label_NumFaces, SLOT(setText(QString)));
        QObject::connect(glwidget, SIGNAL(SetVertices(QString)), Label_NumVertices, SLOT(setText(QString)));
        QObject::connect(glwidget, SIGNAL(SetFramerate(QString)), Label_NumFramerate, SLOT(setText(QString)));
        QObject::connect(radio_reflection, SIGNAL(clicked(bool)), glwidget, SLOT(SetReflection(bool)));
        QObject::connect(radio_brdf, SIGNAL(clicked(bool)), glwidget, SLOT(SetBRDF(bool)));
        QObject::connect(spin_f0b, SIGNAL(valueChanged(double)), glwidget, SLOT(SetFresnelB(double)));
        QObject::connect(spin_f0g, SIGNAL(valueChanged(double)), glwidget, SLOT(SetFresnelG(double)));
        QObject::connect(spin_f0r, SIGNAL(valueChanged(double)), glwidget, SLOT(SetFresnelR(double)));
        QObject::connect(radio_refraction, SIGNAL(clicked(bool)), glwidget, SLOT(SetRefraction(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load Model", nullptr));
        actionLoad_Specular->setText(QCoreApplication::translate("MainWindow", "Load Specular", nullptr));
        actionLoad_Diffuse->setText(QCoreApplication::translate("MainWindow", "Load Diffuse", nullptr));
        TreeOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
        radio_reflection->setText(QCoreApplication::translate("MainWindow", "Reflection", nullptr));
        radio_brdf->setText(QCoreApplication::translate("MainWindow", "Brdf", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "F0 R", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "F0 G", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "F0 B", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Geometry", nullptr));
        radio_refraction->setText(QCoreApplication::translate("MainWindow", "Refraction", nullptr));
        RenderOptions->setTitle(QString());
        Label_NumFaces->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Label_Faces->setText(QCoreApplication::translate("MainWindow", "Faces", nullptr));
        Label_Vertices->setText(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        Label_NumVertices->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Label_Framerate->setText(QCoreApplication::translate("MainWindow", "Framerate", nullptr));
        Label_NumFramerate->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
