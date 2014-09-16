#include "morse.h"
#include "ui_morse.h"
#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_loadButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "File Path",
                                                    "", "Text Files(*.txt)");
    if(!fileName.isEmpty())
    {
        QFile file(fileName);
        if(!file.open(QIODevice::ReadOnly)) return;
        ui->textBrowser->setText(file.readAll());
    }


}
