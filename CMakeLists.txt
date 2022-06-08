## Set the minumum version
cmake_minimum_required(VERSION 3.16 FATAL_ERROR)


################## Set file names ##################
set(PROJECT "project")
set(EXECUTABLE_NAME "executable")
set(MAIN_FILE "main.cc")
####################################################


## Project name
project(${PROJECT})

##Uncomment to enable Verbose Make
#set(CMAKE_VERBOSE_MAKEFILE ON)

## Set Cpp Standard
set (CMAKE_CXX_STANDARD 17)

##Set g++ as compiler if exists
find_program(GPP g++)
if(GPP)
    set(CMAKE_CXX_COMPILER g++)
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -fdiagnostics-color=auto")
endif()

## Check for ccache to speed up builds
find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
endif()


## Set the include directories and the file to compile
include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cc ${PROJECT_SOURCE_DIR}/src/*.cpp ${PROJECT_SOURCE_DIR}/src/*.c)
file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.hh ${PROJECT_SOURCE_DIR}/include/*.h)


## Create the executable
add_executable(${EXECUTABLE_NAME} ${MAIN_FILE} ${sources} ${headers})

## Link libraries if required
#target_link_libraries(executable_name ${Geant4_LIBRARIES})





## Add files to copy in the build folder
set(SCRIPTS

    )

foreach(_script ${SCRIPTS})
    configure_file(
        ${PROJECT_SOURCE_DIR}/${_script}
        ${PROJECT_BINARY_DIR}/${_script}
        COPYONLY
    )
endforeach()