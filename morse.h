#ifndef MORSE_H
#define MORSE_H

#include <QWidget>
#include "morsealphabet.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void printData(){}
    bool isCharacterExistInAlphabet(QChar character);
    void saveToFile(const QString &dataToSave);

private slots:
    void on_loadButton_clicked();
    void on_translateButton_clicked();
    void on_saveDecodedButton_clicked();

    void on_saveCodedButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    MorseAlphabet alphabet;

    QString dataCoded;
    QString dataDecoded;

    //QString fileForOpenName_;
};

#endif // MORSE_H
