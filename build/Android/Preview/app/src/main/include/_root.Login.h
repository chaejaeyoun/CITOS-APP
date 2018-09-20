// This file was generated based on /Users/devel/github/CITOS-APP/build/Android/Preview/cache/ux15/Login.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Login;}

namespace g{

// public partial sealed class Login :2
// {
::g::Fuse::Controls::Panel_type* Login_typeof();
void Login__ctor_7_fn(Login* __this, ::g::Fuse::Navigation::Router* router1);
void Login__InitializeUX_fn(Login* __this);
void Login__New4_fn(::g::Fuse::Navigation::Router* router1, Login** __retval);

struct Login : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Login_typeof()->Init(), __selector0_; }

    void ctor_7(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static Login* New4(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
