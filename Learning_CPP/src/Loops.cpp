#include "Log.h"


void forHello(int times) {
	for (int i = 0; i < times; i++) {
		Log("Hello World!");
	}
}


void whileHello(int times) {
	int i = 0;
	while(i < times) {
		Log("Hello while");
		i++;
	}
}