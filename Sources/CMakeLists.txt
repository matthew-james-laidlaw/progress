add_library(progress Bar.cpp Task.cpp)
target_include_directories(progress PRIVATE ${PROJECT_SOURCE_DIR}/Includes/PubSub)
target_include_directories(progress PUBLIC ${PROJECT_SOURCE_DIR}/Includes/Progress)
