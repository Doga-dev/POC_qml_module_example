cmake_minimum_required(VERSION 3.8)

project(MainApp)

add_executable(${PROJECT_NAME}
    main.cpp
    qml.qrc
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    AUTORCC TRUE
    RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR}
)

find_package(Qt5 REQUIRED COMPONENTS Core Qml Quick)

# Add the UiComponents import path
set(QML_IMPORT_PATHS ${LIB_DIR}/UiComponents ${UiComponents_SOURCE_DIR}/components)

# Set the QML import paths for Qt Creator
set(CMAKE_PREFIX_PATH ${LIB_DIR}/UiComponents ${UiComponents_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Qml Qt5::Quick UiComponents)
