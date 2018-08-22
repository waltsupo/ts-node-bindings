#include <nan.h>

class Voice : public Nan::ObjectWrap {
  public:
    static NAN_METHOD(SayHello);
};
