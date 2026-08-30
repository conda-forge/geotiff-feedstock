cmake_minimum_required(VERSION 3.13)
project(geotiff_consumer LANGUAGES C)

find_package(GeoTIFF CONFIG REQUIRED)

add_executable(geotiff_consumer test_geotiff.c)
target_link_libraries(geotiff_consumer PRIVATE geotiff_library)
