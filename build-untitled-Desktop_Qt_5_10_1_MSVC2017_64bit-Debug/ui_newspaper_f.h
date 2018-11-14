/********************************************************************************
** Form generated from reading UI file 'newspaper_f.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSPAPER_F_H
#define UI_NEWSPAPER_F_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewsPaper_f
{
public:
    QLabel *label;
    QLineEdit *nameAuthor;
    QSpinBox *yearBox;
    QLabel *label_2;
    QLabel *label_6;
    QTableWidget *tableWidget;
    QPushButton *SearchNewspaper;
    QLineEdit *SurnammeAuthor;
    QLabel *label_3;
    QLineEdit *nameBook;
    QLabel *label_4;
    QPushButton *DeleteNewspaper;
    QLabel *label_5;
    QLineEdit *genreBook;
    QSpinBox *spinBox;
    QPushButton *addNewspaper;
    QLabel *label_7;

    void setupUi(QWidget *NewsPaper_f)
    {
        if (NewsPaper_f->objectName().isEmpty())
            NewsPaper_f->setObjectName(QStringLiteral("NewsPaper_f"));
        NewsPaper_f->resize(1216, 707);
        label = new QLabel(NewsPaper_f);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1221, 841));
        label->setPixmap(QPixmap(QString::fromUtf8("fon.jpg")));
        nameAuthor = new QLineEdit(NewsPaper_f);
        nameAuthor->setObjectName(QStringLiteral("nameAuthor"));
        nameAuthor->setGeometry(QRect(1020, 240, 113, 20));
        yearBox = new QSpinBox(NewsPaper_f);
        yearBox->setObjectName(QStringLiteral("yearBox"));
        yearBox->setGeometry(QRect(1020, 370, 121, 22));
        yearBox->setMinimum(-1);
        yearBox->setMaximum(999999999);
        yearBox->setValue(-1);
        label_2 = new QLabel(NewsPaper_f);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(850, 120, 101, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_6 = new QLabel(NewsPaper_f);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(850, 140, 161, 81));
        label_6->setFont(font);
        tableWidget = new QTableWidget(NewsPaper_f);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 10, 771, 681));
        SearchNewspaper = new QPushButton(NewsPaper_f);
        SearchNewspaper->setObjectName(QStringLiteral("SearchNewspaper"));
        SearchNewspaper->setGeometry(QRect(820, 610, 331, 71));
        QFont font1;
        font1.setPointSize(15);
        SearchNewspaper->setFont(font1);
        SurnammeAuthor = new QLineEdit(NewsPaper_f);
        SurnammeAuthor->setObjectName(QStringLiteral("SurnammeAuthor"));
        SurnammeAuthor->setGeometry(QRect(1020, 310, 113, 20));
        label_3 = new QLabel(NewsPaper_f);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(850, 240, 151, 31));
        label_3->setFont(font);
        nameBook = new QLineEdit(NewsPaper_f);
        nameBook->setObjectName(QStringLiteral("nameBook"));
        nameBook->setGeometry(QRect(1020, 120, 113, 20));
        label_4 = new QLabel(NewsPaper_f);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(850, 300, 131, 31));
        label_4->setFont(font);
        DeleteNewspaper = new QPushButton(NewsPaper_f);
        DeleteNewspaper->setObjectName(QStringLiteral("DeleteNewspaper"));
        DeleteNewspaper->setGeometry(QRect(820, 540, 331, 71));
        DeleteNewspaper->setFont(font1);
        label_5 = new QLabel(NewsPaper_f);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(850, 430, 81, 21));
        label_5->setFont(font);
        genreBook = new QLineEdit(NewsPaper_f);
        genreBook->setObjectName(QStringLiteral("genreBook"));
        genreBook->setGeometry(QRect(1020, 170, 113, 20));
        spinBox = new QSpinBox(NewsPaper_f);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(1020, 430, 121, 22));
        spinBox->setMinimum(-1);
        spinBox->setMaximum(999999999);
        spinBox->setValue(-1);
        addNewspaper = new QPushButton(NewsPaper_f);
        addNewspaper->setObjectName(QStringLiteral("addNewspaper"));
        addNewspaper->setGeometry(QRect(820, 460, 331, 81));
        addNewspaper->setFont(font1);
        label_7 = new QLabel(NewsPaper_f);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(850, 370, 121, 21));
        label_7->setFont(font);

        retranslateUi(NewsPaper_f);

        QMetaObject::connectSlotsByName(NewsPaper_f);
    } // setupUi

    void retranslateUi(QWidget *NewsPaper_f)
    {
        NewsPaper_f->setWindowTitle(QApplication::translate("NewsPaper_f", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("NewsPaper_f", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\235\320\260\320\267\320\262\320\260 \320\272\320\275\320\270\320\263\320\270</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("NewsPaper_f", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\226\320\260\320\275\321\200 \320\272\320\275\320\270\320\263\320\270</span></p></body></html>", nullptr));
        SearchNewspaper->setText(QApplication::translate("NewsPaper_f", "\320\237\320\276\321\210\321\203\320\272", nullptr));
        label_3->setText(QApplication::translate("NewsPaper_f", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\206\320\274'\321\217 \320\260\320\262\321\202\320\276\321\200\320\260</span></p><p><br/></p></body></html>", nullptr));
        nameBook->setText(QString());
        label_4->setText(QApplication::translate("NewsPaper_f", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265 \320\260\320\262\321\202\320\276\321\200\320\260</span></p></body></html>", nullptr));
        DeleteNewspaper->setText(QApplication::translate("NewsPaper_f", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", nullptr));
        label_5->setText(QApplication::translate("NewsPaper_f", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214</span></p></body></html>", nullptr));
        addNewspaper->setText(QApplication::translate("NewsPaper_f", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\320\270 \320\263\320\260\320\267\320\265\321\202\321\203", nullptr));
        label_7->setText(QApplication::translate("NewsPaper_f", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\240\321\226\320\272 \320\262\320\270\320\264\320\260\320\275\320\275\321\217</span></p><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewsPaper_f: public Ui_NewsPaper_f {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSPAPER_F_H
