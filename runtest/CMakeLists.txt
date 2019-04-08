set(SRCS
    runtest.cc)

add_executable(runtest
    ${SRCS})

if (WIN32)
	target_link_libraries(runtest
		sgp4
		wintime)
else
	target_link_libraries(runtest
		sgp4
		rt)
endif (WIN32)