#include "./VibrationEffect.hpp"
#include "./VibrationEffect_Composition.hpp"

namespace android::os
{
	// Fields
	jint VibrationEffect_Composition::PRIMITIVE_CLICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_CLICK"
		);
	}
	jint VibrationEffect_Composition::PRIMITIVE_LOW_TICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_LOW_TICK"
		);
	}
	jint VibrationEffect_Composition::PRIMITIVE_QUICK_FALL()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_QUICK_FALL"
		);
	}
	jint VibrationEffect_Composition::PRIMITIVE_QUICK_RISE()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_QUICK_RISE"
		);
	}
	jint VibrationEffect_Composition::PRIMITIVE_SLOW_RISE()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_SLOW_RISE"
		);
	}
	jint VibrationEffect_Composition::PRIMITIVE_SPIN()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_SPIN"
		);
	}
	jint VibrationEffect_Composition::PRIMITIVE_THUD()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_THUD"
		);
	}
	jint VibrationEffect_Composition::PRIMITIVE_TICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_TICK"
		);
	}
	
	// QAndroidJniObject forward
	VibrationEffect_Composition::VibrationEffect_Composition(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::VibrationEffect_Composition VibrationEffect_Composition::addPrimitive(jint arg0)
	{
		return callObjectMethod(
			"addPrimitive",
			"(I)Landroid/os/VibrationEffect$Composition;",
			arg0
		);
	}
	android::os::VibrationEffect_Composition VibrationEffect_Composition::addPrimitive(jint arg0, jfloat arg1)
	{
		return callObjectMethod(
			"addPrimitive",
			"(IF)Landroid/os/VibrationEffect$Composition;",
			arg0,
			arg1
		);
	}
	android::os::VibrationEffect_Composition VibrationEffect_Composition::addPrimitive(jint arg0, jfloat arg1, jint arg2)
	{
		return callObjectMethod(
			"addPrimitive",
			"(IFI)Landroid/os/VibrationEffect$Composition;",
			arg0,
			arg1,
			arg2
		);
	}
	android::os::VibrationEffect VibrationEffect_Composition::compose()
	{
		return callObjectMethod(
			"compose",
			"()Landroid/os/VibrationEffect;"
		);
	}
} // namespace android::os

