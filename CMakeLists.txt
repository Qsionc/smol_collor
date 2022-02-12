cmake_minimum_required( VERSION 3.21 )

set( CMAKE_CXX_STANDARD 20 )
set( CMAKE_CXX_COMPILER clang++ )

project( smol_color LANGUAGES CXX )

find_package( GTest )

add_library( smollor STATIC source/color.cpp )
target_include_directories( smollor PUBLIC
                            $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
                            $<INSTALL_INTERFACE:include/smollor> )

if ( GTest_FOUND )
    message( "Found GTest. Creating 'semi' Unit Test" )
    add_executable( test test/test.cpp )
    target_link_libraries( test PRIVATE smollor GTest::GTest )
endif ()

install( TARGETS smollor
         EXPORT smollorTargets
         ARCHIVE DESTINATION
         lib/smollor )
install( EXPORT smollorTargets
         FILE smollorTargets.cmake
         NAMESPACE smollor::
         DESTINATION lib/smollor/cmake )
install( FILES
         include/color.h
         include/smol_color.h
         DESTINATION
         include/smollor )
install( FILES
         include/impl/background.h
         include/impl/foreground.h
         include/impl/form.h
         DESTINATION
         include/smollor/impl )
install ( FILES
          smollor-config.cmake
          DESTINATION
          lib/smollor/cmake)