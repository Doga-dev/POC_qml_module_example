#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    // Add import path for custom QML module
    // engine.addImportPath("qrc:/plugins");
    // engine.addImportPath("qrc:/components");
    // engine.addImportPath("qrc:/UiComponents");
    engine.addImportPath(QCoreApplication::applicationDirPath() + QStringLiteral("/../plugins"));
    engine.addImportPath(QCoreApplication::applicationDirPath() + QStringLiteral("/../plugins/UiComponents"));
    engine.addImportPath(QCoreApplication::applicationDirPath() + QStringLiteral("/../plugins/UiComponents/components"));
    // engine.addImportPath(QCoreApplication::applicationDirPath() + QStringLiteral("/../UiComponents"));
    // engine.addImportPath(QCoreApplication::applicationDirPath() + QStringLiteral("/plugins/UiComponents/components"));

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

