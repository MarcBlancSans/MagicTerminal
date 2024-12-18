cmake_minimum_required(VERSION 3.5.0)
project(MagicTerminal VERSION 0.1.0 LANGUAGES C CXX)

find_package(PkgConfig REQUIRED)
pkg_check_modules(NOTCURSES REQUIRED notcurses)

include_directories(${NOTCURSES_INCLUDE_DIRS})

add_executable(MagicTerminal main.cpp)

target_link_libraries(MagicTerminal PRIVATE ${NOTCURSES_LIBRARIES})

target_compile_options(MagicTerminal PRIVATE ${NOTCURSES_CFLAGS_OTHER})