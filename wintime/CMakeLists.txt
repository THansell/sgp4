set(SRCS
    wintime.cpp
)    

add_library(wintime STATIC ${SRCS})

add_executable(quick Source.cpp ${SRCS})
