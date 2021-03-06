#ifndef __nj
#define __nj

#include <memory>
#include <v8.h>
#include "Result.h"

void raiseException(const v8::FunctionCallbackInfo<v8::Value> &args,v8::HandleScope &scope,const std::shared_ptr<nj::Result> &res);
v8::Local<v8::String> genError(v8::HandleScope &scope,const std::shared_ptr<nj::Result> &res);
void callbackWithResult(v8::HandleScope &scope,const v8::Local<v8::Function> &cb,const std::shared_ptr<nj::Result> &res);
void returnResult(const v8::FunctionCallbackInfo<v8::Value> &args,v8::HandleScope &scope,std::shared_ptr<nj::Result> &res);

#endif
