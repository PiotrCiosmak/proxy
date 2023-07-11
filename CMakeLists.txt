cmake_minimum_required(VERSION 3.25)
project(proxy)

set(CMAKE_CXX_STANDARD 23)

add_executable(proxy main.cpp include/Subject.hpp src/RealSubject.cpp include/RealSubject.hpp include/Proxy.cpp include/Proxy.hpp)
