#include "Plugin.h"
#include "beConfigScreen.h"

#include <qqml.h>

void UiComponentsPlugin::registerTypes(const char *uri)
{
    // @uri UiComponents
    qmlRegisterType<BeConfigScreen>(uri, 1, 0, "BeConfigScreen");
}
