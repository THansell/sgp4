CMAKE_MINIMUM_REQUIRED(VERSION 3.1)
PROJECT(SGP4)

if (NOT WIN32)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
if (COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
else (COMPILER_SUPPORTS_CXX11)
    message(SEND_ERROR "The compiler ${CMAKE_CXX_COMPILER} doesnt support C++11.") 
endif (COMPILER_SUPPORTS_CXX11)

endif (NOT WIN32) 

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")

include_directories(libsgp4)

if (WIN32)
	include_directories(wintime)
	add_subdirectory(wintime)
endif (WIN32)

add_subdirectory(libsgp4)
add_subdirectory(sattrack)
add_subdirectory(runtest)
add_subdirectory(passpredict)

file(COPY SGP4-VER.TLE DESTINATION ${PROJECT_BINARY_DIR})
