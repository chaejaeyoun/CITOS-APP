// This file was generated based on /Users/devel/github/CITOS-APP/build/Android/Preview/cache/ux15/Getpage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.example01_bundle.h>
#include <_root.example01_FuseC-f6e83db.h>
#include <_root.Getpage.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Activated.h>
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
static uString* STRINGS[11];
static uType* TYPES[6];

namespace g{

// public partial sealed class Getpage :2
// {
// static Getpage() :18
static void Getpage__cctor_4_fn(uType* __type)
{
    Getpage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb4"*/], ::STRINGS[2/*"topPanel"*/], ::STRINGS[3/*"temp_eb5"*/], ::STRINGS[4/*"detailSV"*/]);
    Getpage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"Url"*/]);
    Getpage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"topPanel"*/]);
    Getpage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"detailSV"*/]);
}

static void Getpage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb4");
    ::STRINGS[2] = uString::Const("topPanel");
    ::STRINGS[3] = uString::Const("temp_eb5");
    ::STRINGS[4] = uString::Const("detailSV");
    ::STRINGS[5] = uString::Const("Url");
    ::STRINGS[6] = uString::Const("GetImage");
    ::STRINGS[7] = uString::Const("goBack");
    ::STRINGS[8] = uString::Const("images");
    ::STRINGS[9] = uString::Const("Page/Getpage.ux");
    ::STRINGS[10] = uString::Const("< Back");
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
    type->SetFields(126,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(Getpage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Getpage, temp_Url_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Getpage, temp_eb4), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(Getpage, topPanel), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Getpage, temp_eb5), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(Getpage, detailSV), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(Getpage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&Getpage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Getpage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Getpage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Getpage::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Getpage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* Getpage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 137;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Getpage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Getpage", options);
    type->fp_build_ = Getpage_build;
    type->fp_cctor_ = Getpage__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
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

// public Getpage(Fuse.Navigation.Router router) :22
void Getpage__ctor_8_fn(Getpage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :28
void Getpage__InitializeUX_fn(Getpage* __this)
{
    __this->InitializeUX();
}

// public Getpage New(Fuse.Navigation.Router router) :22
void Getpage__New5_fn(::g::Fuse::Navigation::Router* router1, Getpage** __retval)
{
    *__retval = Getpage::New5(router1);
}

uSStrong<uArray*> Getpage::__g_static_nametable1_;
::g::Uno::UX::Selector Getpage::__selector0_;
::g::Uno::UX::Selector Getpage::__selector1_;
::g::Uno::UX::Selector Getpage::__selector2_;

// public Getpage(Fuse.Navigation.Router router) [instance] :22
void Getpage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("Getpage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :28
void Getpage::InitializeUX()
{
    uStackFrame __("Getpage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Getpage::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"GetImage"*/]);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"goBack"*/]);
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    temp_Url_inst = ::g::example01_FuseControlsImage_Url_Property::New1(temp, Getpage::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"images"*/]);
    ::g::Fuse::Reactive::JavaScript* temp4 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Grid* temp5 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp6 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Navigation::Activated* temp7 = ::g::Fuse::Navigation::Activated::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp8 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    topPanel = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Button* temp9 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Gestures::Clicked* temp10 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp11 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ::g::Fuse::Drawing::StaticSolidColor* temp12 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.2f, 0.2f, 0.2f, 1.0f));
    detailSV = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp13 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(temp_Url_inst, (uObject*)temp3, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp15 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    temp4->LineNumber(4);
    temp4->FileName(::STRINGS[9/*"Page/Getpag...*/]);
    temp4->SourceLineNumber(4);
    temp4->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    temp4->File(::g::Uno::UX::BundleFileSource::New1(::g::example01_bundle::Getjs5cbe1e1a()));
    temp5->SourceLineNumber(5);
    temp5->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->SourceLineNumber(6);
    temp6->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    temp6->Background(temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), topPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), detailSV);
    temp7->SourceLineNumber(7);
    temp7->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    temp8->SourceLineNumber(8);
    temp8->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    temp8->add_Handler(uDelegate::New(::TYPES[4/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    temp1->SourceLineNumber(8);
    temp1->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    uPtr(topPanel)->Name(Getpage::__selector1_);
    uPtr(topPanel)->SourceLineNumber(10);
    uPtr(topPanel)->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(topPanel, 2);
    uPtr(topPanel)->Background(temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->Text(::STRINGS[10/*"< Back"*/]);
    temp9->SourceLineNumber(11);
    temp9->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp9, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp10->SourceLineNumber(12);
    temp10->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    temp11->SourceLineNumber(13);
    temp11->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    temp11->add_Handler(uDelegate::New(::TYPES[4/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    temp2->SourceLineNumber(13);
    temp2->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    uPtr(detailSV)->Name(Getpage::__selector2_);
    uPtr(detailSV)->SourceLineNumber(19);
    uPtr(detailSV)->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(detailSV, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(detailSV)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->Orientation(0);
    temp13->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp13->SourceLineNumber(21);
    temp13->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->SourceLineNumber(22);
    temp->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    temp3->SourceLineNumber(22);
    temp3->SourceFileName(::STRINGS[9/*"Page/Getpag...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), topPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), detailSV);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
}

// public Getpage New(Fuse.Navigation.Router router) [static] :22
Getpage* Getpage::New5(::g::Fuse::Navigation::Router* router1)
{
    Getpage* obj1 = (Getpage*)uNew(Getpage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
