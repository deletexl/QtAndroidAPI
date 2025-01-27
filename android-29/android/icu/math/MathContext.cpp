#include "../../../JString.hpp"
#include "./MathContext.hpp"

namespace android::icu::math
{
	// Fields
	android::icu::math::MathContext MathContext::DEFAULT()
	{
		return getStaticObjectField(
			"android.icu.math.MathContext",
			"DEFAULT",
			"Landroid/icu/math/MathContext;"
		);
	}
	jint MathContext::ENGINEERING()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ENGINEERING"
		);
	}
	jint MathContext::PLAIN()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"PLAIN"
		);
	}
	jint MathContext::ROUND_CEILING()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_CEILING"
		);
	}
	jint MathContext::ROUND_DOWN()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_DOWN"
		);
	}
	jint MathContext::ROUND_FLOOR()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_FLOOR"
		);
	}
	jint MathContext::ROUND_HALF_DOWN()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_HALF_DOWN"
		);
	}
	jint MathContext::ROUND_HALF_EVEN()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_HALF_EVEN"
		);
	}
	jint MathContext::ROUND_HALF_UP()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_HALF_UP"
		);
	}
	jint MathContext::ROUND_UNNECESSARY()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_UNNECESSARY"
		);
	}
	jint MathContext::ROUND_UP()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_UP"
		);
	}
	jint MathContext::SCIENTIFIC()
	{
		return getStaticField<jint>(
			"android.icu.math.MathContext",
			"SCIENTIFIC"
		);
	}
	
	// QJniObject forward
	MathContext::MathContext(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MathContext::MathContext(jint arg0)
		: JObject(
			"android.icu.math.MathContext",
			"(I)V",
			arg0
		) {}
	MathContext::MathContext(jint arg0, jint arg1)
		: JObject(
			"android.icu.math.MathContext",
			"(II)V",
			arg0,
			arg1
		) {}
	MathContext::MathContext(jint arg0, jint arg1, jboolean arg2)
		: JObject(
			"android.icu.math.MathContext",
			"(IIZ)V",
			arg0,
			arg1,
			arg2
		) {}
	MathContext::MathContext(jint arg0, jint arg1, jboolean arg2, jint arg3)
		: JObject(
			"android.icu.math.MathContext",
			"(IIZI)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint MathContext::getDigits() const
	{
		return callMethod<jint>(
			"getDigits",
			"()I"
		);
	}
	jint MathContext::getForm() const
	{
		return callMethod<jint>(
			"getForm",
			"()I"
		);
	}
	jboolean MathContext::getLostDigits() const
	{
		return callMethod<jboolean>(
			"getLostDigits",
			"()Z"
		);
	}
	jint MathContext::getRoundingMode() const
	{
		return callMethod<jint>(
			"getRoundingMode",
			"()I"
		);
	}
	JString MathContext::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::math

