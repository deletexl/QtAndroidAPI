#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Mms_Sent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_Mms_Sent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Mms_Sent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

