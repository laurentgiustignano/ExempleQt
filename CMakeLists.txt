cmake_minimum_required(VERSION 3.23)
project(ExempleQt)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "")
set(CMAKE_PREFIX_PATH "/Users/laurent/Qt/6.1.3/macos/lib/cmake")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(ExempleQt main.cpp demo.cpp demo.h)
target_link_libraries(ExempleQt
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

