// Generated by Haxe 4.0.5
package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Sys extends haxe.lang.HxObject
{
	public Sys(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Sys()
	{
		//line 28 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		haxe.root.Sys.__hx_ctor__Sys(this);
	}
	
	
	protected static void __hx_ctor__Sys(haxe.root.Sys __hx_this)
	{
	}
	
	
	public static java.lang.String[] _args;
	
	public static haxe.root.Array<java.lang.String> args()
	{
		//line 42 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		if (( haxe.root.Sys._args == null )) 
		{
			//line 43 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
			return new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
		}
		
		//line 44 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		return haxe.java.Lib.array_String(haxe.root.Sys._args);
	}
	
	
}

