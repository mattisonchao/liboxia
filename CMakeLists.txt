cmake_minimum_required(VERSION 3.16)

project(liboxia)

include_directories(./include)

add_library(liboxia src/oxia.c
        include/oxia.h)