[Uno.Compiler.UxGenerated]
public partial class Login: Fuse.Controls.Panel
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Reactive.EventBinding temp_eb1;
    static Login()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Login(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new example01_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("userid");
        var temp1 = new global::Fuse.Controls.TextInput();
        temp1_Value_inst = new example01_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("password");
        var temp4 = new global::Fuse.Reactive.Data("Signin");
        var temp5 = new global::Fuse.Reactive.Data("Signup");
        var temp6 = new global::Fuse.Controls.Grid();
        var temp7 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp8 = new global::Fuse.Controls.Rectangle();
        var temp9 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Controls.Rectangle();
        var temp11 = new global::Fuse.Controls.Panel();
        var temp12 = new global::Fuse.Controls.Text();
        var temp13 = new global::Fuse.Controls.Rectangle();
        var temp14 = new global::Fuse.Gestures.Clicked();
        var temp15 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp16 = new global::Fuse.Controls.Panel();
        var temp17 = new global::Fuse.Controls.Text();
        var temp18 = new global::Fuse.Controls.Rectangle();
        var temp19 = new global::Fuse.Gestures.Clicked();
        var temp20 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp5);
        this.SourceLineNumber = 18;
        this.SourceFileName = "MainView.ux";
        temp6.SourceLineNumber = 20;
        temp6.SourceFileName = "MainView.ux";
        temp6.Children.Add(temp);
        temp6.Children.Add(temp8);
        temp6.Children.Add(temp1);
        temp6.Children.Add(temp10);
        temp6.Children.Add(temp11);
        temp6.Children.Add(temp16);
        temp.PlaceholderText = " Username";
        temp.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp.TextColor = float4(0f, 0f, 0f, 1f);
        temp.CaretColor = float4(0f, 0f, 0f, 1f);
        temp.SourceLineNumber = 22;
        temp.SourceFileName = "MainView.ux";
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        global::Fuse.Controls.Grid.SetColumn(temp, 1);
        temp.Bindings.Add(temp7);
        temp2.SourceLineNumber = 22;
        temp2.SourceFileName = "MainView.ux";
        temp8.Color = float4(0f, 0f, 0f, 1f);
        temp8.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp8.Alignment = Fuse.Elements.Alignment.Bottom;
        temp8.SourceLineNumber = 23;
        temp8.SourceFileName = "MainView.ux";
        global::Fuse.Controls.Grid.SetRow(temp8, 0);
        global::Fuse.Controls.Grid.SetColumn(temp8, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(temp8, 2);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "Password";
        temp1.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp1.TextColor = float4(0f, 0f, 0f, 1f);
        temp1.CaretColor = float4(0f, 0f, 0f, 1f);
        temp1.SourceLineNumber = 26;
        temp1.SourceFileName = "MainView.ux";
        global::Fuse.Controls.Grid.SetRow(temp1, 1);
        global::Fuse.Controls.Grid.SetColumn(temp1, 1);
        temp1.Bindings.Add(temp9);
        temp3.SourceLineNumber = 26;
        temp3.SourceFileName = "MainView.ux";
        temp10.Color = float4(0f, 0f, 0f, 1f);
        temp10.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp10.Alignment = Fuse.Elements.Alignment.Bottom;
        temp10.SourceLineNumber = 27;
        temp10.SourceFileName = "MainView.ux";
        global::Fuse.Controls.Grid.SetRow(temp10, 1);
        global::Fuse.Controls.Grid.SetColumn(temp10, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(temp10, 2);
        temp11.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp11.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp11.Alignment = Fuse.Elements.Alignment.Center;
        temp11.Margin = float4(20f, 20f, 20f, 20f);
        temp11.SourceLineNumber = 30;
        temp11.SourceFileName = "MainView.ux";
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp13);
        temp11.Children.Add(temp14);
        temp12.Value = "Sign IN";
        temp12.FontSize = 20f;
        temp12.Color = float4(1f, 1f, 1f, 1f);
        temp12.Alignment = Fuse.Elements.Alignment.Center;
        temp12.SourceLineNumber = 31;
        temp12.SourceFileName = "MainView.ux";
        temp13.Color = float4(0f, 0f, 0f, 1f);
        temp13.SourceLineNumber = 32;
        temp13.SourceFileName = "MainView.ux";
        temp14.SourceLineNumber = 33;
        temp14.SourceFileName = "MainView.ux";
        temp14.Actions.Add(temp15);
        temp14.Bindings.Add(temp_eb0);
        temp15.SourceLineNumber = 34;
        temp15.SourceFileName = "MainView.ux";
        temp15.Handler += temp_eb0.OnEvent;
        temp4.SourceLineNumber = 34;
        temp4.SourceFileName = "MainView.ux";
        temp16.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp16.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp16.Alignment = Fuse.Elements.Alignment.Center;
        temp16.Margin = float4(20f, 20f, 20f, 20f);
        temp16.SourceLineNumber = 40;
        temp16.SourceFileName = "MainView.ux";
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp18);
        temp16.Children.Add(temp19);
        temp17.Value = "Sign UP";
        temp17.FontSize = 20f;
        temp17.Color = float4(1f, 1f, 1f, 1f);
        temp17.Alignment = Fuse.Elements.Alignment.Center;
        temp17.SourceLineNumber = 41;
        temp17.SourceFileName = "MainView.ux";
        temp18.Color = float4(0f, 0f, 0f, 1f);
        temp18.SourceLineNumber = 42;
        temp18.SourceFileName = "MainView.ux";
        temp19.SourceLineNumber = 43;
        temp19.SourceFileName = "MainView.ux";
        temp19.Actions.Add(temp20);
        temp19.Bindings.Add(temp_eb1);
        temp20.SourceLineNumber = 44;
        temp20.SourceFileName = "MainView.ux";
        temp20.Handler += temp_eb1.OnEvent;
        temp5.SourceLineNumber = 44;
        temp5.SourceFileName = "MainView.ux";
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
