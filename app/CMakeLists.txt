cmake_minimum_required(VERSION 3.16..3.24)
project(App	    
    VERSION 1.0.0
    DESCRIPTION "Application description"
    LANGUAGES CXX)

# All .cpp files in App
add_executable(App 
    src/app.cpp)

# Subproject dependencies
find_package(Core REQUIRED)

target_link_libraries(
	# Subprojects
    App 
        PUBLIC 
            Core::Core

	# Dependencies
    )
