// This file was generated based on /Users/devel/github/CITOS-APP/.uno/ux15/Home.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.example01_bundle.h>
#include <_root.Home.h>
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
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.Data.h>
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
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[15];
static uType* TYPES[7];

namespace g{

// public partial sealed class Home :2
// {
// static Home() :19
static void Home__cctor_4_fn(uType* __type)
{
    Home::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"topPanel"*/], ::STRINGS[2/*"temp_eb6"*/], ::STRINGS[3/*"temp_eb7"*/], ::STRINGS[4/*"temp_eb8"*/], ::STRINGS[5/*"temp_eb9"*/]);
    Home::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"topPanel"*/]);
}

static void Home_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("topPanel");
    ::STRINGS[2] = uString::Const("temp_eb6");
    ::STRINGS[3] = uString::Const("temp_eb7");
    ::STRINGS[4] = uString::Const("temp_eb8");
    ::STRINGS[5] = uString::Const("temp_eb9");
    ::STRINGS[6] = uString::Const("goBack");
    ::STRINGS[7] = uString::Const("GetClicked");
    ::STRINGS[8] = uString::Const("QRClicked");
    ::STRINGS[9] = uString::Const("CardClicked");
    ::STRINGS[10] = uString::Const("Page/Home.ux");
    ::STRINGS[11] = uString::Const("< Back");
    ::STRINGS[12] = uString::Const("GET");
    ::STRINGS[13] = uString::Const("QR-Code");
    ::STRINGS[14] = uString::Const("Card-Set");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[5] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
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
        ::g::Fuse::Navigation::Router_typeof(), offsetof(Home, router), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(Home, topPanel), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Home, temp_eb6), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Home, temp_eb7), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Home, temp_eb8), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Home, temp_eb9), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(Home, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&Home::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Home::__selector0_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Home_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 130;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Home);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Home", options);
    type->fp_build_ = Home_build;
    type->fp_cctor_ = Home__cctor_4_fn;
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

// public Home(Fuse.Navigation.Router router) :23
void Home__ctor_8_fn(Home* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :29
void Home__InitializeUX_fn(Home* __this)
{
    __this->InitializeUX();
}

// public Home New(Fuse.Navigation.Router router) :23
void Home__New5_fn(::g::Fuse::Navigation::Router* router1, Home** __retval)
{
    *__retval = Home::New5(router1);
}

uSStrong<uArray*> Home::__g_static_nametable1_;
::g::Uno::UX::Selector Home::__selector0_;

// public Home(Fuse.Navigation.Router router) [instance] :23
void Home::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :29
void Home::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Home::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"goBack"*/]);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"GetClicked"*/]);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"QRClicked"*/]);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"CardClicked"*/]);
    ::g::Fuse::Reactive::JavaScript* temp4 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Grid* temp5 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp6 = ::g::Fuse::Controls::DockPanel::New4();
    topPanel = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Button* temp7 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Gestures::Clicked* temp8 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp9 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp);
    ::g::Fuse::Drawing::StaticSolidColor* temp10 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.2f, 0.2f, 0.2f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp11 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp12 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp13 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp14 = ::g::Fuse::Controls::Rectangle::New3();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    ::g::Fuse::Controls::Panel* temp15 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp16 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp17 = ::g::Fuse::Controls::Rectangle::New3();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ::g::Fuse::Controls::Panel* temp18 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp19 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp20 = ::g::Fuse::Controls::Rectangle::New3();
    temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Fuse::Drawing::StaticSolidColor* temp21 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp4->LineNumber(3);
    temp4->FileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp4->SourceLineNumber(3);
    temp4->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp4->File(::g::Uno::UX::BundleFileSource::New1(::g::example01_bundle::Homejsd670ae81()));
    temp5->SourceLineNumber(4);
    temp5->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->SourceLineNumber(5);
    temp6->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp6->Background(temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), topPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    uPtr(topPanel)->Name(Home::__selector0_);
    uPtr(topPanel)->SourceLineNumber(6);
    uPtr(topPanel)->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(topPanel, 2);
    uPtr(topPanel)->Background(temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp7->Text(::STRINGS[11/*"< Back"*/]);
    temp7->SourceLineNumber(7);
    temp7->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp8->SourceLineNumber(8);
    temp8->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    temp9->SourceLineNumber(9);
    temp9->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp9->add_Handler(uDelegate::New(::TYPES[4/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    temp->SourceLineNumber(9);
    temp->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp11->SourceLineNumber(14);
    temp11->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp12->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp12->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp12->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp12->SourceLineNumber(15);
    temp12->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp12, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp13->Value(::STRINGS[12/*"GET"*/]);
    temp13->FontSize(20.0f);
    temp13->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp13->Alignment(10);
    temp13->SourceLineNumber(16);
    temp13->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp14->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp14->SourceLineNumber(17);
    temp14->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp1->SourceLineNumber(15);
    temp1->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp15->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp15->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp15->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp15->SourceLineNumber(20);
    temp15->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp15, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb8);
    temp16->Value(::STRINGS[13/*"QR-Code"*/]);
    temp16->FontSize(20.0f);
    temp16->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp16->Alignment(10);
    temp16->SourceLineNumber(21);
    temp16->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp17->Color(::g::Uno::Float4__New2(0.9333333f, 0.4666667f, 0.4666667f, 1.0f));
    temp17->SourceLineNumber(22);
    temp17->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp2->SourceLineNumber(20);
    temp2->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp18->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp18->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp18->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp18->SourceLineNumber(25);
    temp18->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp18, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb9)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb9);
    temp19->Value(::STRINGS[14/*"Card-Set"*/]);
    temp19->FontSize(20.0f);
    temp19->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp19->Alignment(10);
    temp19->SourceLineNumber(26);
    temp19->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp20->Color(::g::Uno::Float4__New2(0.8666667f, 0.06666667f, 0.8666667f, 1.0f));
    temp20->SourceLineNumber(27);
    temp20->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    temp3->SourceLineNumber(25);
    temp3->SourceFileName(::STRINGS[10/*"Page/Home.ux"*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), topPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
}

// public Home New(Fuse.Navigation.Router router) [static] :23
Home* Home::New5(::g::Fuse::Navigation::Router* router1)
{
    Home* obj1 = (Home*)uNew(Home_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
