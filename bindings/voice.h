#include <nan.h>
#include <teamspeak/clientlib.h>
#include <teamspeak/public_errors.h>
#include <stdarg.h>

class Voice : public Nan::ObjectWrap
{
public:
  static NAN_METHOD(openCaptureDevice);
  static NAN_METHOD(openPlaybackDevice);
};
