cmake_minimum_required(VERSION 3.10)

# Set your project name and C++ standard
project(ChatAppServer VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the path to your Asio include directory
include_directories(${PROJECT_SOURCE_DIR}/server/include/asio-1.30.2/include)

# Add the executable
add_executable(ChatAppServer server/src/Server.cpp)
