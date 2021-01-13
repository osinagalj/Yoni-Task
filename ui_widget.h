/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_ask;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *cara;
    QLabel *carasig;
    QPushButton *pushButton_presentacion;
    QPushButton *pushButton_tutorial;
    QLabel *label_tutorial;
    QLabel *label_fin;
    QLineEdit *lineEdit_login;
    QLabel *label_ingreseNombre;
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_login_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(900, 600);
        Widget->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        label_ask = new QLabel(Widget);
        label_ask->setObjectName(QStringLiteral("label_ask"));
        label_ask->setGeometry(QRect(90, 50, 651, 41));
        QFont font;
        font.setFamily(QStringLiteral("Berlin Sans FB Demi"));
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        label_ask->setFont(font);
        pushButton_0 = new QPushButton(Widget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setEnabled(true);
        pushButton_0->setGeometry(QRect(100, 120, 130, 110));
        pushButton_1 = new QPushButton(Widget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(630, 110, 130, 110));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 360, 130, 110));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(630, 360, 130, 110));
        cara = new QLabel(Widget);
        cara->setObjectName(QStringLiteral("cara"));
        cara->setGeometry(QRect(230, 190, 400, 200));
        carasig = new QLabel(Widget);
        carasig->setObjectName(QStringLiteral("carasig"));
        carasig->setGeometry(QRect(350, 140, 201, 170));
        pushButton_presentacion = new QPushButton(Widget);
        pushButton_presentacion->setObjectName(QStringLiteral("pushButton_presentacion"));
        pushButton_presentacion->setGeometry(QRect(340, 360, 151, 71));
        pushButton_tutorial = new QPushButton(Widget);
        pushButton_tutorial->setObjectName(QStringLiteral("pushButton_tutorial"));
        pushButton_tutorial->setGeometry(QRect(340, 360, 151, 71));
        label_tutorial = new QLabel(Widget);
        label_tutorial->setObjectName(QStringLiteral("label_tutorial"));
        label_tutorial->setGeometry(QRect(130, 70, 550, 250));
        label_fin = new QLabel(Widget);
        label_fin->setObjectName(QStringLiteral("label_fin"));
        label_fin->setGeometry(QRect(250, 120, 401, 91));
        QFont font1;
        font1.setPointSize(21);
        font1.setBold(true);
        font1.setWeight(75);
        label_fin->setFont(font1);
        lineEdit_login = new QLineEdit(Widget);
        lineEdit_login->setObjectName(QStringLiteral("lineEdit_login"));
        lineEdit_login->setGeometry(QRect(330, 220, 191, 31));
        label_ingreseNombre = new QLabel(Widget);
        label_ingreseNombre->setObjectName(QStringLiteral("label_ingreseNombre"));
        label_ingreseNombre->setGeometry(QRect(370, 150, 121, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Berlin Sans FB"));
        font2.setPointSize(30);
        font2.setBold(true);
        font2.setWeight(75);
        label_ingreseNombre->setFont(font2);
        label_ingreseNombre->setFrameShadow(QFrame::Plain);
        pushButton_login = new QPushButton(Widget);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(340, 360, 151, 71));
        lineEdit_login_2 = new QLineEdit(Widget);
        lineEdit_login_2->setObjectName(QStringLiteral("lineEdit_login_2"));
        lineEdit_login_2->setGeometry(QRect(330, 270, 191, 31));
        label_tutorial->raise();
        label_fin->raise();
        cara->raise();
        pushButton_tutorial->raise();
        pushButton_presentacion->raise();
        pushButton_0->raise();
        label_ask->raise();
        pushButton_1->raise();
        pushButton_3->raise();
        carasig->raise();
        pushButton_2->raise();
        lineEdit_login->raise();
        label_ingreseNombre->raise();
        pushButton_login->raise();
        lineEdit_login_2->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label_ask->setText(QApplication::translate("Widget", "TextoPregunta", Q_NULLPTR));
        pushButton_0->setText(QString());
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        cara->setText(QString());
        carasig->setText(QString());
        pushButton_presentacion->setText(QString());
        pushButton_tutorial->setText(QString());
        label_tutorial->setText(QString());
        label_fin->setText(QApplication::translate("Widget", "EL JUEGO HA TERMINADO!", Q_NULLPTR));
        lineEdit_login->setPlaceholderText(QApplication::translate("Widget", "Nombre", Q_NULLPTR));
        label_ingreseNombre->setText(QApplication::translate("Widget", "Login", Q_NULLPTR));
        pushButton_login->setText(QString());
        lineEdit_login_2->setPlaceholderText(QApplication::translate("Widget", "Apellido", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
