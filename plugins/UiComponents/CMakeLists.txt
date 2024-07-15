cmake_minimum_required(VERSION 3.8)

project(UiComponents)

add_library(${PROJECT_NAME} SHARED
    beConfigScreen.cpp
    beConfigScreen.h
    Plugin.cpp
    Plugin.h
    UiComponents.qrc
)

set(DEST_DIR ${LIB_DIR}/${PROJECT_NAME})

set_target_properties(${PROJECT_NAME} PROPERTIES
    AUTOMOC TRUE
    LIBRARY_OUTPUT_DIRECTORY ${DEST_DIR}
)

find_package(Qt5 REQUIRED COMPONENTS Core Qml Quick)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Qml Qt5::Quick)

# Copy qmldir and QML files to the destination directory
file(GLOB QML_FILES ${CMAKE_CURRENT_SOURCE_DIR}/components/*.qml)
foreach(QML_FILE ${QML_FILES})
    get_filename_component(QML_FILE_NAME ${QML_FILE} NAME)
    add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy "${QML_FILE}" "${DEST_DIR}/components/${QML_FILE_NAME}"
        COMMENT "Copy ${QML_FILE_NAME}"
    )
endforeach()

add_custom_command(
    TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy "${CMAKE_CURRENT_SOURCE_DIR}/qmldir" "${DEST_DIR}/qmldir"
    COMMENT "Copy qmldir"
)
