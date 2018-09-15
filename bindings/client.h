#include <nan.h>
#include <teamspeak/clientlib.h>
#include <teamspeak/public_errors.h>
#include <stdarg.h>
extern struct ClientUIFunctions functionPointers;

class Client : public Nan::ObjectWrap
{
public:
  static NAN_METHOD(InitClientLib);
  static NAN_METHOD(SpawnNewServerConnectionHandler);
  static NAN_METHOD(CreateIdentity);
  static NAN_METHOD(StartConnectionWithChannelID);
};
