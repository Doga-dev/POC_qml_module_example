#ifndef BECONFIGSCREEN_H
#define BECONFIGSCREEN_H

#include <QQuickItem>

class BeConfigScreen : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)

public:
    BeConfigScreen(QQuickItem *parent = nullptr);

    QString title() const;
    void setTitle(const QString &title);

signals:
    void titleChanged();

private:
    QString m_title;
};

#endif // BECONFIGSCREEN_H

