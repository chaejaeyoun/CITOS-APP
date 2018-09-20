namespace Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Home: Fuse.Controls.Page
    {
        readonly Fuse.Navigation.Router router;
        internal global::Fuse.Controls.DockPanel topPanel;
        internal global::Fuse.Reactive.EventBinding temp_eb4;
        internal global::Fuse.Reactive.EventBinding temp_eb5;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "router",
            "topPanel",
            "temp_eb4",
            "temp_eb5"
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
            var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp3 = new global::Fuse.Controls.Grid();
            var temp4 = new global::Fuse.Controls.DockPanel();
            topPanel = new global::Fuse.Controls.DockPanel();
            var temp5 = new global::Fuse.Controls.Button();
            var temp6 = new global::Fuse.Gestures.Clicked();
            var temp7 = new global::Fuse.Triggers.Actions.Callback();
            temp_eb4 = new global::Fuse.Reactive.EventBinding(temp);
            var temp8 = new global::Fuse.Drawing.StaticSolidColor(float4(0.2f, 0.2f, 0.2f, 1f));
            var temp9 = new global::Fuse.Controls.StackPanel();
            var temp10 = new global::Fuse.Controls.Panel();
            var temp11 = new global::Fuse.Controls.Text();
            var temp12 = new global::Fuse.Controls.Rectangle();
            temp_eb5 = new global::Fuse.Reactive.EventBinding(temp1);
            var temp13 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
            this.SourceLineNumber = 1;
            this.SourceFileName = "Page/Home.ux";
            temp2.LineNumber = 3;
            temp2.FileName = "Page/Home.ux";
            temp2.SourceLineNumber = 3;
            temp2.SourceFileName = "Page/Home.ux";
            temp2.File = new global::Uno.UX.BundleFileSource(import("../../../../../Page/Homejs.js"));
            temp3.SourceLineNumber = 4;
            temp3.SourceFileName = "Page/Home.ux";
            temp3.Children.Add(temp4);
            temp4.SourceLineNumber = 5;
            temp4.SourceFileName = "Page/Home.ux";
            temp4.Background = temp13;
            temp4.Children.Add(topPanel);
            temp4.Children.Add(temp9);
            topPanel.Name = __selector0;
            topPanel.SourceLineNumber = 6;
            topPanel.SourceFileName = "Page/Home.ux";
            global::Fuse.Controls.DockPanel.SetDock(topPanel, Fuse.Layouts.Dock.Top);
            topPanel.Background = temp8;
            topPanel.Children.Add(temp5);
            temp5.Text = "< Back";
            temp5.SourceLineNumber = 7;
            temp5.SourceFileName = "Page/Home.ux";
            global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Left);
            temp5.Children.Add(temp6);
            temp6.SourceLineNumber = 8;
            temp6.SourceFileName = "Page/Home.ux";
            temp6.Actions.Add(temp7);
            temp6.Bindings.Add(temp_eb4);
            temp7.SourceLineNumber = 9;
            temp7.SourceFileName = "Page/Home.ux";
            temp7.Handler += temp_eb4.OnEvent;
            temp.SourceLineNumber = 9;
            temp.SourceFileName = "Page/Home.ux";
            temp9.SourceLineNumber = 14;
            temp9.SourceFileName = "Page/Home.ux";
            temp9.Children.Add(temp10);
            temp10.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
            temp10.Height = new Uno.UX.Size(700f, Uno.UX.Unit.Unspecified);
            temp10.Margin = float4(20f, 20f, 20f, 20f);
            temp10.SourceLineNumber = 15;
            temp10.SourceFileName = "Page/Home.ux";
            global::Fuse.Gestures.Clicked.AddHandler(temp10, temp_eb5.OnEvent);
            temp10.Children.Add(temp11);
            temp10.Children.Add(temp12);
            temp10.Bindings.Add(temp_eb5);
            temp11.Value = "GET";
            temp11.FontSize = 20f;
            temp11.Color = float4(1f, 1f, 1f, 1f);
            temp11.Alignment = Fuse.Elements.Alignment.Center;
            temp11.SourceLineNumber = 16;
            temp11.SourceFileName = "Page/Home.ux";
            temp12.Color = float4(0f, 0f, 0f, 1f);
            temp12.SourceLineNumber = 17;
            temp12.SourceFileName = "Page/Home.ux";
            temp1.SourceLineNumber = 15;
            temp1.SourceFileName = "Page/Home.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(router);
            __g_nametable.Objects.Add(topPanel);
            __g_nametable.Objects.Add(temp_eb4);
            __g_nametable.Objects.Add(temp_eb5);
            this.Children.Add(temp2);
            this.Children.Add(temp3);
        }
        static global::Uno.UX.Selector __selector0 = "topPanel";
    }
}
