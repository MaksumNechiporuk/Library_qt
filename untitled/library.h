#pragma once


#include <QMainWindow>

namespace Ui {
class Library;
}

class Library : public QMainWindow
{
    Q_OBJECT

public:
    explicit Library(QWidget *parent = nullptr);
    ~Library();

private slots:
    void on_BookButton_clicked();

private:
    Ui::Library *ui;
};


