#include "model.h"

Model::Model(QObject *parent) :
    QObject(parent)
{
}

QString Model::processText(QString text){
    return "="+text+"=";
}
