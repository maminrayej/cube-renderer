cmake_minimum_required(VERSION 3.21)

project(STB_Image)

add_library(stb_image include/stb_image.h include/stb_image_impl.h)

target_include_directories(stb_image PUBLIC include)

set_target_properties(stb_image PROPERTIES LINKER_LANGUAGE C)