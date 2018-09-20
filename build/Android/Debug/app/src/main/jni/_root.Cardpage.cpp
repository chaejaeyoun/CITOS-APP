// This file was generated based on /Users/devel/github/CITOS-APP/.uno/ux15/Cardpage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cardpage.h>
#include <_root.example01_bundle.h>
#include <_root.example01_FuseC-1a82e90a.h>
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
static uString* STRINGS[18];
static uType* TYPES[6];

namespace g{

// public partial sealed class Cardpage :2
// {
// static Cardpage() :19
static void Cardpage__cctor_4_fn(uType* __type)
{
    Cardpage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"topPanel"*/], ::STRINGS[2/*"temp_eb2"*/], ::STRINGS[3/*"temp_eb3"*/]);
    Cardpage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"Value"*/]);
    Cardpage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"topPanel"*/]);
}

static void Cardpage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("topPanel");
    ::STRINGS[2] = uString::Const("temp_eb2");
    ::STRINGS[3] = uString::Const("temp_eb3");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("goBack");
    ::STRINGS[6] = uString::Const("cardnum");
    ::STRINGS[7] = uString::Const("cardbank");
    ::STRINGS[8] = uString::Const("month");
    ::STRINGS[9] = uString::Const("year");
    ::STRINGS[10] = uString::Const("SaveCard");
    ::STRINGS[11] = uString::Const("Page/Cardpage.ux");
    ::STRINGS[12] = uString::Const("< Back");
    ::STRINGS[13] = uString::Const("Card Number(16 numbers without ' - ')");
    ::STRINGS[14] = uString::Const("Bank Number");
    ::STRINGS[15] = uString::Const("Month");
    ::STRINGS[16] = uString::Const("Year");
    ::STRINGS[17] = uString::Const("Card Save");
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
        ::g::Fuse::Navigation::Router_typeof(), offsetof(Cardpage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Cardpage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Cardpage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Cardpage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Cardpage, temp3_Value_inst), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(Cardpage, topPanel), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Cardpage, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Cardpage, temp_eb3), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(Cardpage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&Cardpage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Cardpage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Cardpage::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Cardpage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 133;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Cardpage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Cardpage", options);
    type->fp_build_ = Cardpage_build;
    type->fp_cctor_ = Cardpage__cctor_4_fn;
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

// public Cardpage(Fuse.Navigation.Router router) :23
void Cardpage__ctor_8_fn(Cardpage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :29
void Cardpage__InitializeUX_fn(Cardpage* __this)
{
    __this->InitializeUX();
}

// public Cardpage New(Fuse.Navigation.Router router) :23
void Cardpage__New5_fn(::g::Fuse::Navigation::Router* router1, Cardpage** __retval)
{
    *__retval = Cardpage::New5(router1);
}

uSStrong<uArray*> Cardpage::__g_static_nametable1_;
::g::Uno::UX::Selector Cardpage::__selector0_;
::g::Uno::UX::Selector Cardpage::__selector1_;

// public Cardpage(Fuse.Navigation.Router router) [instance] :23
void Cardpage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :29
void Cardpage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Cardpage::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"goBack"*/]);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::example01_FuseControlsTextInputControl_Value_Property::New1(temp, Cardpage::__selector0_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"cardnum"*/]);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::example01_FuseControlsTextInputControl_Value_Property::New1(temp1, Cardpage::__selector0_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"cardbank"*/]);
    ::g::Fuse::Controls::TextInput* temp2 = ::g::Fuse::Controls::TextInput::New3();
    temp2_Value_inst = ::g::example01_FuseControlsTextInputControl_Value_Property::New1(temp2, Cardpage::__selector0_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"month"*/]);
    ::g::Fuse::Controls::TextInput* temp3 = ::g::Fuse::Controls::TextInput::New3();
    temp3_Value_inst = ::g::example01_FuseControlsTextInputControl_Value_Property::New1(temp3, Cardpage::__selector0_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"year"*/]);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"SaveCard"*/]);
    ::g::Fuse::Reactive::JavaScript* temp10 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Grid* temp11 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp12 = ::g::Fuse::Controls::DockPanel::New4();
    topPanel = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Button* temp13 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Gestures::Clicked* temp14 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp15 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Drawing::StaticSolidColor* temp16 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.2f, 0.2f, 0.2f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp17 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp18 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp5, 3);
    ::g::Fuse::Controls::Rectangle* temp20 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp6, 3);
    ::g::Fuse::Controls::Rectangle* temp22 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp7, 3);
    ::g::Fuse::Controls::Rectangle* temp24 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp8, 3);
    ::g::Fuse::Controls::Rectangle* temp26 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp27 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp28 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp29 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp30 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp31 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp10->LineNumber(3);
    temp10->FileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp10->SourceLineNumber(3);
    temp10->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp10->File(::g::Uno::UX::BundleFileSource::New1(::g::example01_bundle::Cardjs74de2ce8()));
    temp11->SourceLineNumber(4);
    temp11->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp12->SourceLineNumber(5);
    temp12->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp12->Background(temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), topPanel);
    uPtr(topPanel)->Name(Cardpage::__selector1_);
    uPtr(topPanel)->SourceLineNumber(6);
    uPtr(topPanel)->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(topPanel, 2);
    uPtr(topPanel)->Background(temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->Text(::STRINGS[12/*"< Back"*/]);
    temp13->SourceLineNumber(7);
    temp13->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp13, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp14->SourceLineNumber(8);
    temp14->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp15->SourceLineNumber(9);
    temp15->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp15->add_Handler(uDelegate::New(::TYPES[4/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    temp4->SourceLineNumber(9);
    temp4->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp18->SourceLineNumber(15);
    temp18->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp->PlaceholderText(::STRINGS[13/*"Card Number...*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->SourceLineNumber(17);
    temp->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    temp5->SourceLineNumber(17);
    temp5->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp20->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp20->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp20->Alignment(12);
    temp20->SourceLineNumber(18);
    temp20->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp20, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp20, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp20, 2);
    temp1->PlaceholderText(::STRINGS[14/*"Bank Number"*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->SourceLineNumber(21);
    temp1->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    temp6->SourceLineNumber(21);
    temp6->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp22->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp22->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp22->Alignment(12);
    temp22->SourceLineNumber(22);
    temp22->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp22, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp22, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp22, 2);
    temp2->PlaceholderText(::STRINGS[15/*"Month"*/]);
    temp2->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp2->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->SourceLineNumber(25);
    temp2->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp2, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp2, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    temp7->SourceLineNumber(25);
    temp7->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp24->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp24->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp24->Alignment(12);
    temp24->SourceLineNumber(26);
    temp24->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp24, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp24, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp24, 2);
    temp3->PlaceholderText(::STRINGS[16/*"Year"*/]);
    temp3->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp3->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->SourceLineNumber(29);
    temp3->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp3, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp3, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp8->SourceLineNumber(29);
    temp8->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp26->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp26->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp26->Alignment(12);
    temp26->SourceLineNumber(30);
    temp26->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp26, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp26, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp26, 2);
    temp27->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp27->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp27->Alignment(10);
    temp27->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp27->SourceLineNumber(33);
    temp27->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    temp28->Value(::STRINGS[17/*"Card Save"*/]);
    temp28->FontSize(20.0f);
    temp28->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp28->Alignment(10);
    temp28->SourceLineNumber(34);
    temp28->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp29->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp29->SourceLineNumber(35);
    temp29->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp30->SourceLineNumber(36);
    temp30->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp31->SourceLineNumber(37);
    temp31->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    temp31->add_Handler(uDelegate::New(::TYPES[4/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    temp9->SourceLineNumber(37);
    temp9->SourceFileName(::STRINGS[11/*"Page/Cardpa...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), topPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
}

// public Cardpage New(Fuse.Navigation.Router router) [static] :23
Cardpage* Cardpage::New5(::g::Fuse::Navigation::Router* router1)
{
    Cardpage* obj1 = (Cardpage*)uNew(Cardpage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
