cmake_minimum_required(VERSION 3.9)
project(transcrypto C)

set(CMAKE_C_STANDARD 11)

add_executable(transcrypto main.c transfer/base/session.h configs/transfer_configs.h)