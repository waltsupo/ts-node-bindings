#include "errors.h"

void Errors::onServerErrorEvent(uint64 scHandlerID, const char *errorMessage, unsigned int error, const char *returnCode, const char *extraMessage)
{
  printf(errorMessage);
}

void Errors::onConnectStatusChangeEvent(uint64 serverConnectionHandlerID, int newStatus, unsigned int errorNumber)
{
  printf("The status is %d\n", newStatus);
  printf("The error is %d\n", errorNumber);
}