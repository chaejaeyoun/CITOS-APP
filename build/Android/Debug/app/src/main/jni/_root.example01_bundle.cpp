// This file was generated based on /Users/devel/Downloads/SWAPP/example01.unoproj.
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
    example01_bundle::Cardjs493886af_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"example01"*/]))->GetFile(::STRINGS[1/*"cardjs-6d51...*/]);
    example01_bundle::Getjsb5045a25_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"example01"*/]))->GetFile(::STRINGS[2/*"getjs-9bac4...*/]);
    example01_bundle::Homejs20a25a68_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"example01"*/]))->GetFile(::STRINGS[3/*"homejs-99df...*/]);
    example01_bundle::MainViewe8f1283a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"example01"*/]))->GetFile(::STRINGS[4/*"mainview-cb...*/]);
    example01_bundle::QRjsd8136104_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"example01"*/]))->GetFile(::STRINGS[5/*"qrjs-7a708f...*/]);
    example01_bundle::Upjs24565a6a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"example01"*/]))->GetFile(::STRINGS[6/*"upjs-62406c...*/]);
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
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&example01_bundle::Cardjs493886af_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&example01_bundle::Getjsb5045a25_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&example01_bundle::Homejs20a25a68_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&example01_bundle::MainViewe8f1283a_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&example01_bundle::QRjsd8136104_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&example01_bundle::Upjs24565a6a_, uFieldFlagsStatic);
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

uSStrong< ::g::Uno::IO::BundleFile*> example01_bundle::Cardjs493886af_;
uSStrong< ::g::Uno::IO::BundleFile*> example01_bundle::Getjsb5045a25_;
uSStrong< ::g::Uno::IO::BundleFile*> example01_bundle::Homejs20a25a68_;
uSStrong< ::g::Uno::IO::BundleFile*> example01_bundle::MainViewe8f1283a_;
uSStrong< ::g::Uno::IO::BundleFile*> example01_bundle::QRjsd8136104_;
uSStrong< ::g::Uno::IO::BundleFile*> example01_bundle::Upjs24565a6a_;
// }

} // ::g
