#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::text
{
	class LineBreaker_ParagraphConstraints;
}
namespace android::graphics::text
{
	class LineBreaker_Result;
}
namespace android::graphics::text
{
	class MeasuredText;
}

namespace android::graphics::text
{
	class LineBreaker : public JObject
	{
	public:
		// Fields
		static jint BREAK_STRATEGY_BALANCED();
		static jint BREAK_STRATEGY_HIGH_QUALITY();
		static jint BREAK_STRATEGY_SIMPLE();
		static jint HYPHENATION_FREQUENCY_FULL();
		static jint HYPHENATION_FREQUENCY_NONE();
		static jint HYPHENATION_FREQUENCY_NORMAL();
		static jint JUSTIFICATION_MODE_INTER_WORD();
		static jint JUSTIFICATION_MODE_NONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit LineBreaker(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LineBreaker(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::text::LineBreaker_Result computeLineBreaks(android::graphics::text::MeasuredText arg0, android::graphics::text::LineBreaker_ParagraphConstraints arg1, jint arg2) const;
	};
} // namespace android::graphics::text

