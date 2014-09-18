#include "morse.h"
#include "ui_morse.h"
#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->textBrowser, SIGNAL(textChanged()), this,
            SLOT(on_translateButton_clicked()));
    connect(ui->textBrowser, SIGNAL(selectionChanged()), this,
            SLOT(on_translateButton_clicked()));
}

Widget::~Widget()
{
    delete ui;
}

// load from file
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

// Translate to Morse Code
void Widget::on_translateButton_clicked()
{
    dataCoded.clear();
    dataDecoded = ui->textBrowser->toPlainText();
    if(!dataDecoded.isEmpty())
    {
        for(int i = 0; i < dataDecoded.size(); ++i)
        {
            if(isCharacterExistInAlphabet(dataDecoded.at(i)))
            {
                dataCoded.push_back(alphabet.getLetter()[dataDecoded.at(i).toLower()]);
                dataCoded.push_back(' ');
            }
            if(dataDecoded.at(i) == ' ')
            {
               dataCoded.push_back(' ');
               dataCoded.push_back(' ');
            }
        }
    }
    ui->textBrowser_2->setText(dataCoded);
}

// Checking charactor in alphabet
bool Widget::isCharacterExistInAlphabet(QChar character)
{

    if(alphabet.getLetter().contains(character.toLower()))
    {
        return true;
    }

    return false;
}
// save data to file
void Widget::saveToFile(const QString & dataToSave)
{
    QString fileOutputName =
            QFileDialog::getSaveFileName(this, tr("Save Decoded information"),
                                         tr("Text file: (*.txt)"));
    if(fileOutputName.isEmpty())
        return;
    else
    {
       QFile outputFile(fileOutputName);
       if(!outputFile.open(QIODevice::WriteOnly | QIODevice::Text))
       {
           QMessageBox::information(this, tr("Unable to open file"),
                                    outputFile.errorString());
           return;
       }
       QTextStream outputStream(&outputFile);
       outputStream << dataToSave;
       outputFile.close();
    }
}
// save Decoded text in file
void Widget::on_saveDecodedButton_clicked()
{
   saveToFile(dataDecoded);
}
// save Coded text in file
void Widget::on_saveCodedButton_clicked()
{
    saveToFile(dataCoded);
}
// exit from program button
void Widget::on_pushButton_clicked()
{
    QApplication::instance()->quit();
}
