cmake_minimum_required(VERSION 3.8)

project(POC_qml_module_example)

set(BIN_DIR ${CMAKE_BINARY_DIR}/output/bin)
set(LIB_DIR ${CMAKE_BINARY_DIR}/output/plugins)

# Add subdirectories
add_subdirectory(plugins/UiComponents)
add_subdirectory(MainApp)
