#ifndef CLIENT_H
#define CLIENT_H
#pragma once
#include <QWidget>

namespace Ui {
class Client_;
}

class Client_ : public QWidget
{
    Q_OBJECT

public:
    explicit Client_(QWidget *parent = nullptr);
    ~Client_();

private:
    Ui::Client_ *ui;
};

#endif // CLIENT__H
