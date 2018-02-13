cmake_minimum_required(VERSION 3.9)
project(transcrypto C)

set(CMAKE_C_STANDARD 11)

find_package(OpenSSL)

add_executable(transcrypto main.c transfer/base/session.h configs/transfer_configs.h)

target_include_directories(${OPENSSL_INCLUDE_DIRS})
target_link_libraries(${OPENSSL_LIBS})