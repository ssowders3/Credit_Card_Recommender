cmake_minimum_required(VERSION 2.8.11)

project(testproject)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)

set(SOURCES
  src/main.cpp
  src/mainwindow.cpp
  ../../Parser.cpp
  ../../Parser.h
  ../../Card.cpp
  ../../Card.h
)

set(FORMS
  forms/mainwindow.ui
)

set(RESOURCES resources.qrc )

qt5_wrap_ui(FORM_H ${FORMS})

# Tell CMake to create the helloworld executable
add_executable(creditCardGui ${SOURCES} ${FORM_H})

# Use the Widgets module from Qt 5.
target_link_libraries(creditCardGui Qt5::Widgets)


