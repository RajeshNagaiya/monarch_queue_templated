# monarch_queue_templated
This project aims to implement the templated queue which can store T type data.

**BUILD**

* Cmake build system must be installed in the system.
* mkdir build
* cd build
* cmake ..
* libqueue_shared.so will be found in the build directory which can be consumed for other projects.

**TEST**

* Execute the ./test executable inside the build directory for testing the library public functions.

**SCRIPT WAY**
In case, if you want to just execute a simple script which would take care of clean build and executing the test sequence, here is the way:

* Execute bash script to create build directory and execute clean build sequence 
``` bash script
    bash build.sh clean
```
* To execute test sequence in addition to build script, execute below:
``` bash script
    bash build.sh clean test
```
* To execute build step alone:
``` bash script
    bash build.sh
```
