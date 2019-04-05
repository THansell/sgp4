CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(SGP4)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
else()
    message(SEND_ERROR "The compiler ${CMAKE_CXX_COMPILER} doesnt support C++11.") 
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")

include_directories(libsgp4)
include_directories(wintime)

add_subdirectory(libsgp4)
add_subdirectory(sattrack)
add_subdirectory(runtest)
add_subdirectory(passpredict)
add_subdirectory(wintime)

file(COPY SGP4-VER.TLE DESTINATION ${PROJECT_BINARY_DIR})
