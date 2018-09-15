#include "voice.h"

NAN_METHOD(Voice::openCaptureDevice)
{
  uint64 serverConnectionHandlerID = 1;
  const char *modeID = "";
  const char *captureDevice = "";

  if (ts3client_openCaptureDevice(serverConnectionHandlerID, modeID, captureDevice) == ERROR_ok)
  {
    info.GetReturnValue().Set(Nan::New("OK").ToLocalChecked());
  }
  else
  {
    Nan::ThrowError("Error");
  }
}

NAN_METHOD(Voice::openPlaybackDevice)
{
  uint64 serverConnectionHandlerID = 1;
  const char *modeID = "";
  const char *playbackDevice = "";

  if (ts3client_openPlaybackDevice(serverConnectionHandlerID, modeID, playbackDevice) == ERROR_ok)
  {
    info.GetReturnValue().Set(Nan::New("OK").ToLocalChecked());
  }
  else
  {
    Nan::ThrowError("Error");
  }
}