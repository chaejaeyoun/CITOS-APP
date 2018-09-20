[Uno.Compiler.UxGenerated]
public partial class Home: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Controls.DockPanel topPanel;
    internal global::Fuse.Reactive.EventBinding temp_eb6;
    internal global::Fuse.Reactive.EventBinding temp_eb7;
    internal global::Fuse.Reactive.EventBinding temp_eb8;
    internal global::Fuse.Reactive.EventBinding temp_eb9;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "topPanel",
        "temp_eb6",
        "temp_eb7",
        "temp_eb8",
        "temp_eb9"
    };
    static Home()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Home(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("goBack");
        var temp1 = new global::Fuse.Reactive.Data("GetClicked");
        var temp2 = new global::Fuse.Reactive.Data("QRClicked");
        var temp3 = new global::Fuse.Reactive.Data("CardClicked");
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Controls.Grid();
        var temp6 = new global::Fuse.Controls.DockPanel();
        topPanel = new global::Fuse.Controls.DockPanel();
        var temp7 = new global::Fuse.Controls.Button();
        var temp8 = new global::Fuse.Gestures.Clicked();
        var temp9 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb6 = new global::Fuse.Reactive.EventBinding(temp);
        var temp10 = new global::Fuse.Drawing.StaticSolidColor(float4(0.2f, 0.2f, 0.2f, 1f));
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new global::Fuse.Controls.Panel();
        var temp13 = new global::Fuse.Controls.Text();
        var temp14 = new global::Fuse.Controls.Rectangle();
        temp_eb7 = new global::Fuse.Reactive.EventBinding(temp1);
        var temp15 = new global::Fuse.Controls.Panel();
        var temp16 = new global::Fuse.Controls.Text();
        var temp17 = new global::Fuse.Controls.Rectangle();
        temp_eb8 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp18 = new global::Fuse.Controls.Panel();
        var temp19 = new global::Fuse.Controls.Text();
        var temp20 = new global::Fuse.Controls.Rectangle();
        temp_eb9 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp21 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        this.SourceLineNumber = 1;
        this.SourceFileName = "Page/Home.ux";
        temp4.LineNumber = 3;
        temp4.FileName = "Page/Home.ux";
        temp4.SourceLineNumber = 3;
        temp4.SourceFileName = "Page/Home.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import("../../../../../Page/Homejs.js"));
        temp5.SourceLineNumber = 4;
        temp5.SourceFileName = "Page/Home.ux";
        temp5.Children.Add(temp6);
        temp6.SourceLineNumber = 5;
        temp6.SourceFileName = "Page/Home.ux";
        temp6.Background = temp21;
        temp6.Children.Add(topPanel);
        temp6.Children.Add(temp11);
        topPanel.Name = __selector0;
        topPanel.SourceLineNumber = 6;
        topPanel.SourceFileName = "Page/Home.ux";
        global::Fuse.Controls.DockPanel.SetDock(topPanel, Fuse.Layouts.Dock.Top);
        topPanel.Background = temp10;
        topPanel.Children.Add(temp7);
        temp7.Text = "< Back";
        temp7.SourceLineNumber = 7;
        temp7.SourceFileName = "Page/Home.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp7, Fuse.Layouts.Dock.Left);
        temp7.Children.Add(temp8);
        temp8.SourceLineNumber = 8;
        temp8.SourceFileName = "Page/Home.ux";
        temp8.Actions.Add(temp9);
        temp8.Bindings.Add(temp_eb6);
        temp9.SourceLineNumber = 9;
        temp9.SourceFileName = "Page/Home.ux";
        temp9.Handler += temp_eb6.OnEvent;
        temp.SourceLineNumber = 9;
        temp.SourceFileName = "Page/Home.ux";
        temp11.SourceLineNumber = 14;
        temp11.SourceFileName = "Page/Home.ux";
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp15);
        temp11.Children.Add(temp18);
        temp12.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp12.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp12.Margin = float4(20f, 20f, 20f, 20f);
        temp12.SourceLineNumber = 15;
        temp12.SourceFileName = "Page/Home.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp12, temp_eb7.OnEvent);
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp14);
        temp12.Bindings.Add(temp_eb7);
        temp13.Value = "GET";
        temp13.FontSize = 20f;
        temp13.Color = float4(1f, 1f, 1f, 1f);
        temp13.Alignment = Fuse.Elements.Alignment.Center;
        temp13.SourceLineNumber = 16;
        temp13.SourceFileName = "Page/Home.ux";
        temp14.Color = float4(0f, 0f, 0f, 1f);
        temp14.SourceLineNumber = 17;
        temp14.SourceFileName = "Page/Home.ux";
        temp1.SourceLineNumber = 15;
        temp1.SourceFileName = "Page/Home.ux";
        temp15.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp15.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp15.Margin = float4(20f, 20f, 20f, 20f);
        temp15.SourceLineNumber = 20;
        temp15.SourceFileName = "Page/Home.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb8.OnEvent);
        temp15.Children.Add(temp16);
        temp15.Children.Add(temp17);
        temp15.Bindings.Add(temp_eb8);
        temp16.Value = "QR-Code";
        temp16.FontSize = 20f;
        temp16.Color = float4(1f, 1f, 1f, 1f);
        temp16.Alignment = Fuse.Elements.Alignment.Center;
        temp16.SourceLineNumber = 21;
        temp16.SourceFileName = "Page/Home.ux";
        temp17.Color = float4(0.9333333f, 0.4666667f, 0.4666667f, 1f);
        temp17.SourceLineNumber = 22;
        temp17.SourceFileName = "Page/Home.ux";
        temp2.SourceLineNumber = 20;
        temp2.SourceFileName = "Page/Home.ux";
        temp18.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp18.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp18.Margin = float4(20f, 20f, 20f, 20f);
        temp18.SourceLineNumber = 25;
        temp18.SourceFileName = "Page/Home.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp18, temp_eb9.OnEvent);
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp20);
        temp18.Bindings.Add(temp_eb9);
        temp19.Value = "Card-Set";
        temp19.FontSize = 20f;
        temp19.Color = float4(1f, 1f, 1f, 1f);
        temp19.Alignment = Fuse.Elements.Alignment.Center;
        temp19.SourceLineNumber = 26;
        temp19.SourceFileName = "Page/Home.ux";
        temp20.Color = float4(0.8666667f, 0.06666667f, 0.8666667f, 1f);
        temp20.SourceLineNumber = 27;
        temp20.SourceFileName = "Page/Home.ux";
        temp3.SourceLineNumber = 25;
        temp3.SourceFileName = "Page/Home.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(topPanel);
        __g_nametable.Objects.Add(temp_eb6);
        __g_nametable.Objects.Add(temp_eb7);
        __g_nametable.Objects.Add(temp_eb8);
        __g_nametable.Objects.Add(temp_eb9);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
    }
    static global::Uno.UX.Selector __selector0 = "topPanel";
}
