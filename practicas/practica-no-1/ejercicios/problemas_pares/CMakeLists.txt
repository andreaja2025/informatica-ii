cmake_minimum_required(VERSION 3.16)

project(problemas_pares LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(problemas_pares main.cpp)

include(GNUInstallDirs)
install(TARGETS problemas_pares
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)