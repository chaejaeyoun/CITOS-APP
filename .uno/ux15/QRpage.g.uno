[Uno.Compiler.UxGenerated]
public partial class QRpage: Fuse.Controls.Panel
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    internal global::Fuse.Controls.DockPanel topPanel;
    internal global::Fuse.Reactive.EventBinding temp_eb10;
    internal global::Fuse.Reactive.EventBinding temp_eb11;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "topPanel",
        "temp_eb10",
        "temp_eb11"
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
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Controls.Grid();
        var temp6 = new global::Fuse.Controls.DockPanel();
        topPanel = new global::Fuse.Controls.DockPanel();
        var temp7 = new global::Fuse.Controls.Button();
        var temp8 = new global::Fuse.Gestures.Clicked();
        var temp9 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb10 = new global::Fuse.Reactive.EventBinding(temp1);
        var temp10 = new global::Fuse.Drawing.StaticSolidColor(float4(0.2f, 0.2f, 0.2f, 1f));
        var temp11 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp12 = new global::Fuse.Controls.StackPanel();
        var temp13 = new global::Fuse.Controls.Text();
        var temp14 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Controls.Button();
        temp_eb11 = new global::Fuse.Reactive.EventBinding(temp3);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Page/QRpage.ux";
        temp4.LineNumber = 3;
        temp4.FileName = "Page/QRpage.ux";
        temp4.SourceLineNumber = 3;
        temp4.SourceFileName = "Page/QRpage.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import("../../Page/QRjs.js"));
        temp5.SourceLineNumber = 4;
        temp5.SourceFileName = "Page/QRpage.ux";
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp12);
        temp6.SourceLineNumber = 5;
        temp6.SourceFileName = "Page/QRpage.ux";
        temp6.Background = temp11;
        temp6.Children.Add(topPanel);
        topPanel.Name = __selector1;
        topPanel.SourceLineNumber = 6;
        topPanel.SourceFileName = "Page/QRpage.ux";
        global::Fuse.Controls.DockPanel.SetDock(topPanel, Fuse.Layouts.Dock.Top);
        topPanel.Background = temp10;
        topPanel.Children.Add(temp7);
        temp7.Text = "< Back";
        temp7.SourceLineNumber = 7;
        temp7.SourceFileName = "Page/QRpage.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp7, Fuse.Layouts.Dock.Left);
        temp7.Children.Add(temp8);
        temp8.SourceLineNumber = 8;
        temp8.SourceFileName = "Page/QRpage.ux";
        temp8.Actions.Add(temp9);
        temp8.Bindings.Add(temp_eb10);
        temp9.SourceLineNumber = 9;
        temp9.SourceFileName = "Page/QRpage.ux";
        temp9.Handler += temp_eb10.OnEvent;
        temp1.SourceLineNumber = 9;
        temp1.SourceFileName = "Page/QRpage.ux";
        temp12.SourceLineNumber = 15;
        temp12.SourceFileName = "Page/QRpage.ux";
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp);
        temp12.Children.Add(temp15);
        temp13.Value = "Qr scan example";
        temp13.FontSize = 32f;
        temp13.SourceLineNumber = 16;
        temp13.SourceFileName = "Page/QRpage.ux";
        temp.SourceLineNumber = 17;
        temp.SourceFileName = "Page/QRpage.ux";
        temp.Bindings.Add(temp14);
        temp2.SourceLineNumber = 17;
        temp2.SourceFileName = "Page/QRpage.ux";
        temp15.Text = "Scan";
        temp15.SourceLineNumber = 18;
        temp15.SourceFileName = "Page/QRpage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb11.OnEvent);
        temp15.Bindings.Add(temp_eb11);
        temp3.SourceLineNumber = 18;
        temp3.SourceFileName = "Page/QRpage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(topPanel);
        __g_nametable.Objects.Add(temp_eb10);
        __g_nametable.Objects.Add(temp_eb11);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "topPanel";
}
