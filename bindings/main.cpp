#include <napi.h>
#include "voice.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  return voice::Init(env, exports);
}

NODE_API_MODULE(tsbindings, InitAll)