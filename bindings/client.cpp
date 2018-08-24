#include "client.h"

NAN_METHOD(Client::CreateIdentity) {
  const struct ClientUIFunctions* functionPointers;
  const struct ClientUIFunctionsRare* functionRarePointers;
  int usedLogTypes;
  const char* logFileFolder;
  const char* resourcesFolder;
}