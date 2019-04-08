set(SRCS
    sattrack.cc)

add_executable(sattrack
    ${SRCS})

if (WIN32)
	target_link_libraries(sattrack
		sgp4
		wintime)
else (WIN32)
	target_link_libraries(sattrack
		sgp4
		rt)
endif (WIN32)	
