#include "controller.h"

Controller::Controller(MainWindow& view, Model& model) :
    QObject(0),
    m_view(view),
    m_model(model)
{
}

void Controller::setText(QString text)
{
    QString res=m_model.processText(text);
    m_view.setText(res);
}
