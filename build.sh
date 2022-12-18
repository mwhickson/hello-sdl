gcc $(pkg-config --cflags sdl2) -o release/hello.exe hello.c $(pkg-config --libs sdl2)

cp /c/msys64/ucrt64/bin/SDL2.dll release/
