#ifndef MORSEALPHABET_H
#define MORSEALPHABET_H
#include <QMap>
#include <QString>
#include <QChar>

typedef QMap<QChar, QString> symbol;
class MorseAlphabet
{
    symbol letter_;    
   public:
    MorseAlphabet();
    const symbol &getLetter() const { return letter_;}    
};


#endif // MORSEALPHABET_H
