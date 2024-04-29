#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char const *argv[])
{
	void *handle = dlopen("libfreetype.6.dylib", RTLD_NOW);
	fprintf(stderr, "%p\n", handle);
	return 0;
}