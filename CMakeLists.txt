cmake_minimum_required(VERSION 3.21)

project(OpenGL
        VERSION 0.1
        DESCRIPTION "Learning OpenGL"
        LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

#set(CMAKE_EXE_LINKER_FLAGS " -static")

add_executable(OpenGL
        src/main.cpp
        include/shader_program.h include/shader_program.inl
        src/io.cpp include/io.h
        src/shader_helper.cpp include/shader_helper.h
        include/camera.h src/camera.cpp
        include/texture.h src/texture.cpp)

target_include_directories(OpenGL PUBLIC include)

# --- GLFW configuration
# Disable building docs, tests and examples
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(lib/glfw-3.3.6)

target_link_libraries(OpenGL PRIVATE glfw)

# --- GLAD configuration
add_subdirectory(lib/glad)

target_link_libraries(OpenGL PRIVATE glad)

# --- GLM configuration
add_subdirectory(lib/glm)

target_link_libraries(OpenGL PRIVATE glm)

# --- STB Image configuration
add_subdirectory(lib/stb_image)

target_link_libraries(OpenGL PRIVATE stb_image)