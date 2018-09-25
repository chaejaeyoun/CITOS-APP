[Uno.Compiler.UxGenerated]
public partial class QRpage: Fuse.Controls.Panel
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    internal global::Fuse.Controls.DockPanel topPanel;
    internal global::Fuse.Reactive.EventBinding temp_eb10;
    internal global::Fuse.Reactive.EventBinding temp_eb11;
    internal global::Fuse.Reactive.EventBinding temp_eb12;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "topPanel",
        "temp_eb10",
        "temp_eb11",
        "temp_eb12"
    };
    static QRpage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public QRpage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Reactive.Data("goBack");
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new example01_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("txt");
        var temp3 = new global::Fuse.Reactive.Data("load");
        var temp4 = new global::Fuse.Reactive.Data("Clicked");
        var temp5 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp6 = new global::Fuse.Controls.Grid();
        var temp7 = new global::Fuse.Controls.DockPanel();
        topPanel = new global::Fuse.Controls.DockPanel();
        var temp8 = new global::Fuse.Controls.Button();
        var temp9 = new global::Fuse.Gestures.Clicked();
        var temp10 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb10 = new global::Fuse.Reactive.EventBinding(temp1);
        var temp11 = new global::Fuse.Drawing.StaticSolidColor(float4(0.2f, 0.2f, 0.2f, 1f));
        var temp12 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp13 = new global::Fuse.Controls.StackPanel();
        var temp14 = new global::Fuse.Controls.Text();
        var temp15 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Controls.Button();
        temp_eb11 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp17 = new global::Fuse.Controls.Panel();
        var temp18 = new global::Fuse.Controls.Text();
        var temp19 = new global::Fuse.Controls.Rectangle();
        temp_eb12 = new global::Fuse.Reactive.EventBinding(temp4);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Page/QRpage.ux";
        temp5.LineNumber = 3;
        temp5.FileName = "Page/QRpage.ux";
        temp5.SourceLineNumber = 3;
        temp5.SourceFileName = "Page/QRpage.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import("../../../../../Page/QRjs.js"));
        temp6.SourceLineNumber = 4;
        temp6.SourceFileName = "Page/QRpage.ux";
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp13);
        temp6.Children.Add(temp17);
        temp7.SourceLineNumber = 5;
        temp7.SourceFileName = "Page/QRpage.ux";
        temp7.Background = temp12;
        temp7.Children.Add(topPanel);
        topPanel.Name = __selector1;
        topPanel.SourceLineNumber = 6;
        topPanel.SourceFileName = "Page/QRpage.ux";
        global::Fuse.Controls.DockPanel.SetDock(topPanel, Fuse.Layouts.Dock.Top);
        topPanel.Background = temp11;
        topPanel.Children.Add(temp8);
        temp8.Text = "< Back";
        temp8.SourceLineNumber = 7;
        temp8.SourceFileName = "Page/QRpage.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp8, Fuse.Layouts.Dock.Left);
        temp8.Children.Add(temp9);
        temp9.SourceLineNumber = 8;
        temp9.SourceFileName = "Page/QRpage.ux";
        temp9.Actions.Add(temp10);
        temp9.Bindings.Add(temp_eb10);
        temp10.SourceLineNumber = 9;
        temp10.SourceFileName = "Page/QRpage.ux";
        temp10.Handler += temp_eb10.OnEvent;
        temp1.SourceLineNumber = 9;
        temp1.SourceFileName = "Page/QRpage.ux";
        temp13.SourceLineNumber = 15;
        temp13.SourceFileName = "Page/QRpage.ux";
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp);
        temp13.Children.Add(temp16);
        temp14.Value = "Qr scan example";
        temp14.FontSize = 32f;
        temp14.SourceLineNumber = 16;
        temp14.SourceFileName = "Page/QRpage.ux";
        temp.SourceLineNumber = 17;
        temp.SourceFileName = "Page/QRpage.ux";
        temp.Bindings.Add(temp15);
        temp2.SourceLineNumber = 17;
        temp2.SourceFileName = "Page/QRpage.ux";
        temp16.Text = "Scan";
        temp16.SourceLineNumber = 18;
        temp16.SourceFileName = "Page/QRpage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp16, temp_eb11.OnEvent);
        temp16.Bindings.Add(temp_eb11);
        temp3.SourceLineNumber = 18;
        temp3.SourceFileName = "Page/QRpage.ux";
        temp17.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp17.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp17.Margin = float4(20f, 20f, 20f, 20f);
        temp17.SourceLineNumber = 22;
        temp17.SourceFileName = "Page/QRpage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb12.OnEvent);
        temp17.Children.Add(temp18);
        temp17.Children.Add(temp19);
        temp17.Bindings.Add(temp_eb12);
        temp18.Value = "확인";
        temp18.FontSize = 20f;
        temp18.Color = float4(1f, 1f, 1f, 1f);
        temp18.Alignment = Fuse.Elements.Alignment.Center;
        temp18.SourceLineNumber = 23;
        temp18.SourceFileName = "Page/QRpage.ux";
        temp19.Color = float4(0f, 0f, 0f, 1f);
        temp19.SourceLineNumber = 24;
        temp19.SourceFileName = "Page/QRpage.ux";
        temp4.SourceLineNumber = 22;
        temp4.SourceFileName = "Page/QRpage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(topPanel);
        __g_nametable.Objects.Add(temp_eb10);
        __g_nametable.Objects.Add(temp_eb11);
        __g_nametable.Objects.Add(temp_eb12);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "topPanel";
}
