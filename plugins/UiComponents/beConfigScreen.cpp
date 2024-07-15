#include "beConfigScreen.h"

BeConfigScreen::BeConfigScreen(QQuickItem *parent)
    : QQuickItem(parent)
{
}

QString BeConfigScreen::title() const
{
    return m_title;
}

void BeConfigScreen::setTitle(const QString &title)
{
    if (m_title == title)
        return;

    m_title = title;
    emit titleChanged();
}

