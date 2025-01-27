#include "./Double2.hpp"

namespace android::renderscript
{
	// Fields
	jdouble Double2::x()
	{
		return getField<jdouble>(
			"x"
		);
	}
	jdouble Double2::y()
	{
		return getField<jdouble>(
			"y"
		);
	}
	
	// QJniObject forward
	Double2::Double2(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Double2::Double2()
		: JObject(
			"android.renderscript.Double2",
			"()V"
		) {}
	Double2::Double2(jdouble arg0, jdouble arg1)
		: JObject(
			"android.renderscript.Double2",
			"(DD)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::renderscript

