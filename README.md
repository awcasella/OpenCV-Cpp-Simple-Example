# OpenCV-C-Simple-Example
Load and display a single .jpg image file with OpenCV in C++

In order to compile your OpenCV project, make sure that you have you oi.cpp file inside the folder.

Make sure you have the "CMakeLists.txt" file set this way:

	cmake_minimum_required(VERSION 2.8)
	project( OpenCVTest )
	find_package( OpenCV REQUIRED )
	include_directories( /home/usuario/OpenCV/build )
	add_executable( out DisplayImage.cpp )
	target_link_libraries( out ${OpenCV_LIBS} )

Now, run the following in the terminal:

	cmake .

	make

	./out mustang.jpg
