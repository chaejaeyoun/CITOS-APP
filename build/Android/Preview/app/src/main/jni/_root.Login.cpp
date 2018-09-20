// This file was generated based on /Users/devel/github/CITOS-APP/build/Android/Preview/cache/ux15/Login.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.example01_FuseC-1a82e90a.h>
#include <_root.Login.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[10];
static uType* TYPES[4];

namespace g{

// public partial sealed class Login :2
// {
// static Login() :9
static void Login__cctor_4_fn(uType* __type)
{
    Login::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
}

static void Login_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("userid");
    ::STRINGS[2] = uString::Const("password");
    ::STRINGS[3] = uString::Const("Signin");
    ::STRINGS[4] = uString::Const("Signup");
    ::STRINGS[5] = uString::Const("MainView.ux");
    ::STRINGS[6] = uString::Const(" Username");
    ::STRINGS[7] = uString::Const("Password");
    ::STRINGS[8] = uString::Const("Sign IN");
    ::STRINGS[9] = uString::Const("Sign UP");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::VisualEventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(120,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(Login, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Login, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Login, temp1_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Login, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Login, temp_eb1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Login::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Login__New4_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* Login_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 126;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(Login);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Login", options);
    type->fp_build_ = Login_build;
    type->fp_cctor_ = Login__cctor_4_fn;
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

// public Login(Fuse.Navigation.Router router) :13
void Login__ctor_7_fn(Login* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_7(router1);
}

// private void InitializeUX() :19
void Login__InitializeUX_fn(Login* __this)
{
    __this->InitializeUX();
}

// public Login New(Fuse.Navigation.Router router) :13
void Login__New4_fn(::g::Fuse::Navigation::Router* router1, Login** __retval)
{
    *__retval = Login::New4(router1);
}

::g::Uno::UX::Selector Login::__selector0_;

// public Login(Fuse.Navigation.Router router) [instance] :13
void Login::ctor_7(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("Login", ".ctor(Fuse.Navigation.Router)");
    ctor_6();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :19
void Login::InitializeUX()
{
    uStackFrame __("Login", "InitializeUX()");
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::example01_FuseControlsTextInputControl_Value_Property::New1(temp, Login::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"userid"*/]);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::example01_FuseControlsTextInputControl_Value_Property::New1(temp1, Login::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"password"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"Signin"*/]);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"Signup"*/]);
    ::g::Fuse::Controls::Grid* temp6 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 3);
    ::g::Fuse::Controls::Rectangle* temp8 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Controls::Rectangle* temp10 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp11 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp13 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp14 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp15 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Controls::Panel* temp16 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp17 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp18 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp19 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp20 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5);
    SourceLineNumber(18);
    SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    temp6->SourceLineNumber(20);
    temp6->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp->PlaceholderText(::STRINGS[6/*" Username"*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->SourceLineNumber(22);
    temp->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    temp2->SourceLineNumber(22);
    temp2->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    temp8->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp8->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp8->Alignment(12);
    temp8->SourceLineNumber(23);
    temp8->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp8, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp8, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp8, 2);
    temp1->IsPassword(true);
    temp1->PlaceholderText(::STRINGS[7/*"Password"*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->SourceLineNumber(26);
    temp1->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    temp3->SourceLineNumber(26);
    temp3->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    temp10->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp10->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp10->Alignment(12);
    temp10->SourceLineNumber(27);
    temp10->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp10, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp10, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp10, 2);
    temp11->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp11->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp11->Alignment(10);
    temp11->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp11->SourceLineNumber(30);
    temp11->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp12->Value(::STRINGS[8/*"Sign IN"*/]);
    temp12->FontSize(20.0f);
    temp12->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp12->Alignment(10);
    temp12->SourceLineNumber(31);
    temp12->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    temp13->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp13->SourceLineNumber(32);
    temp13->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    temp14->SourceLineNumber(33);
    temp14->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp15->SourceLineNumber(34);
    temp15->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    temp15->add_Handler(uDelegate::New(::TYPES[3/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    temp4->SourceLineNumber(34);
    temp4->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    temp16->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp16->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp16->Alignment(10);
    temp16->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp16->SourceLineNumber(40);
    temp16->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp17->Value(::STRINGS[9/*"Sign UP"*/]);
    temp17->FontSize(20.0f);
    temp17->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp17->Alignment(10);
    temp17->SourceLineNumber(41);
    temp17->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    temp18->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp18->SourceLineNumber(42);
    temp18->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    temp19->SourceLineNumber(43);
    temp19->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp20->SourceLineNumber(44);
    temp20->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    temp20->add_Handler(uDelegate::New(::TYPES[3/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    temp5->SourceLineNumber(44);
    temp5->SourceFileName(::STRINGS[5/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
}

// public Login New(Fuse.Navigation.Router router) [static] :13
Login* Login::New4(::g::Fuse::Navigation::Router* router1)
{
    Login* obj1 = (Login*)uNew(Login_typeof());
    obj1->ctor_7(router1);
    return obj1;
}
// }

} // ::g
