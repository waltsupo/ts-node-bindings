#include <nan.h>
#include <teamspeak/clientlib.h>
#include <teamspeak/public_errors.h>
#include <stdarg.h>

class Errors
{
public:
  static void onServerErrorEvent(uint64 scHandlerID, const char *errorMessage, unsigned int error, const char *returnCode, const char *extraMessage);
  static void onConnectStatusChangeEvent(uint64 serverConnectionHandlerID, int newStatus, unsigned int errorNumber);
};
