#include "./ConstrainedFieldPosition.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./DateIntervalFormat_FormattedDateInterval.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	DateIntervalFormat_FormattedDateInterval::DateIntervalFormat_FormattedDateInterval(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject DateIntervalFormat_FormattedDateInterval::appendTo(JObject arg0) const
	{
		return callObjectMethod(
			"appendTo",
			"(Ljava/lang/Appendable;)Ljava/lang/Appendable;",
			arg0.object()
		);
	}
	jchar DateIntervalFormat_FormattedDateInterval::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jint DateIntervalFormat_FormattedDateInterval::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jboolean DateIntervalFormat_FormattedDateInterval::nextPosition(android::icu::text::ConstrainedFieldPosition arg0) const
	{
		return callMethod<jboolean>(
			"nextPosition",
			"(Landroid/icu/text/ConstrainedFieldPosition;)Z",
			arg0.object()
		);
	}
	JString DateIntervalFormat_FormattedDateInterval::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	JObject DateIntervalFormat_FormattedDateInterval::toCharacterIterator() const
	{
		return callObjectMethod(
			"toCharacterIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	JString DateIntervalFormat_FormattedDateInterval::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

