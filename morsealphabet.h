#ifndef MORSEALPHABET_H
#define MORSEALPHABET_H
#include <QMap>
#include <QString>
#include <QChar>

typedef QMap<QChar, QString> symbol;
class MorseAlphabet
{
    symbol letter_;
    symbol number_;
   public:
    MorseAlphabet();
};

#endif // MORSEALPHABET_H
