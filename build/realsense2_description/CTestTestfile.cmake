# CMake generated Testfile for 
# Source directory: /home/omar/Desktop/GP/EwasteNonDestructiveDisassembly/src/Perception/realsense-ros-2.3.2/realsense2_description
# Build directory: /home/omar/Desktop/GP/EwasteNonDestructiveDisassembly/build/realsense2_description
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_realsense2_description_nosetests_tests "/home/omar/Desktop/GP/EwasteNonDestructiveDisassembly/build/realsense2_description/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/omar/Desktop/GP/EwasteNonDestructiveDisassembly/build/realsense2_description/test_results/realsense2_description/nosetests-tests.xml" "--return-code" "\"/home/omar/.local/lib/python3.8/site-packages/cmake/data/bin/cmake\" -E make_directory /home/omar/Desktop/GP/EwasteNonDestructiveDisassembly/build/realsense2_description/test_results/realsense2_description" "/usr/bin/nosetests3 -P --process-timeout=60 --where=/home/omar/Desktop/GP/EwasteNonDestructiveDisassembly/src/Perception/realsense-ros-2.3.2/realsense2_description/tests --with-xunit --xunit-file=/home/omar/Desktop/GP/EwasteNonDestructiveDisassembly/build/realsense2_description/test_results/realsense2_description/nosetests-tests.xml")
set_tests_properties(_ctest_realsense2_description_nosetests_tests PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/home/omar/Desktop/GP/EwasteNonDestructiveDisassembly/src/Perception/realsense-ros-2.3.2/realsense2_description/CMakeLists.txt;17;catkin_add_nosetests;/home/omar/Desktop/GP/EwasteNonDestructiveDisassembly/src/Perception/realsense-ros-2.3.2/realsense2_description/CMakeLists.txt;0;")
subdirs("gtest")