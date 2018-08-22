#include "voice.h"

NAN_METHOD(Voice::SayHello) {
  info.GetReturnValue().Set(Nan::New("HelloWorld").ToLocalChecked());
}