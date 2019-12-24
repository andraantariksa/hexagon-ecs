clean-build: clean build

build:
	cd build && make

clean:
	rm -rf build/ && mkdir build/