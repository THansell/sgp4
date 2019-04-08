set(SRCS
    passpredict.cc)

add_executable(passpredict
    ${SRCS})

if (WIN32)
	target_link_libraries(passpredict
		sgp4
		wintime)
else (WIN32)
	target_link_libraries(passpredict
		sgp4
		rt)
endif (WIN32)
