#include <nan.h>
#include <teamspeak/clientlib.h>
#include <teamspeak/public_errors.h>
#include <stdarg.h>
class Client : public Nan::ObjectWrap
{
public:
  static NAN_METHOD(CreateIdentity);
};
