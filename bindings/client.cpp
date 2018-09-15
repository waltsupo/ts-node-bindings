#include "client.h"
#include "errors.h"

struct ClientUIFunctions functionPointers;

NAN_METHOD(Client::InitClientLib)
{
  const struct ClientUIFunctionsRare *functionRarePointers = NULL;
  int usedLogTypes = 0x0002;
  const char *logFileFolder = NULL;
  const char *resourcesFolder = "D:/projects/ts-node-bindings/ts_sdk/windows/win64";
  memset(&functionPointers, 0, sizeof(struct ClientUIFunctions));

  functionPointers.onServerErrorEvent = Errors::onServerErrorEvent;
  functionPointers.onConnectStatusChangeEvent = Errors::onConnectStatusChangeEvent;

  if (ts3client_initClientLib(&functionPointers, functionRarePointers, usedLogTypes, logFileFolder, resourcesFolder) == ERROR_ok)
  {
    /* Use result variable */
    info.GetReturnValue().Set(Nan::New("OK").ToLocalChecked());
  }
  else
  {
    Nan::ThrowError("Error");
    /* Handle error, result variable is undefined */
  }
}

NAN_METHOD(Client::SpawnNewServerConnectionHandler)
{
  int port = 0;
  uint64 result;

  if (ts3client_spawnNewServerConnectionHandler(port, &result) == ERROR_ok)
  {
    info.GetReturnValue().Set(Nan::New<v8::Number>(result));
  }
  else
  {
    Nan::ThrowError("Error");
  }
}

NAN_METHOD(Client::CreateIdentity)
{
  char *result;

  if (ts3client_createIdentity(&result) == ERROR_ok)
  {
    info.GetReturnValue().Set(Nan::New(result).ToLocalChecked());
    ts3client_freeMemory(result);
  }
  else
  {
    Nan::ThrowError("Error");
  }
}

NAN_METHOD(Client::StartConnectionWithChannelID)
{
  uint64 serverConnectionHandlerID = static_cast<uint64>(info[0]->NumberValue());
  v8::String::Utf8Value value(info[1]);
  const char *identity = *value ? *value : "<string conversion failed>";
  const char *ip = "127.0.0.1";
  unsigned int port = 9987;
  const char *nickname = "tsclient";
  uint64 defaultChannelId = 5;
  const char *defaultChannelPassword = "";
  const char *serverPassword = "secret";

  if (ts3client_startConnectionWithChannelID(serverConnectionHandlerID, identity, ip, port, nickname, defaultChannelId, defaultChannelPassword, serverPassword) == ERROR_ok)
  {
    info.GetReturnValue().Set(Nan::New("OK").ToLocalChecked());
  }
  else
  {
    printf("haaa");
    info.GetReturnValue().Set(Nan::New("Error on connection").ToLocalChecked());
  }
}