// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Android.Bindings-f8058cd2.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Byte.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Compiler.ExportTa-d07b0040.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno/JNIHelper.h>

namespace g{
namespace Fuse{
namespace Android{
namespace Bindings{

// /usr/local/share/uno/Packages/Fuse.Android/1.9.0/AndroidInterop.uno
// -------------------------------------------------------------------

// internal static extern class AndroidDeviceInterop :16
// {
static void AndroidDeviceInterop_build(uType* type)
{
}

uClassType* AndroidDeviceInterop_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Bindings.AndroidDeviceInterop", options);
    type->fp_build_ = AndroidDeviceInterop_build;
    return type;
}

// public static extern Java.Object LaunchIntent(string action, string uri, [string packageName], [string className]) :19
void AndroidDeviceInterop__LaunchIntent_fn(uString* action, uString* uri, uString* packageName, uString* className, ::g::Java::Object** __retval)
{
    *__retval = AndroidDeviceInterop::LaunchIntent(action, uri, packageName, className);
}

// public static Java.Object MakeBufferInputStream(byte[] unoArr) :66
void AndroidDeviceInterop__MakeBufferInputStream_fn(uArray* unoArr, ::g::Java::Object** __retval)
{
    *__retval = AndroidDeviceInterop::MakeBufferInputStream(unoArr);
}

// public static Java.Object MakeBufferInputStream(Java.Object buf) :73
void AndroidDeviceInterop__MakeBufferInputStream1_fn(::g::Java::Object* buf, ::g::Java::Object** __retval)
{
    *__retval = AndroidDeviceInterop::MakeBufferInputStream1(buf);
}

// public static Java.Object MakeMediaDataSource(byte[] unoArr) :54
void AndroidDeviceInterop__MakeMediaDataSource_fn(uArray* unoArr, ::g::Java::Object** __retval)
{
    *__retval = AndroidDeviceInterop::MakeMediaDataSource(unoArr);
}

// public static Java.Object MakeMediaDataSource(Java.Object buf) :61
void AndroidDeviceInterop__MakeMediaDataSource1_fn(::g::Java::Object* buf, ::g::Java::Object** __retval)
{
    *__retval = AndroidDeviceInterop::MakeMediaDataSource1(buf);
}

// public static Java.Object OpenAssetFileDescriptor(Uno.IO.BundleFile bundle) :38
void AndroidDeviceInterop__OpenAssetFileDescriptor_fn(::g::Uno::IO::BundleFile* bundle, ::g::Java::Object** __retval)
{
    *__retval = AndroidDeviceInterop::OpenAssetFileDescriptor(bundle);
}

// public static Java.Object OpenAssetFileDescriptor(Uno.UX.BundleFileSource fileSource) :32
void AndroidDeviceInterop__OpenAssetFileDescriptor1_fn(::g::Uno::UX::BundleFileSource* fileSource, ::g::Java::Object** __retval)
{
    *__retval = AndroidDeviceInterop::OpenAssetFileDescriptor1(fileSource);
}

// public static extern Java.Object LaunchIntent(string action, string uri, [string packageName], [string className]) [static] :19
::g::Java::Object* AndroidDeviceInterop::LaunchIntent(uString* action, uString* uri, uString* packageName, uString* className)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LaunchIntent314", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;");
        uString* _uaction=action;
        jstring _action = JniHelper::UnoToJavaString(_uaction);
        uString* _uuri=uri;
        jstring _uri = JniHelper::UnoToJavaString(_uuri);
        uString* _upackageName=packageName;
        jstring _packageName = JniHelper::UnoToJavaString(_upackageName);
        uString* _uclassName=className;
        jstring _className = JniHelper::UnoToJavaString(_uclassName);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_action,_uri,_packageName,_className);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_action!=NULL) { U_JNIVAR->DeleteLocalRef(_action); }
        if (_uri!=NULL) { U_JNIVAR->DeleteLocalRef(_uri); }
        if (_packageName!=NULL) { U_JNIVAR->DeleteLocalRef(_packageName); }
        if (_className!=NULL) { U_JNIVAR->DeleteLocalRef(_className); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Java.Object MakeBufferInputStream(byte[] unoArr) [static] :66
::g::Java::Object* AndroidDeviceInterop::MakeBufferInputStream(uArray* unoArr)
{
    uStackFrame __("Fuse.Android.Bindings.AndroidDeviceInterop", "MakeBufferInputStream(byte[])");
    ::g::Java::Object* buf = ::g::Uno::Compiler::ExportTargetInterop::ForeignDataView::Create(unoArr);
    return AndroidDeviceInterop::MakeBufferInputStream1(buf);
}

// public static Java.Object MakeBufferInputStream(Java.Object buf) [static] :73
::g::Java::Object* AndroidDeviceInterop::MakeBufferInputStream1(::g::Java::Object* buf)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeBufferInputStream1315", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _ubuf=buf;
        jobject _buf = (_ubuf==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubuf, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_buf);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_buf!=NULL) { U_JNIVAR->DeleteLocalRef(_buf); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Java.Object MakeMediaDataSource(byte[] unoArr) [static] :54
::g::Java::Object* AndroidDeviceInterop::MakeMediaDataSource(uArray* unoArr)
{
    uStackFrame __("Fuse.Android.Bindings.AndroidDeviceInterop", "MakeMediaDataSource(byte[])");
    ::g::Java::Object* buf = ::g::Uno::Compiler::ExportTargetInterop::ForeignDataView::Create(unoArr);
    return AndroidDeviceInterop::MakeMediaDataSource1(buf);
}

// public static Java.Object MakeMediaDataSource(Java.Object buf) [static] :61
::g::Java::Object* AndroidDeviceInterop::MakeMediaDataSource1(::g::Java::Object* buf)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeMediaDataSource1316", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _ubuf=buf;
        jobject _buf = (_ubuf==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubuf, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_buf);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_buf!=NULL) { U_JNIVAR->DeleteLocalRef(_buf); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Java.Object OpenAssetFileDescriptor(Uno.IO.BundleFile bundle) [static] :38
::g::Java::Object* AndroidDeviceInterop::OpenAssetFileDescriptor(::g::Uno::IO::BundleFile* bundle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "OpenAssetFileDescriptor317", "(Lcom/uno/UnoObject;)Ljava/lang/Object;");
        ::g::Uno::IO::BundleFile* _ubundle=bundle;
        jobject _bundle = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_ubundle);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_bundle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_bundle!=NULL) { U_JNIVAR->DeleteLocalRef(_bundle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Java.Object OpenAssetFileDescriptor(Uno.UX.BundleFileSource fileSource) [static] :32
::g::Java::Object* AndroidDeviceInterop::OpenAssetFileDescriptor1(::g::Uno::UX::BundleFileSource* fileSource)
{
    uStackFrame __("Fuse.Android.Bindings.AndroidDeviceInterop", "OpenAssetFileDescriptor(Uno.UX.BundleFileSource)");
    return AndroidDeviceInterop::OpenAssetFileDescriptor(uPtr(fileSource)->BundleFile);
}
// }

}}}} // ::g::Fuse::Android::Bindings
