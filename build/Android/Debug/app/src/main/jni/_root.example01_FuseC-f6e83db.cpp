// This file was generated based on /Users/devel/Downloads/SWAPP/.uno/ux15/example01.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.example01_FuseC-f6e83db.h>
#include <Fuse.Controls.Image.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class example01_FuseControlsImage_Url_Property :10
// {
static void example01_FuseControlsImage_Url_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Image_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Image*/], offsetof(example01_FuseControlsImage_Url_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* example01_FuseControlsImage_Url_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(example01_FuseControlsImage_Url_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("example01_FuseControlsImage_Url_Property", options);
    type->fp_build_ = example01_FuseControlsImage_Url_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))example01_FuseControlsImage_Url_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))example01_FuseControlsImage_Url_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))example01_FuseControlsImage_Url_Property__Set1_fn;
    return type;
}

// public example01_FuseControlsImage_Url_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) :13
void example01_FuseControlsImage_Url_Property__ctor_3_fn(example01_FuseControlsImage_Url_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :15
void example01_FuseControlsImage_Url_Property__Get1_fn(example01_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->Url(), void();
}

// public example01_FuseControlsImage_Url_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) :13
void example01_FuseControlsImage_Url_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, example01_FuseControlsImage_Url_Property** __retval)
{
    *__retval = example01_FuseControlsImage_Url_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void example01_FuseControlsImage_Url_Property__get_Object_fn(example01_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :16
void example01_FuseControlsImage_Url_Property__Set1_fn(example01_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->Url(v);
}

// public example01_FuseControlsImage_Url_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) [instance] :13
void example01_FuseControlsImage_Url_Property::ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public example01_FuseControlsImage_Url_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) [static] :13
example01_FuseControlsImage_Url_Property* example01_FuseControlsImage_Url_Property::New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    example01_FuseControlsImage_Url_Property* obj1 = (example01_FuseControlsImage_Url_Property*)uNew(example01_FuseControlsImage_Url_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
