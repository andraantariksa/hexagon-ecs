rebuild:
	cd build/ && make
build:
	cd build/ && cmake .. && make
clean-and-build: clean build
clean:
	rm -rf build/ && mkdir build/