#include <nan.h>
#include "voice.h"
#include "client.h"

void InitAll(v8::Local<v8::Object> exports) {
  Nan::SetMethod(exports, "sayHello", Voice::SayHello);
  Nan::SetMethod(exports, "createClientIdentity", Client::CreateIdentity);
}


NODE_MODULE(NODE_GYP_MODULE_NAME, InitAll);