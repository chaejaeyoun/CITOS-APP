// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Common/1.9.0/Internal/RawPointer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Internal{

// internal struct RawPointer<T> :13
// {
uStructType* RawPointer_typeof();
void RawPointer__op_Explicit1_fn(uType* __type, void** weak, uObject** __retval);
void RawPointer__op_Implicit1_fn(uType* __type, uObject* obj, void** __retval);

struct RawPointer
{
    static uObject* op_Explicit1(uType* __type, void* weak);
    static void* op_Implicit1(uType* __type, uObject* obj);
};
// }

}}} // ::g::Fuse::Internal
