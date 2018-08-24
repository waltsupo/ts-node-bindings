#include <nan.h>
#include <teamspeak/clientlib.h>

class Client : public Nan::ObjectWrap {
  public:
    static NAN_METHOD(CreateIdentity);
};
