// This file was generated based on /Users/devel/github/CITOS-APP/example01.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.example01_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[7];

namespace g{

// public static generated class example01_bundle :0
// {
// static example01_bundle() :0
static void example01_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    example01_bundle::Cardjs74de2ce8_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"example01"*/]))->GetFile(::STRINGS[1/*"cardjs-6d51...*/]);
    example01_bundle::Getjs5cbe1e1a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"example01"*/]))->GetFile(::STRINGS[2/*"getjs-9bac4...*/]);
    example01_bundle::Homejsd670ae81_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"example01"*/]))->GetFile(::STRINGS[3/*"homejs-99df...*/]);
    example01_bundle::MainViewd948fbb9_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"example01"*/]))->GetFile(::STRINGS[4/*"mainview-cb...*/]);
    example01_bundle::QRjs7b2ca23d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"example01"*/]))->GetFile(::STRINGS[5/*"qrjs-7a708f...*/]);
    example01_bundle::Upjs62fc7e87_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"example01"*/]))->GetFile(::STRINGS[6/*"upjs-62406c...*/]);
}

static void example01_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("example01");
    ::STRINGS[1] = uString::Const("cardjs-6d514dc4.js");
    ::STRINGS[2] = uString::Const("getjs-9bac4446.js");
    ::STRINGS[3] = uString::Const("homejs-99df06ed.js");
    ::STRINGS[4] = uString::Const("mainview-cb8c4a65.js");
    ::STRINGS[5] = uString::Const("qrjs-7a708ff9.js");
    ::STRINGS[6] = uString::Const("upjs-62406c43.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&example01_bundle::Cardjs74de2ce8_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&example01_bundle::Getjs5cbe1e1a_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&example01_bundle::Homejsd670ae81_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&example01_bundle::MainViewd948fbb9_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&example01_bundle::QRjs7b2ca23d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&example01_bundle::Upjs62fc7e87_, uFieldFlagsStatic);
    type->Reflection.SetFields(6,
        new uField("Cardjs74de2ce8", 0),
        new uField("Getjs5cbe1e1a", 1),
        new uField("Homejsd670ae81", 2),
        new uField("MainViewd948fbb9", 3),
        new uField("QRjs7b2ca23d", 4),
        new uField("Upjs62fc7e87", 5));
}

uClassType* example01_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("example01_bundle", options);
    type->fp_build_ = example01_bundle_build;
    type->fp_cctor_ = example01_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> example01_bundle::Cardjs74de2ce8_;
uSStrong< ::g::Uno::IO::BundleFile*> example01_bundle::Getjs5cbe1e1a_;
uSStrong< ::g::Uno::IO::BundleFile*> example01_bundle::Homejsd670ae81_;
uSStrong< ::g::Uno::IO::BundleFile*> example01_bundle::MainViewd948fbb9_;
uSStrong< ::g::Uno::IO::BundleFile*> example01_bundle::QRjs7b2ca23d_;
uSStrong< ::g::Uno::IO::BundleFile*> example01_bundle::Upjs62fc7e87_;
// }

} // ::g
