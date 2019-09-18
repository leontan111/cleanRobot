/********************************************************************************
** Form generated from reading UI file 'systemd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMD_H
#define UI_SYSTEMD_H

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

class Ui_SystemD
{
public:
    QGroupBox *titleGroupBox;
    QPushButton *returnMoreButton;
    QLabel *titleLabel;
    QPushButton *shutdownButton;
    QPushButton *rebootButton;
    QPushButton *aboutButton;

    void setupUi(QDialog *SystemD)
    {
        if (SystemD->objectName().isEmpty())
            SystemD->setObjectName(QStringLiteral("SystemD"));
        SystemD->resize(1024, 768);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        SystemD->setFont(font);
        SystemD->setStyleSheet(QLatin1String("#SystemD\n"
"{\n"
"	border-image: url(:/new/prefix1/image/systemimag/back_board.png);\n"
"}\n"
""));
        titleGroupBox = new QGroupBox(SystemD);
        titleGroupBox->setObjectName(QStringLiteral("titleGroupBox"));
        titleGroupBox->setGeometry(QRect(20, 10, 980, 80));
        titleGroupBox->setFont(font);
        titleGroupBox->setStyleSheet(QLatin1String("#titleGroupBox\n"
"{\n"
"border-image: url(:/new/prefix1/image/systemimag/back_board1.png);\n"
"}"));
        titleGroupBox->setFlat(false);
        returnMoreButton = new QPushButton(titleGroupBox);
        returnMoreButton->setObjectName(QStringLiteral("returnMoreButton"));
        returnMoreButton->setGeometry(QRect(26, 27, 16, 26));
        returnMoreButton->setFont(font);
        returnMoreButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/systemimag/return.png);"));
        titleLabel = new QLabel(titleGroupBox);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(420, 11, 101, 58));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(35);
        font1.setBold(true);
        font1.setWeight(75);
        titleLabel->setFont(font1);
        titleLabel->setStyleSheet(QStringLiteral("color: rgb(76, 76, 76);"));
        titleLabel->setFrameShape(QFrame::NoFrame);
        titleLabel->setFrameShadow(QFrame::Plain);
        titleLabel->setLineWidth(0);
        shutdownButton = new QPushButton(SystemD);
        shutdownButton->setObjectName(QStringLiteral("shutdownButton"));
        shutdownButton->setGeometry(QRect(362, 252, 300, 70));
        shutdownButton->setFont(font);
        shutdownButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/systemimag/shut_down.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/systemimag/shut_down.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/systemimag/shut_down1.png)}"));
        rebootButton = new QPushButton(SystemD);
        rebootButton->setObjectName(QStringLiteral("rebootButton"));
        rebootButton->setGeometry(QRect(362, 352, 300, 70));
        rebootButton->setFont(font);
        rebootButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/systemimag/reset.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/systemimag/reset.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/systemimag/reset1.png)}"));
        aboutButton = new QPushButton(SystemD);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        aboutButton->setGeometry(QRect(362, 452, 300, 70));
        aboutButton->setFont(font);
        aboutButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/new/prefix1/image/systemimag/as.png)}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/systemimag/as.png)}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/systemimag/as1.png)}"));

        retranslateUi(SystemD);

        QMetaObject::connectSlotsByName(SystemD);
    } // setupUi

    void retranslateUi(QDialog *SystemD)
    {
        SystemD->setWindowTitle(QApplication::translate("SystemD", "Dialog", Q_NULLPTR));
        titleGroupBox->setTitle(QString());
        returnMoreButton->setText(QString());
        titleLabel->setText(QApplication::translate("SystemD", "\347\263\273\347\273\237", Q_NULLPTR));
        shutdownButton->setText(QString());
        rebootButton->setText(QString());
        aboutButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SystemD: public Ui_SystemD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMD_H
