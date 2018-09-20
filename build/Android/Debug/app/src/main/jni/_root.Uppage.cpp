// This file was generated based on /Users/devel/github/CITOS-APP/.uno/ux15/Uppage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.example01_bundle.h>
#include <_root.example01_FuseC-1a82e90a.h>
#include <_root.Uppage.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[19];
static uType* TYPES[6];

namespace g{

// public partial sealed class Uppage :2
// {
// static Uppage() :20
static void Uppage__cctor_4_fn(uType* __type)
{
    Uppage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"topPanel"*/], ::STRINGS[2/*"temp_eb12"*/], ::STRINGS[3/*"temp_eb13"*/]);
    Uppage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"Value"*/]);
    Uppage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"topPanel"*/]);
}

static void Uppage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("topPanel");
    ::STRINGS[2] = uString::Const("temp_eb12");
    ::STRINGS[3] = uString::Const("temp_eb13");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("goBack");
    ::STRINGS[6] = uString::Const("saveid");
    ::STRINGS[7] = uString::Const("savepassword");
    ::STRINGS[8] = uString::Const("savename");
    ::STRINGS[9] = uString::Const("saveage");
    ::STRINGS[10] = uString::Const("savesex");
    ::STRINGS[11] = uString::Const("Save");
    ::STRINGS[12] = uString::Const("Page/Uppage.ux");
    ::STRINGS[13] = uString::Const("< Back");
    ::STRINGS[14] = uString::Const("ID");
    ::STRINGS[15] = uString::Const("PW");
    ::STRINGS[16] = uString::Const("Name");
    ::STRINGS[17] = uString::Const("Age");
    ::STRINGS[18] = uString::Const("Sex");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::example01_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(121,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(Uppage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Uppage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Uppage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Uppage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Uppage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Uppage, temp4_Value_inst), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(Uppage, topPanel), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Uppage, temp_eb12), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Uppage, temp_eb13), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(Uppage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&Uppage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Uppage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Uppage::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Uppage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 134;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Uppage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Uppage", options);
    type->fp_build_ = Uppage_build;
    type->fp_cctor_ = Uppage__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Uppage(Fuse.Navigation.Router router) :24
void Uppage__ctor_8_fn(Uppage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :30
void Uppage__InitializeUX_fn(Uppage* __this)
{
    __this->InitializeUX();
}

// public Uppage New(Fuse.Navigation.Router router) :24
void Uppage__New5_fn(::g::Fuse::Navigation::Router* router1, Uppage** __retval)
{
    *__retval = Uppage::New5(router1);
}

uSStrong<uArray*> Uppage::__g_static_nametable1_;
::g::Uno::UX::Selector Uppage::__selector0_;
::g::Uno::UX::Selector Uppage::__selector1_;

// public Uppage(Fuse.Navigation.Router router) [instance] :24
void Uppage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :30
void Uppage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Uppage::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"goBack"*/]);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::example01_FuseControlsTextInputControl_Value_Property::New1(temp, Uppage::__selector0_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"saveid"*/]);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::example01_FuseControlsTextInputControl_Value_Property::New1(temp1, Uppage::__selector0_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"savepassword"*/]);
    ::g::Fuse::Controls::TextInput* temp2 = ::g::Fuse::Controls::TextInput::New3();
    temp2_Value_inst = ::g::example01_FuseControlsTextInputControl_Value_Property::New1(temp2, Uppage::__selector0_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"savename"*/]);
    ::g::Fuse::Controls::TextInput* temp3 = ::g::Fuse::Controls::TextInput::New3();
    temp3_Value_inst = ::g::example01_FuseControlsTextInputControl_Value_Property::New1(temp3, Uppage::__selector0_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"saveage"*/]);
    ::g::Fuse::Controls::TextInput* temp4 = ::g::Fuse::Controls::TextInput::New3();
    temp4_Value_inst = ::g::example01_FuseControlsTextInputControl_Value_Property::New1(temp4, Uppage::__selector0_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"savesex"*/]);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"Save"*/]);
    ::g::Fuse::Reactive::JavaScript* temp12 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Grid* temp13 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp14 = ::g::Fuse::Controls::DockPanel::New4();
    topPanel = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Button* temp15 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Gestures::Clicked* temp16 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp17 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5);
    ::g::Fuse::Drawing::StaticSolidColor* temp18 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.2f, 0.2f, 0.2f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp19 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp20 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp6, 3);
    ::g::Fuse::Controls::Rectangle* temp22 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp7, 3);
    ::g::Fuse::Controls::Rectangle* temp24 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp8, 3);
    ::g::Fuse::Controls::Rectangle* temp26 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp27 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp9, 3);
    ::g::Fuse::Controls::Rectangle* temp28 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Controls::Rectangle* temp30 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp31 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp32 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp33 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp34 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp35 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp11);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp12->LineNumber(3);
    temp12->FileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp12->SourceLineNumber(3);
    temp12->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp12->File(::g::Uno::UX::BundleFileSource::New1(::g::example01_bundle::Upjs62fc7e87()));
    temp13->SourceLineNumber(4);
    temp13->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp14->SourceLineNumber(5);
    temp14->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp14->Background(temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), topPanel);
    uPtr(topPanel)->Name(Uppage::__selector1_);
    uPtr(topPanel)->SourceLineNumber(6);
    uPtr(topPanel)->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(topPanel, 2);
    uPtr(topPanel)->Background(temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp15->Text(::STRINGS[13/*"< Back"*/]);
    temp15->SourceLineNumber(7);
    temp15->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp15, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp16->SourceLineNumber(8);
    temp16->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb12);
    temp17->SourceLineNumber(9);
    temp17->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp17->add_Handler(uDelegate::New(::TYPES[4/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    temp5->SourceLineNumber(9);
    temp5->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp20->SourceLineNumber(15);
    temp20->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    temp->PlaceholderText(::STRINGS[14/*"ID"*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->SourceLineNumber(17);
    temp->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    temp6->SourceLineNumber(17);
    temp6->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp22->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp22->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp22->Alignment(12);
    temp22->SourceLineNumber(18);
    temp22->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp22, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp22, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp22, 2);
    temp1->IsPassword(true);
    temp1->PlaceholderText(::STRINGS[15/*"PW"*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->SourceLineNumber(21);
    temp1->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    temp7->SourceLineNumber(21);
    temp7->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp24->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp24->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp24->Alignment(12);
    temp24->SourceLineNumber(22);
    temp24->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp24, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp24, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp24, 2);
    temp2->PlaceholderText(::STRINGS[16/*"Name"*/]);
    temp2->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp2->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->SourceLineNumber(25);
    temp2->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp2, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp2, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp8->SourceLineNumber(25);
    temp8->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp26->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp26->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp26->Alignment(12);
    temp26->SourceLineNumber(26);
    temp26->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp26, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp26, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp26, 2);
    temp3->PlaceholderText(::STRINGS[17/*"Age"*/]);
    temp3->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp3->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->SourceLineNumber(29);
    temp3->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp3, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp3, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    temp9->SourceLineNumber(29);
    temp9->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp28->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp28->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp28->Alignment(12);
    temp28->SourceLineNumber(30);
    temp28->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp28, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp28, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp28, 2);
    temp4->PlaceholderText(::STRINGS[18/*"Sex"*/]);
    temp4->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp4->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp4->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp4->SourceLineNumber(33);
    temp4->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp4, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp4, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    temp10->SourceLineNumber(33);
    temp10->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp30->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp30->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp30->Alignment(12);
    temp30->SourceLineNumber(34);
    temp30->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp30, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp30, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp30, 2);
    temp31->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp31->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp31->Alignment(10);
    temp31->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp31->SourceLineNumber(39);
    temp31->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    temp32->Value(::STRINGS[11/*"Save"*/]);
    temp32->FontSize(20.0f);
    temp32->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp32->Alignment(10);
    temp32->SourceLineNumber(40);
    temp32->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp33->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp33->SourceLineNumber(41);
    temp33->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp34->SourceLineNumber(42);
    temp34->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb13);
    temp35->SourceLineNumber(43);
    temp35->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    temp35->add_Handler(uDelegate::New(::TYPES[4/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    temp11->SourceLineNumber(43);
    temp11->SourceFileName(::STRINGS[12/*"Page/Uppage...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), topPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
}

// public Uppage New(Fuse.Navigation.Router router) [static] :24
Uppage* Uppage::New5(::g::Fuse::Navigation::Router* router1)
{
    Uppage* obj1 = (Uppage*)uNew(Uppage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
