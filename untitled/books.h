#pragma once

#include <QDialog>



namespace Ui {
class Books;
}

class Books : public QDialog
{
    Q_OBJECT

public:
    explicit Books(QWidget *parent = nullptr);
    ~Books();

private slots:
    void on_addBook_clicked();

    void on_DeleteButton_clicked();

    void on_SearchButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Books *ui;
};

