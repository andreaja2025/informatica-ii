cmake_minimum_required(VERSION 3.16)

project(problem_par LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(problem_par main.cpp)

include(GNUInstallDirs)
install(TARGETS problem_par
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
