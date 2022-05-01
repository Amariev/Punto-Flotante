application=program

build:
	mkdir -p build; cd build; cmake ../.; make; cd ../.;

run:
	cd build; clear;./$(application);

clean:
	rm -rf build/;

start:
	$(MAKE) clean; $(MAKE) build; $(MAKE) run;
