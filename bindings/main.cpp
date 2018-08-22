#include <nan.h>
#include "voice.h"

void InitAll(v8::Local<v8::Object> exports) {
  Nan::SetMethod(exports, "sayHello", Voice::SayHello);
}


NODE_MODULE(NODE_GYP_MODULE_NAME, InitAll);