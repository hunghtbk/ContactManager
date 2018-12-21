#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include <QQmlContext>

#include "contactmodel.h"
#include "server.h"
#include "datamodel.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    Server *server = new Server;
    //register model to qml
//    qmlRegisterType<ContactModel>("contact", 1, 0, "ContactModel");

    ContactModel *listModel = new ContactModel;
    QQmlApplicationEngine engine;
    QQmlContext *context = engine.rootContext();
    context->setContextProperty("server", server);
    context->setContextProperty("listModel", listModel);
    engine.load(QUrl("ContactQML/ContactQML.qml"));
    QObject::connect(server, SIGNAL(addData(QString, QString)), listModel, SLOT(inserted(QString, QString)));

    return app.exec();
}
