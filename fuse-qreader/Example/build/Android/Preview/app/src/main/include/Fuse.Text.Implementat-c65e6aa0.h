// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Text/1.9.0/Implementation/JavaLineBreaks.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct BitArray;}}}}
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct JavaLineBreaks;}}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class JavaLineBreaks :7
// {
uClassType* JavaLineBreaks_typeof();
void JavaLineBreaks__CopyLineBreaks_fn(uString* text, ::g::Java::Object* outByteBufferHandle);
void JavaLineBreaks__DirectBufferFromUnoByteBuffer_fn(uArray* byteArray, ::g::Java::Object** __retval);
void JavaLineBreaks__GetSoftLineBreaks_fn(::g::Fuse::Text::Substring* text, ::g::Fuse::Text::Implementation::BitArray** __retval);

struct JavaLineBreaks : uObject
{
    static void CopyLineBreaks(uString* text, ::g::Java::Object* outByteBufferHandle);
    static ::g::Java::Object* DirectBufferFromUnoByteBuffer(uArray* byteArray);
    static ::g::Fuse::Text::Implementation::BitArray* GetSoftLineBreaks(::g::Fuse::Text::Substring* text);
};
// }

}}}} // ::g::Fuse::Text::Implementation
