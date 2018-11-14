/********************************************************************************
** Form generated from reading UI file 'books.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKS_H
#define UI_BOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Books
{
public:
    QLabel *fon;
    QTableWidget *tableWidget;
    QPushButton *addBook;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *nameBook;
    QLineEdit *nameAuthor;
    QLineEdit *SurnammeAuthor;
    QLabel *label_6;
    QLineEdit *genreBook;
    QPushButton *DeleteButton;
    QPushButton *SearchButton;
    QSpinBox *numberSpinBox;
    QSpinBox *yearBox;
    QPushButton *issuing_books;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Books)
    {
        if (Books->objectName().isEmpty())
            Books->setObjectName(QStringLiteral("Books"));
        Books->resize(1181, 679);
        fon = new QLabel(Books);
        fon->setObjectName(QStringLiteral("fon"));
        fon->setGeometry(QRect(40, -40, 1799, 900));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fon->sizePolicy().hasHeightForWidth());
        fon->setSizePolicy(sizePolicy);
        fon->setPixmap(QPixmap(QString::fromUtf8("../fon.jpg")));
        tableWidget = new QTableWidget(Books);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 771, 681));
        addBook = new QPushButton(Books);
        addBook->setObjectName(QStringLiteral("addBook"));
        addBook->setGeometry(QRect(800, 450, 331, 81));
        QFont font;
        font.setPointSize(15);
        addBook->setFont(font);
        label = new QLabel(Books);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(830, 110, 101, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label_2 = new QLabel(Books);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(830, 230, 151, 31));
        label_2->setFont(font1);
        label_5 = new QLabel(Books);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(830, 420, 81, 21));
        label_5->setFont(font1);
        label_4 = new QLabel(Books);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(830, 360, 121, 21));
        label_4->setFont(font1);
        label_3 = new QLabel(Books);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(830, 290, 131, 31));
        label_3->setFont(font1);
        nameBook = new QLineEdit(Books);
        nameBook->setObjectName(QStringLiteral("nameBook"));
        nameBook->setGeometry(QRect(1000, 110, 113, 20));
        nameAuthor = new QLineEdit(Books);
        nameAuthor->setObjectName(QStringLiteral("nameAuthor"));
        nameAuthor->setGeometry(QRect(1000, 230, 113, 20));
        SurnammeAuthor = new QLineEdit(Books);
        SurnammeAuthor->setObjectName(QStringLiteral("SurnammeAuthor"));
        SurnammeAuthor->setGeometry(QRect(1000, 300, 113, 20));
        label_6 = new QLabel(Books);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(830, 130, 161, 81));
        label_6->setFont(font1);
        genreBook = new QLineEdit(Books);
        genreBook->setObjectName(QStringLiteral("genreBook"));
        genreBook->setGeometry(QRect(1000, 160, 113, 20));
        DeleteButton = new QPushButton(Books);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setGeometry(QRect(800, 530, 331, 71));
        DeleteButton->setFont(font);
        SearchButton = new QPushButton(Books);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        SearchButton->setGeometry(QRect(800, 600, 331, 71));
        SearchButton->setFont(font);
        numberSpinBox = new QSpinBox(Books);
        numberSpinBox->setObjectName(QStringLiteral("numberSpinBox"));
        numberSpinBox->setGeometry(QRect(1000, 420, 121, 22));
        numberSpinBox->setMinimum(-1);
        numberSpinBox->setMaximum(999999999);
        numberSpinBox->setValue(-1);
        yearBox = new QSpinBox(Books);
        yearBox->setObjectName(QStringLiteral("yearBox"));
        yearBox->setGeometry(QRect(1000, 360, 121, 22));
        yearBox->setMinimum(-1);
        yearBox->setMaximum(999999999);
        yearBox->setValue(-1);
        issuing_books = new QPushButton(Books);
        issuing_books->setObjectName(QStringLiteral("issuing_books"));
        issuing_books->setGeometry(QRect(790, 20, 181, 51));
        QFont font2;
        font2.setPointSize(20);
        issuing_books->setFont(font2);
        spinBox_2 = new QSpinBox(Books);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(970, 300, 42, 22));
        spinBox_3 = new QSpinBox(Books);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(1010, 300, 42, 22));
        spinBox_4 = new QSpinBox(Books);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(1050, 300, 61, 22));
        spinBox_4->setMaximum(999999999);
        pushButton_2 = new QPushButton(Books);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(800, 600, 331, 71));
        QFont font3;
        font3.setPointSize(19);
        pushButton_2->setFont(font3);
        pushButton_3 = new QPushButton(Books);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(860, 490, 211, 71));
        pushButton_3->setFont(font2);

        retranslateUi(Books);

        QMetaObject::connectSlotsByName(Books);
    } // setupUi

    void retranslateUi(QDialog *Books)
    {
        Books->setWindowTitle(QApplication::translate("Books", "Dialog", nullptr));
        fon->setText(QString());
        addBook->setText(QApplication::translate("Books", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\320\270 \320\272\320\275\320\270\320\263\321\203", nullptr));
        label->setText(QApplication::translate("Books", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\235\320\260\320\267\320\262\320\260 \320\272\320\275\320\270\320\263\320\270</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Books", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\206\320\274'\321\217 \320\260\320\262\321\202\320\276\321\200\320\260</span></p><p><br/></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("Books", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Books", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\240\321\226\320\272 \320\262\320\270\320\264\320\260\320\275\320\275\321\217</span></p><p><br/></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Books", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265 \320\260\320\262\321\202\320\276\321\200\320\260</span></p></body></html>", nullptr));
        nameBook->setText(QString());
        label_6->setText(QApplication::translate("Books", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\226\320\260\320\275\321\200 \320\272\320\275\320\270\320\263\320\270</span></p></body></html>", nullptr));
        DeleteButton->setText(QApplication::translate("Books", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", nullptr));
        SearchButton->setText(QApplication::translate("Books", "\320\237\320\276\321\210\321\203\320\272", nullptr));
        issuing_books->setText(QApplication::translate("Books", "\320\222\320\270\320\264\320\260\321\207\320\260 \320\272\320\275\320\270\320\263", nullptr));
        pushButton_2->setText(QApplication::translate("Books", "\320\237\320\265\321\200\320\265\320\262\321\226\321\200\320\272\320\260 \320\275\320\260\321\217\320\262\320\275\320\276\321\201\321\202\321\226 \320\272\320\275\320\270\320\263\320\270", nullptr));
        pushButton_3->setText(QApplication::translate("Books", " \320\222\320\270\320\264\320\260\321\202\320\270 \320\272\320\275\320\270\320\263\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Books: public Ui_Books {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKS_H
