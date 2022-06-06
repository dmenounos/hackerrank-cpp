cmake_minimum_required(VERSION 3.8.2)

project(hackerrank)

set(PROJECT_VERSION 1.0)

if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE "Release")
	message(">> CMAKE_BUILD_TYPE not specified, defaulting to ${CMAKE_BUILD_TYPE}.")
endif()

set(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG")

message(">> CMAKE_CXX_FLAGS         : ${CMAKE_CXX_FLAGS}")
message(">> CMAKE_CXX_FLAGS_DEBUG   : ${CMAKE_CXX_FLAGS_DEBUG}")
message(">> CMAKE_CXX_FLAGS_RELEASE : ${CMAKE_CXX_FLAGS_RELEASE}")

# include_directories("src")

# C++
# https://www.hackerrank.com/domains/cpp?badge_type=cpp
add_executable("variable-sized-arrays"      "src/c++/variable-sized-arrays/Solution.cpp")

# Problem Solving
# https://www.hackerrank.com/domains/algorithms?badge_type=problem-solving
add_executable("sales-by-match"             "src/problem-solving/sales-by-match/Solution.cpp")
add_executable("counting-valleys"           "src/problem-solving/counting-valleys/Solution.cpp")
add_executable("a-very-big-sum"             "src/problem-solving/a-very-big-sum/Solution.cpp")
add_executable("password-decryption"        "src/problem-solving/password-decryption/Solution.cpp")
add_executable("road-repair"                "src/problem-solving/road-repair/Solution.cpp")

# 30 Days of Code
# https://www.hackerrank.com/domains/tutorials/30-days-of-code
add_executable("30-days-of-code_day-01_a"   "src/tutorials/30-days-of-code/day-01/Solution_A.cpp")
add_executable("30-days-of-code_day-01_b"   "src/tutorials/30-days-of-code/day-01/Solution_B.cpp")
add_executable("30-days-of-code_day-02"     "src/tutorials/30-days-of-code/day-02/Solution.cpp")
add_executable("30-days-of-code_day-03"     "src/tutorials/30-days-of-code/day-03/Solution.cpp")
add_executable("30-days-of-code_day-04"     "src/tutorials/30-days-of-code/day-04/Solution.cpp")
add_executable("30-days-of-code_day-05"     "src/tutorials/30-days-of-code/day-05/Solution.cpp")
add_executable("30-days-of-code_day-06"     "src/tutorials/30-days-of-code/day-06/Solution.cpp")
