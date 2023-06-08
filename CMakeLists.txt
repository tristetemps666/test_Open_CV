# # ---Choose CMake version---
# cmake_minimum_required(VERSION 3.18)

# # ---Choose project name---
# project(webcam_open_cv)

# # ---Declare source files---
# file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS src/*)
# add_executable(${PROJECT_NAME} ${SOURCE_FILES})
# target_include_directories(${PROJECT_NAME} PRIVATE src)

# # ---Choose C++ version---
# target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

# # ---Choose warning level---
# if(MSVC)
#     target_compile_options(${PROJECT_NAME} PRIVATE /W4) # /arch:SSSE3 /arch:SSSE4.1)
# else()
#     target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -pedantic-errors) # -msse3 -msse4.1)
# endif()

# # ---Maybe enable warnings as errors---
# set(WARNINGS_AS_ERRORS OFF CACHE BOOL "ON iff you want to treat warnings as errors")

# if(WARNINGS_AS_ERRORS)
#     if(MSVC)
#         target_compile_options(${PROJECT_NAME} PRIVATE /WX) # /arch:SSE3 /arch:SSE4.1)
#     else()
#         target_compile_options(${PROJECT_NAME} PRIVATE -Werror) # -msse3 -msse4.1)
#     endif()
# endif()

# # ---Add p6 library---
# # add_subdirectory(lib/p6)
# # target_link_libraries(${PROJECT_NAME} PRIVATE p6::p6)
# # set(P6_RAW_OPENGL_MODE ON CACHE BOOL "")
# # target_compile_definitions(p6 PUBLIC "P6_RAW_OPENGL_MODE")

# # p6_copy_folder(${PROJECT_NAME} assets)

# #---Add Open_CV library---
# # set(W)
# # add_subdirectory(lib/opencv)
# # target_link_libraries(${PROJECT_NAME} PRIVATE OpenCV)


# # set(OpenCV_DIR "/path/to/opencv")
# # set(DBUILD_opencv_gapi OFF)
# set(OpenCV_DIR "C:/libraries/opencv/opencv/build/x64/vc15/bin")
# find_package(OpenCV REQUIRED)
# include_directories( ${OpenCV_INCLUDE_DIRS} )
# # add_executable( DisplayImage DisplayImage.cpp )
# target_link_libraries( webcam_open_cv ${OpenCV_LIBS})

# # # # ---Add libusb library---
# # # add_subdirectory(libusb)
# # # target_link_libraries(${PROJECT_NAME} PRIVATE LibUVC::UVC)


##################################


cmake_minimum_required(VERSION 3.0.0)
project(webcam_open_cv VERSION 0.1.0)


find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(webcam_open_cv src/main.cpp)
set(OpenCV_LIBS "C:\\libraries\\opencv\\opencv\\build\\x64\\vc15\\lib\\opencv_world460.lib")

message("open cv lib : " ${OpenCV_LIBS} "\n\n\n\n")
target_link_libraries( webcam_open_cv ${OpenCV_LIBS} )
