# OpenCV C++ Simple Example
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

	$ cmake .

	$ make

	$ ./out mustang.jpg

You should see something like this:

![](Screenshot%20from%202020-01-16%2023-48-44.png)

# Referência

Using OpenCV with gcc and CMake. Disponível em: https://docs.opencv.org/2.4/doc/tutorials/introduction/linux_gcc_cmake/linux_gcc_cmake.html
