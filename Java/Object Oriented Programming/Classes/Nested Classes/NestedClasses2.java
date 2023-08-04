// This file is absolute chaos
public class NestedClasses2 {
	public static void main(String[] args) {
		OuterClass outter = new OuterClass();
		OuterClass.InnerClass inner = outter.new InnerClass();
		OuterClass.InnerClass.WOAH_THERE_BUDDY woah = inner.new WOAH_THERE_BUDDY();
		System.out.println(outter.a);
		System.out.println(inner.b); 
		System.out.println(woah.c);

		OuterClass.StaticInnerClass inner2 = new OuterClass.StaticInnerClass();		
		OuterClass.StaticInnerClass.FUCK fuck = new OuterClass.StaticInnerClass.FUCK();
		System.out.println(inner2.d);
		System.out.println(fuck.e);
	}
}

class OuterClass {
	int a = 4;
	class InnerClass {
		int b = 5;
		class WOAH_THERE_BUDDY {
			int c = 6;
		}
	}

	static class StaticInnerClass {
		int d = 7;
		static class FUCK {
			int e = 8;
		}
	}
}
