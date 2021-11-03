#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::sip
{
	class SipProfile : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SipProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipProfile(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring getAuthUserName();
		jboolean getAutoRegistration();
		jstring getDisplayName();
		jstring getPassword();
		jint getPort();
		jstring getProfileName();
		jstring getProtocol();
		jstring getProxyAddress();
		jboolean getSendKeepAlive();
		jstring getSipDomain();
		jstring getUriString();
		jstring getUserName();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::sip

