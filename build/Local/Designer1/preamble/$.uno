using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
using Outracks.Simulator.Runtime;
using Outracks.Simulator.Client;
namespace Outracks.Simulator 
{ 
	public class GeneratedApplication : Outracks.Simulator.Client.Application
	{
		public GeneratedApplication()
			: base(
				new [] 
				{new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("10.1.60.159"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("192.168.56.1"), 12124)},"C:\\Users\\채재윤융합IT학부\\Documents\\Fuse\\example01\\example01.unoproj",new string[] 
				{ })
		{
			Runtime.Bundle.Initialize("example01");

			if defined(DotNet)
				Reflection = new DotNetReflectionWrapper(DotNetReflection.Load("C:/Users/채재윤융합IT학부/Documents/Fuse/example01/build/Local/Designer1"));
			if defined(CPLUSPLUS)
				Reflection = new NativeReflection(new SimpleTypeMap());
		}
	}
}