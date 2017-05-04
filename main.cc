#include <nan.h>

struct Parser : public Nan::ObjectWrap {
	static void EndElement(void *userData, const char *name) {
		// Whee!!! I get called by node-expat!
		fprintf(stderr, "BAZINGA!\n");
	}
};

void init(v8::Handle<v8::Object> exports) {
	printf("%p\n", Parser::EndElement);
}

NODE_MODULE(bazinga, init)
