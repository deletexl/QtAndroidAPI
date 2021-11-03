#include "./NumberRangeFormatter_RangeIdentityResult.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "./FormattedNumberRange.hpp"

namespace android::icu::number
{
	// Fields
	
	// QAndroidJniObject forward
	FormattedNumberRange::FormattedNumberRange(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jchar FormattedNumberRange::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jboolean FormattedNumberRange::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::math::BigDecimal FormattedNumberRange::getFirstBigDecimal()
	{
		return callObjectMethod(
			"getFirstBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	android::icu::number::NumberRangeFormatter_RangeIdentityResult FormattedNumberRange::getIdentityResult()
	{
		return callObjectMethod(
			"getIdentityResult",
			"()Landroid/icu/number/NumberRangeFormatter$RangeIdentityResult;"
		);
	}
	java::math::BigDecimal FormattedNumberRange::getSecondBigDecimal()
	{
		return callObjectMethod(
			"getSecondBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	jint FormattedNumberRange::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint FormattedNumberRange::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jstring FormattedNumberRange::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	JObject FormattedNumberRange::toCharacterIterator()
	{
		return callObjectMethod(
			"toCharacterIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	jstring FormattedNumberRange::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::number

