cmake_minimum_required(VERSION 3.10)
project(GameEnhancingUsingAMDRyzenAI)

set(CMAKE_CXX_STANDARD 17)

# Add source files
file(GLOB SOURCES "src/*.cpp")

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/src)

# Add executable
add_executable(GameEnhancingUsingAMDRyzenAI ${SOURCES})

# Link AMD Ryzen AI SDK (assuming it's installed in a standard location)
# Adjust the path if necessary
target_link_libraries(GameEnhancingUsingAMDRyzenAI /path/to/amd/ryzen/ai/sdk/libRyzenAI.so)
