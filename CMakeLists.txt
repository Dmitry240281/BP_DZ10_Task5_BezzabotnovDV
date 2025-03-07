# CMakeList.txt: проект CMake для BP_DZ10_Task5_BezzabotnovDV; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("BP_DZ10_Task5_BezzabotnovDV")

set (SOURCES
Figure/Figure.cpp
Figure/Quadrate.cpp
Figure/Triangle.cpp
Figure/RightTriangle.cpp
Figure/IsoscelesTriangle.cpp
Figure/EquilateralTriangle.cpp
Figure/Quadrate.cpp
Figure/Rectangle.cpp
Figure/Square.cpp
Figure/Parallelogram.cpp
Figure/Rhombus.cpp
)

set (HEADERS
Figure/Figure.h
Figure/Quadrate.h
Figure/Triangle.h
Figure/RightTriangle.h
Figure/IsoscelesTriangle.h
Figure/EquilateralTriangle.h
Figure/Quadrate.h
Figure/Rectangle.h
Figure/Square.h
Figure/Parallelogram.h
Figure/Rhombus.h
)

add_library (Figure SHARED ${SOURCES} ${HEADERS})

# Добавьте источник в исполняемый файл этого проекта.
add_executable (BP_DZ10_Task5_BezzabotnovDV "BP_DZ10_Task5_BezzabotnovDV.cpp")

target_link_libraries (BP_DZ10_Task5_BezzabotnovDV Figure)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET BP_DZ10_Task5_BezzabotnovDV PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
