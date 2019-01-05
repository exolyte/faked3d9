all: d3d9

d3d9:
	@x86_64-w64-mingw32-g++ -c src/d3d9_main.cpp -o src/d3d9_main.obj
	@x86_64-w64-mingw32-g++ -o d3d9.dll src/d3d9_main.obj -shared src/d3d9.def
	@strip d3d9.dll
    
clean:
	@rm d3d9.dll
	@rm src/d3d9_main.obj
