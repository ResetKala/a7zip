/*
 * Copyright 2018 Hippo Seven
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __A7ZIP_OUTPUT_STREAM_OUT_STREAM_H__
#define __A7ZIP_OUTPUT_STREAM_OUT_STREAM_H__

#include <jni.h>

#include <Common/MyCom.h>
#include <7zip/IStream.h>

namespace a7zip {

class SequentialOutStream :
    public ISequentialOutStream,
    public CMyUnknownImp
{
 private:
  SequentialOutStream(jobject stream, jbyteArray array);

 public:
  virtual ~SequentialOutStream();

 public:
  MY_UNKNOWN_IMP
  STDMETHOD(Write)(const void *data, UInt32 size, UInt32 *processedSize);

 private:
  jobject stream;
  jbyteArray array;

 public:
  static HRESULT Initialize(JNIEnv* env);
  static HRESULT Create(JNIEnv* env, jobject stream, CMyComPtr<ISequentialOutStream>& out_stream);

 private:
  static bool initialized;
  static jmethodID method_write;
  static jmethodID method_close;
};

}

#endif //__A7ZIP_OUTPUT_STREAM_OUT_STREAM_H__
