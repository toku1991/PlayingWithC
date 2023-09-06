cmake_minimum_required(VERSION 3.26)
project(untitled C)

set(CMAKE_C_STANDARD 23)

add_executable(untitled main.c
        Resistance.c
        Power.c
        Voltage.c
        Amperage.c
        Charge.c
        Capacitance.c
)
