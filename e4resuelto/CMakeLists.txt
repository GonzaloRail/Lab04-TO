cmake_minimum_required(VERSION 3.16)

project(e4resuelto LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(e4resuelto main.cpp)

include(GNUInstallDirs)
install(TARGETS e4resuelto
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
