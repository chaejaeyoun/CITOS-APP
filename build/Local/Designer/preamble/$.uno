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
<<<<<<< HEAD
				{new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("169.254.61.137"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("172.30.34.213"), 12124)},"/Users/devel/github/CITOS-APP/example01.unoproj",new string[] 
=======
				{new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("192.168.0.57"), 12124)},"/Users/computer/dev/CITOS-APP/example01.unoproj",new string[] 
>>>>>>> de35a9065a9fcc28fcdb9bc294651135bb82d3b6
				{ })
		{
			Runtime.Bundle.Initialize("example01");

			if defined(DotNet)
				Reflection = new DotNetReflectionWrapper(DotNetReflection.Load("/Users/computer/dev/CITOS-APP/build/Local/Designer"));
			if defined(CPLUSPLUS)
				Reflection = new NativeReflection(new SimpleTypeMap());
		}
	}
}