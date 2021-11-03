#pragma once

#include "../../../JObject.hpp"
#include "./Notation.hpp"


namespace android::icu::number
{
	class SimpleNotation : public android::icu::number::Notation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimpleNotation(const char *className, const char *sig, Ts...agv) : android::icu::number::Notation(className, sig, std::forward<Ts>(agv)...) {}
		SimpleNotation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::number

