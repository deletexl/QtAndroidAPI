#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_MmsSms_PendingMessages : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static jstring DUE_TIME();
		static jstring ERROR_CODE();
		static jstring ERROR_TYPE();
		static jstring LAST_TRY();
		static jstring MSG_ID();
		static jstring MSG_TYPE();
		static jstring PROTO_TYPE();
		static jstring RETRY_INDEX();
		static jstring SUBSCRIPTION_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_MmsSms_PendingMessages(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_MmsSms_PendingMessages(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

