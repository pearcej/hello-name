# Basic CMake/gnu-make bootstrap - Jess W.S.
# Please do not edit me!

mkdir -p build # -p flag ensures directory is only made if it doesn't exist.
cd build
cmake .. # Generate a makefile using CMakeLists in the parent of "build"
make # Build the assignment with the Makefile generated by CMake
cd ../.. # Go back to root.

# Run the compiled assignment from the root directory.
# This maintains the expected behavior for local file resources
# in the same directory as the *.cpp file.
./.berea/build/l01-ascii_art
