# POC_qml_module_example
POC to get a project with a graphic components module using Qt5.15 and CMAKE


This version works but Qt Creator (v13.0.1) doesn't accept the "QML_IMPORT_PATH" setting I defined. I need to add an "import" statement in the QML files but this one produce an error at runtime.

Next steps:
- Add a more complexe screen in the "UiComponents" library with its backend class to make some data manipulations
- Add a new shared library:
    - loaded dynamicaly by the main application
    - with its own graphic components
    - using the "UiComponents" library
    - pushed in another thread