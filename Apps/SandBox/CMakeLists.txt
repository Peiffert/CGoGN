cmake_minimum_required(VERSION 2.8)

project(SandBox)


#SET (CMAKE_BUILD_TYPE Debug)
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DNOTOPOWARNING")

include_directories(${CMAKE_CURRENT_BINARY_DIR})
#	${CGoGN_ROOT_DIR}/include
#	${CGoGN_EXT_INCLUDES})

# define libs path
#IF(WIN32)
#	link_directories(${CGoGN_ROOT_DIR}/lib/$(ConfigurationName)
#	${Boost_LIBRARY_DIRS})
#ELSE(WIN32)
#	link_directories(${CGoGN_ROOT_DIR}/lib/Release ${CGoGN_ROOT_DIR}/lib/Debug)
#ENDIF(WIN32)


#define exec to compile

add_executable(multi_att multi_att.cpp)
target_link_libraries(multi_att ${CGoGN_LIBS} ${CGoGN_EXT_LIBS})

add_executable(trav3_test trav3_test.cpp)
target_link_libraries(trav3_test ${CGoGN_LIBS} ${CGoGN_EXT_LIBS})

IF (WITH_QT)
	QT4_WRAP_CPP(tilings_moc tilings.h)
	add_executable(tilings tilings.cpp  ${tilings_moc})
	target_link_libraries(tilings ${CGoGN_LIBS} ${CGoGN_EXT_LIBS})

	QT4_WRAP_UI( test_traversor2_ui test_traversor2.ui )
	QT4_WRAP_CPP(test_traversor2_moc test_traversor2.h)
	add_executable(test_traversor2 test_traversor2.cpp  ${test_traversor2_ui} ${test_traversor2_moc})
	target_link_libraries(test_traversor2 ${CGoGN_LIBS} ${CGoGN_EXT_LIBS})


	QT4_WRAP_UI( testPlaneCutting_ui testPlaneCutting.ui )
	QT4_WRAP_CPP(testPlaneCutting_moc testPlaneCutting.h)
	add_executable(testPlaneCutting testPlaneCutting.cpp  ${testPlaneCutting_ui} ${testPlaneCutting_moc})
	target_link_libraries(testPlaneCutting ${CGoGN_LIBS} ${CGoGN_EXT_LIBS})

	QT4_WRAP_CPP(wallPaper_moc wallPaper.h)
	add_executable(wallPaper wallPaper.cpp  ${wallPaper_moc})
	target_link_libraries(wallPaper ${CGoGN_LIBS} ${CGoGN_EXT_LIBS})


        QT4_WRAP_UI( test_viewer_ui test_viewer.ui )
        QT4_WRAP_CPP( test_viewer_moc test_viewer.h )
        add_executable( test_viewer test_viewer.cpp ${test_viewer_moc} ${test_viewer_ui} )
        target_link_libraries( test_viewer ${CGoGN_LIBS} ${NUMERICAL_LIBS} ${CGoGN_EXT_LIBS} )

ENDIF()

# Example with Qt
#
#QT4_WRAP_CPP(tuto1_moc tuto1.h)
#add_executable( tuto1 tuto1.cpp ${tuto1_moc})
#target_link_libraries( tuto1 ${CGoGN_LIBS}  ${CGoGN_EXT_LIBS} )


#QT4_WRAP_CPP(tuto_mt_moc tuto_mt.h)
#add_executable( tuto_mt tuto_mt.cpp  ${tuto_mt_moc})
#target_link_libraries( tuto_mt
#	${CGoGN_LIBS} ${CGoGN_EXT_LIBS} ${Boost_THREAD_LIBRARY})

