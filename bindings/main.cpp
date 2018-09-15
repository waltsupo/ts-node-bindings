#include <nan.h>
#include "voice.h"
#include "client.h"

void InitAll(v8::Local<v8::Object> exports)
{
  Nan::SetMethod(exports, "initClientLib", Client::InitClientLib);
  Nan::SetMethod(exports, "spawnNewServerConnectionHandler", Client::SpawnNewServerConnectionHandler);
  Nan::SetMethod(exports, "createIdentity", Client::CreateIdentity);
  Nan::SetMethod(exports, "startConnectionWithChannelID", Client::StartConnectionWithChannelID);

  Nan::SetMethod(exports, "openCaptureDevice", Voice::openCaptureDevice);
  Nan::SetMethod(exports, "openPlaybackDevice", Voice::openPlaybackDevice);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, InitAll);