#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_MoneyBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_MoneyBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_MoneyBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_MoneyBuilder();
		
		// Methods
		QAndroidJniObject setCurrency(jstring arg0);
		QAndroidJniObject setFractionalPart(jstring arg0);
		QAndroidJniObject setIntegerPart(jstring arg0);
		QAndroidJniObject setIntegerPart(jlong arg0);
		QAndroidJniObject setQuantity(jstring arg0);
	};
} // namespace android::text::style

