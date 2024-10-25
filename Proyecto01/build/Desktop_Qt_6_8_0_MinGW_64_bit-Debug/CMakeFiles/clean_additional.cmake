# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Proyecto01_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Proyecto01_autogen.dir\\ParseCache.txt"
  "Proyecto01_autogen"
  )
endif()
