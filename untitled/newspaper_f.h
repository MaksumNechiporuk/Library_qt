#pragma once

#include <QDialog>

namespace Ui {
class NewsPaper_f;
}

class NewsPaper_f : public QDialog
{
    Q_OBJECT

public:
    explicit NewsPaper_f(QWidget *parent = nullptr);
    ~NewsPaper_f();

private:
    Ui::NewsPaper_f *ui;
};


