#ifndef MODEL_H
#define MODEL_H

#include <QObject>

class Model : public QObject
{
    Q_OBJECT
public:
    explicit Model(QObject *parent = 0);

    QString processText(QString text);
signals:

public slots:

};

#endif // MODEL_H
