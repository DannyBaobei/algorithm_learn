cmake_minimum_required (VERSION 2.6)
project (tree)
if(MINGW)
    add_definitions("-Wall ")
endif()

if(MSVC)
    add_definitions("/Od /Ob2")
endif()


set (ROOT  "./"  )
set (DATE_SOURCE "${ROOT}/test_suit.cc" 
		"${ROOT}/tree_definition.cc" 
		"${ROOT}/tree_iterator.cc" 
		"${ROOT}/tree_lazy_iterator.cc" 
		"${ROOT}/tree_traverse.cc" 
		"${ROOT}/vczh/gc_ptr.cpp"
		"${ROOT}/vczh/gc_ptr.h"
		)


add_executable(a ${DATE_SOURCE})


