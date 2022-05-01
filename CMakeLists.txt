cmake_minimum_required(VERSION 3.10)

project (PuntoFlotante)

set (CMAKE_CXX_STANDARD 14)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")


set (SOURCE_FILES
    tools.cpp
    doubleToBinary.cpp
    floatToBinary.cpp
    floatToDouble.cpp
    main.cpp
    )

set (HEADER_FILES
    tools.h
    doubleToBinary.h
    floatToBinary.h
    floatToDouble.h
)

add_executable (program ${SOURCE_FILES} ${LIB_FILES} ${HEADER_FILES})
