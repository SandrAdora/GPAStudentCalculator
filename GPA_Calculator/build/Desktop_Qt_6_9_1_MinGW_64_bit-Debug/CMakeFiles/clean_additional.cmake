# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\GPA_Calculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\GPA_Calculator_autogen.dir\\ParseCache.txt"
  "GPA_Calculator_autogen"
  )
endif()
