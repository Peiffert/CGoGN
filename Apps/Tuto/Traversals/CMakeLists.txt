cmake_minimum_required(VERSION 2.8)

project(Tuto_Traversals)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable( traverse_cells traverse_cells.cpp)
target_link_libraries( traverse_cells ${CGoGN_LIBS} ${CGoGN_EXT_LIBS} )

add_executable( traverse_neighbours traverse_neighbours.cpp)
target_link_libraries( traverse_neighbours ${CGoGN_LIBS} ${CGoGN_EXT_LIBS} )

add_executable( traverse_attributes traverse_attributes.cpp)
target_link_libraries( traverse_attributes ${CGoGN_LIBS} ${CGoGN_EXT_LIBS} )

QT4_WRAP_UI( show_traversors_ui2 show_traversors2.ui )
QT4_WRAP_CPP(show_traversors_moc2 show_traversors2.h)
add_executable( show_traversors2 show_traversors2.cpp ${show_traversors_ui2} ${show_traversors_moc2})
target_link_libraries( show_traversors2 ${CGoGN_LIBS}  ${CGoGN_EXT_LIBS}  )

QT4_WRAP_UI( show_traversors_ui3 show_traversors3.ui )
QT4_WRAP_CPP(show_traversors_moc3 show_traversors3.h)
add_executable( show_traversors3 show_traversors3.cpp ${show_traversors_ui3} ${show_traversors_moc3})
target_link_libraries( show_traversors3 ${CGoGN_LIBS}  ${CGoGN_EXT_LIBS}  )

