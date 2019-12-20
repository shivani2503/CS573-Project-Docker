cmake_minimum_required(VERSION 3.0.0)
project(PDFL-Parser VERSION 0.1.0)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

set(CPP_SOURCE_DIR "${PROJECT_SOURCE_DIR}/src")
set(GENERATED_SOURCE_DIR "${PROJECT_SOURCE_DIR}/generated_src")
set(ANTLR_RUNTIME_DIR "${PROJECT_SOURCE_DIR}/antlr/runtime")
set(ANTLR_TOOL "${PROJECT_SOURCE_DIR}/antlr/antlr-4.7.2-complete.jar")
set(ANTLR_GRAMMAR "${PROJECT_SOURCE_DIR}/grammar/PDFLGrammar.g4")
set(GENERATED_SOURCE_FILES 
    ${GENERATED_SOURCE_DIR}/PDFLGrammarLexer.cpp
    ${GENERATED_SOURCE_DIR}/PDFLGrammarParser.cpp
    ${GENERATED_SOURCE_DIR}/PDFLGrammarBaseVisitor.cpp
    ${GENERATED_SOURCE_DIR}/PDFLGrammarVisitor.cpp)

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_custom_command(
    OUTPUT ${GENERATED_SOURCE_FILES}
    COMMAND java -jar ${ANTLR_TOOL} -o ${GENERATED_SOURCE_DIR} -Dlanguage=Cpp -no-listener -visitor ${ANTLR_GRAMMAR}
    DEPENDS ${ANTLR_GRAMMAR})

# Polylib library
set(POLYLIB ${PROJECT_SOURCE_DIR}/include/polylib)

# IEGenlib library
set(IEGENLIB ${PROJECT_SOURCE_DIR}/include/iegenlib)

# ISL Library
set(ISL_LIB ${PROJECT_SOURCE_DIR}/include/isl)

# Chill Library
set(CHILL_LIB ${PROJECT_SOURCE_DIR}/include/chill)

# GMP Library
set(GMP_LIB ${PROJECT_SOURCE_DIR}/include/gmp)

# Omega Library
set(OMEGA_LIB ${PROJECT_SOURCE_DIR}/include/omega)

# Google Test
set(GTEST_LIB ${PROJECT_SOURCE_DIR}/include/gtest)


include_directories(
    "${ANTLR_RUNTIME_DIR}/src" 
    "${ANTLR_RUNTIME_DIR}/src/atn" 
    "${ANTLR_RUNTIME_DIR}/src/dfa" 
    "${ANTLR_RUNTIME_DIR}/src/misc" 
    "${ANTLR_RUNTIME_DIR}/src/support" 
    "${ANTLR_RUNTIME_DIR}/src/tree" 
    "${ANTLR_RUNTIME_DIR}/src/tree/pattern"
    "${ANTLR_RUNTIME_DIR}/src/tree/xpath"
    ${GENERATED_SOURCE_DIR}
    "${POLYLIB}"
    "${IEGENLIB}"
    "${ISL_LIB}"
    "${ISL_LIB}/include"
    "${OMEGA_LIB}/baisc"
    "${OMEGA_LIB}/parser"
    "${OMEGA_LIB}/omega_lib/include/omega"
    "${CHILL_LIB}"
    "${GMP_LIB}"
    "${GTEST_LIB}")

add_subdirectory(${ANTLR_RUNTIME_DIR})

add_executable(PDFL-Parser ${SOURCE_FILES} ${GENERATED_SOURCE_FILES})

target_link_libraries(PDFL-Parser antlr4_static)



