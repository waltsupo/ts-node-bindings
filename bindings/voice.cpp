#include "voice.h"

std::string voice::sayhello(){
  return "Hello World for you";
}

Napi::String voice::HelloWrapped(const Napi::CallbackInfo& info) 
{
  Napi::Env env = info.Env();
  Napi::String returnValue = Napi::String::New(env, voice::sayhello());
  
  return returnValue;
}

Napi::Object voice::Init(Napi::Env env, Napi::Object exports) 
{
  exports.Set("sayhello", Napi::Function::New(env, voice::HelloWrapped));
 
  return exports;
}