cmake_minimum_required(VERSION 3.20)

project(gyc_wayland_client C)

set(CMAKE_C_STANDARD 11)

find_package(PkgConfig REQUIRED)

pkg_check_modules(WAYLAND REQUIRED wayland-client)

add_executable(gyc-client
    main.c
)

target_include_directories(gyc-client PRIVATE
    ${WAYLAND_INCLUDE_DIRS}
)

target_link_libraries(gyc-client
    ${WAYLAND_LIBRARIES}
)