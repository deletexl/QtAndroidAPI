#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Precision.hpp"

namespace android::icu::number
{
	class Precision;
}

namespace android::icu::number
{
	class FractionPrecision : public android::icu::number::Precision
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FractionPrecision(const char *className, const char *sig, Ts...agv) : android::icu::number::Precision(className, sig, std::forward<Ts>(agv)...) {}
		FractionPrecision(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::number::Precision withMaxDigits(jint arg0);
		android::icu::number::Precision withMinDigits(jint arg0);
	};
} // namespace android::icu::number
