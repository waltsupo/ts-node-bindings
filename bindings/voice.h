#include <nan.h>
#include <teamspeak/clientlib.h>

class Voice : public Nan::ObjectWrap {
  public:
    static NAN_METHOD(SayHello);
};
