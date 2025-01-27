#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class CollationKey_BoundMode : public JObject
	{
	public:
		// Fields
		static jint LOWER();
		static jint UPPER();
		static jint UPPER_LONG();
		
		// QJniObject forward
		template<typename ...Ts> explicit CollationKey_BoundMode(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CollationKey_BoundMode(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::text

