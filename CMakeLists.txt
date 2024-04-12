cmake_minimum_required(VERSION 3.16..3.24)

project(CPPTemplate 	
    VERSION 1.0.0
    DESCRIPTION "Project description"
    LANGUAGES CXX
	)     

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(${CMAKE_SOURCE_DIR}/external/vcpkg/scripts/buildsystems/vcpkg.cmake)

set(as_subproject Core App)

# Add dependencies here via find_package
# Note: Has to be before macro definition, and only use find_package for external dependencies here!
find_package(fmt CONFIG REQUIRED)

macro(find_package)
  if(NOT "${ARGV0}" IN_LIST as_subproject)
    message(STATUS "Using native find_package for ${ARGV0}: ${ARGV}")
    _find_package(${ARGV})
  endif()
endmacro()

add_subdirectory(external)
add_subdirectory(core)
add_subdirectory(app)
