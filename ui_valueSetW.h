/********************************************************************************
** Form generated from reading UI file 'valueSetW.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALUESETW_H
#define UI_VALUESETW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ValueSetW
{
public:
    QGroupBox *titleGroupBox;
    QPushButton *returnParentButton;
    QLabel *titleLable;
    QGroupBox *groupBox;
    QPushButton *addButton;
    QPushButton *lessButton;
    QPushButton *okButton;
    QLabel *tipLabel;
    QLabel *dataLabel;

    void setupUi(QDialog *ValueSetW)
    {
        if (ValueSetW->objectName().isEmpty())
            ValueSetW->setObjectName(QStringLiteral("ValueSetW"));
        ValueSetW->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        ValueSetW->setFont(font);
        ValueSetW->setStyleSheet(QLatin1String("#ValueSetW\n"
"{\n"
"	border-image: url(:/new/prefix1/image/locktimeimag/back_board.png);\n"
"}"));
        titleGroupBox = new QGroupBox(ValueSetW);
        titleGroupBox->setObjectName(QStringLiteral("titleGroupBox"));
        titleGroupBox->setGeometry(QRect(20, 20, 980, 80));
        titleGroupBox->setFont(font);
        titleGroupBox->setStyleSheet(QLatin1String("#titleGroupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/locktimeimag/back_board1.png);\n"
"}"));
        titleGroupBox->setFlat(false);
        returnParentButton = new QPushButton(titleGroupBox);
        returnParentButton->setObjectName(QStringLiteral("returnParentButton"));
        returnParentButton->setGeometry(QRect(26, 27, 16, 26));
        returnParentButton->setFont(font);
        returnParentButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/locktimeimag/return.png);"));
        titleLable = new QLabel(titleGroupBox);
        titleLable->setObjectName(QStringLiteral("titleLable"));
        titleLable->setGeometry(QRect(394, 11, 191, 58));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(35);
        font1.setBold(true);
        font1.setWeight(75);
        titleLable->setFont(font1);
        titleLable->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        titleLable->setFrameShape(QFrame::NoFrame);
        titleLable->setFrameShadow(QFrame::Plain);
        titleLable->setLineWidth(0);
        groupBox = new QGroupBox(ValueSetW);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(322, 237, 380, 330));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QLatin1String("#groupBox\n"
"{\n"
"	border-image: url(:/new/prefix1/image/locktimeimag/board.png);\n"
"}"));
        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(58, 120, 60, 60));
        addButton->setFont(font);
        addButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/locktimeimag/pbut_add.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/locktimeimag/pbut_add.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/locktimeimag/pbut_add1.png)}"));
        lessButton = new QPushButton(groupBox);
        lessButton->setObjectName(QStringLiteral("lessButton"));
        lessButton->setGeometry(QRect(262, 120, 60, 60));
        lessButton->setFont(font);
        lessButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/locktimeimag/pbut_less.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/locktimeimag/pbut_less.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/locktimeimag/pbut_less1.png)}"));
        okButton = new QPushButton(groupBox);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(90, 240, 200, 60));
        okButton->setFont(font);
        okButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/locktimeimag/ok.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/locktimeimag/ok.png)}\n"
""));
        tipLabel = new QLabel(groupBox);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        tipLabel->setGeometry(QRect(120, 30, 141, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        tipLabel->setFont(font2);
        tipLabel->setStyleSheet(QStringLiteral("color: rgb(0, 204, 255);"));
        dataLabel = new QLabel(groupBox);
        dataLabel->setObjectName(QStringLiteral("dataLabel"));
        dataLabel->setGeometry(QRect(130, 120, 120, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(24);
        dataLabel->setFont(font3);
        dataLabel->setAutoFillBackground(false);
        dataLabel->setStyleSheet(QLatin1String("#label_2\n"
"{\n"
"	border-image: url(:/new/prefix1/image/locktimeimag/data_board.png);\n"
"}\n"
""));
        dataLabel->setTextFormat(Qt::AutoText);
        dataLabel->setScaledContents(false);
        dataLabel->setAlignment(Qt::AlignCenter);
        dataLabel->setOpenExternalLinks(false);

        retranslateUi(ValueSetW);

        QMetaObject::connectSlotsByName(ValueSetW);
    } // setupUi

    void retranslateUi(QDialog *ValueSetW)
    {
        ValueSetW->setWindowTitle(QApplication::translate("ValueSetW", "Dialog", Q_NULLPTR));
        titleGroupBox->setTitle(QString());
        returnParentButton->setText(QString());
        titleLable->setText(QApplication::translate("ValueSetW", "\351\224\201\345\261\217\346\227\266\351\227\264", Q_NULLPTR));
        groupBox->setTitle(QString());
        addButton->setText(QString());
        lessButton->setText(QString());
        okButton->setText(QString());
        tipLabel->setText(QApplication::translate("ValueSetW", "\345\215\225\344\275\215\357\274\232/\345\210\206\351\222\237", Q_NULLPTR));
        dataLabel->setText(QApplication::translate("ValueSetW", "4", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ValueSetW: public Ui_ValueSetW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALUESETW_H
