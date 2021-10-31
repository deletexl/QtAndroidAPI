#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Carriers : public __JniBaseClass
	{
	public:
		// Fields
		static jstring APN();
		static jstring AUTH_TYPE();
		static jstring BEARER();
		static jstring CARRIER_ENABLED();
		static android::net::Uri CONTENT_URI();
		static jstring CURRENT();
		static jstring DEFAULT_SORT_ORDER();
		static jstring MCC();
		static jstring MMSC();
		static jstring MMSPORT();
		static jstring MMSPROXY();
		static jstring MNC();
		static jstring MVNO_MATCH_DATA();
		static jstring MVNO_TYPE();
		static jstring NAME();
		static jstring NETWORK_TYPE_BITMASK();
		static jstring NUMERIC();
		static jstring PASSWORD();
		static jstring PORT();
		static jstring PROTOCOL();
		static jstring PROXY();
		static jstring ROAMING_PROTOCOL();
		static jstring SERVER();
		static jstring SUBSCRIPTION_ID();
		static jstring TYPE();
		static jstring USER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_Carriers(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Carriers(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider
