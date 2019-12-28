cmake_minimum_required(VERSION 3.10)
include(FetchContent)

set(CMAKE_CXX_STANDARD 17)
project(HexagonECS)

# Abseil
#set(ABSEIL_VERSION 20190808 CACHE STRING "Abseil Common Libraries (C++) version")
#FetchContent_Declare(
#	abseil
#	GIT_REPOSITORY https://github.com/abseil/abseil-cpp.git
#	GIT_TAG        ${ABSEIL_VERSION}
#)

#FetchContent_GetProperties(abseil)
#if(NOT abseil_POPULATED)
#  FetchContent_Populate(abseil)
#  add_subdirectory(${abseil_SOURCE_DIR} ${abseil_BINARY_DIR})
#endif()

# Temp
set(SRC_FILES
	Samples/1.cpp)

set(HEADER_FILES
	Source/ECS.hpp)

# Temp
add_executable(HexagonECS ${SRC_FILES} ${HEADER_FILES})

#target_link_libraries(HexagonECS
#	absl
#)