Krypto 
===========

## Getting Started

Make sure everything is working correctly.

Make sure you install [emscripten](http://kripken.github.io/emscripten-site/)

For mac:

	> ./gradlew buildGoogleTestMac :krypto-lib:build

For linux:

	> ./gradlew buildGoogleTest :krypto-lib:build

To automagically build a jar for jni access to krypto, run:

	> ./gradlew buildFullJar -Pemhome=<pathToYourEmscriptenIncludeFolder>

We assume that you have a JAVA_HOME system variable that points at your java home directory

Builds currently depend on clang3.7 for c++14 features. This is only tends to be an issue on older versions of linux.

The easiest way to do development is to use the included xcode projects which are setup such that GoogleTests can be debugged from within XCode by using the krypto-cli project.

## Build Notes

	- Included xcode project is designed to allow debugging of tests with Xcode debugger
	- Static library will be generated by krypto-lib and gradle is the ultimate authority on whether tests are passing

