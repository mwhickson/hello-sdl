gcc $(pkg-config --cflags sdl2) -o release/hello.exe hello.c $(pkg-config --libs sdl2)
