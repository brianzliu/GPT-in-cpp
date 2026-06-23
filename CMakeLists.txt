cmake_minimum_required(VERSION 3.16)

project(gpt_in_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Main executable
add_executable(gpt_train
    src/main.cpp
    src/tensor.cpp
    src/ops.cpp
    src/model.cpp
    src/optimizer.cpp
    src/dataloader.cpp
    src/tokenizer.cpp
    src/checkpoint.cpp
)

target_include_directories(gpt_train PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Test executable for ops
add_executable(test_ops
    tests/test_ops.cpp
    src/tensor.cpp
    src/ops.cpp
)

target_include_directories(test_ops PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Test executable for model
add_executable(test_model
    tests/test_model.cpp
    src/tensor.cpp
    src/ops.cpp
    src/model.cpp
    src/optimizer.cpp
)

target_include_directories(test_model PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)