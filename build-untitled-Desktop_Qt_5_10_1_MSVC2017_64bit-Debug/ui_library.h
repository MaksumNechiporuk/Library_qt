/********************************************************************************
** Form generated from reading UI file 'library.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_H
#define UI_LIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Library
{
public:
    QWidget *centralWidget;
    QLabel *fon;
    QPushButton *BookButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *Library)
    {
        if (Library->objectName().isEmpty())
            Library->setObjectName(QStringLiteral("Library"));
        Library->resize(1103, 640);
        centralWidget = new QWidget(Library);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        fon = new QLabel(centralWidget);
        fon->setObjectName(QStringLiteral("fon"));
        fon->setGeometry(QRect(-10, -60, 1171, 671));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fon->sizePolicy().hasHeightForWidth());
        fon->setSizePolicy(sizePolicy);
        fon->setPixmap(QPixmap(QString::fromUtf8("../fon.jpg")));
        BookButton = new QPushButton(centralWidget);
        BookButton->setObjectName(QStringLiteral("BookButton"));
        BookButton->setGeometry(QRect(10, 20, 191, 61));
        QFont font;
        font.setFamily(QStringLiteral("Pristina"));
        font.setPointSize(22);
        BookButton->setFont(font);
        Library->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Library);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1103, 21));
        Library->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Library);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Library->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(Library);
        QObject::connect(BookButton, SIGNAL(clicked()), fon, SLOT(show()));

        QMetaObject::connectSlotsByName(Library);
    } // setupUi

    void retranslateUi(QMainWindow *Library)
    {
        Library->setWindowTitle(QApplication::translate("Library", "Library", nullptr));
        fon->setText(QString());
        BookButton->setText(QApplication::translate("Library", "\320\232\320\275\320\270\320\263\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Library: public Ui_Library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_H
