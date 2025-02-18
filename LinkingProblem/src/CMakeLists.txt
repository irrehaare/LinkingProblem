# CMakeList.txt : CMake project for LinkingProblem SOURCE code
add_executable (
	LinkingProblem 
	"LinkingProblem.cpp" "LinkingProblem.hpp"
)

target_include_directories(LinkingProblem PRIVATE 
	${CMAKE_SOURCE_DIR}/LinkingProblem/src/common
	${CMAKE_SOURCE_DIR}/LinkingProblem/src/entities
)
