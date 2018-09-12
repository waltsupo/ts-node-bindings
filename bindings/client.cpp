#include "client.h"

NAN_METHOD(Client::CreateIdentity)
{
  const struct ClientUIFunctions *functionPointers;
  const struct ClientUIFunctionsRare *functionRarePointers = NULL;
  int usedLogTypes = 0x0000;
  const char *logFileFolder = NULL;
  const char *resourcesFolder;

  if (ts3client_initClientLib(functionPointers, functionRarePointers, usedLogTypes, logFileFolder, resourcesFolder) == ERROR_ok)
  {
    /* Use result variable */
    info.GetReturnValue().Set(Nan::New("OK").ToLocalChecked());
    return;
  }
  else
  {
    Nan::ThrowError("Error");
    /* Handle error, result variable is undefined */
  }
}