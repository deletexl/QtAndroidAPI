#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
namespace android::telephony::data
{
	class ApnSetting_Builder;
}
class JObject;
class JString;
namespace java::net
{
	class InetAddress;
}

namespace android::telephony::data
{
	class ApnSetting : public JObject
	{
	public:
		// Fields
		static jint AUTH_TYPE_CHAP();
		static jint AUTH_TYPE_NONE();
		static jint AUTH_TYPE_PAP();
		static jint AUTH_TYPE_PAP_OR_CHAP();
		static JObject CREATOR();
		static jint MVNO_TYPE_GID();
		static jint MVNO_TYPE_ICCID();
		static jint MVNO_TYPE_IMSI();
		static jint MVNO_TYPE_SPN();
		static jint PROTOCOL_IP();
		static jint PROTOCOL_IPV4V6();
		static jint PROTOCOL_IPV6();
		static jint PROTOCOL_NON_IP();
		static jint PROTOCOL_PPP();
		static jint PROTOCOL_UNSTRUCTURED();
		static jint TYPE_CBS();
		static jint TYPE_DEFAULT();
		static jint TYPE_DUN();
		static jint TYPE_EMERGENCY();
		static jint TYPE_FOTA();
		static jint TYPE_HIPRI();
		static jint TYPE_IA();
		static jint TYPE_IMS();
		static jint TYPE_MCX();
		static jint TYPE_MMS();
		static jint TYPE_SUPL();
		
		// QJniObject forward
		template<typename ...Ts> explicit ApnSetting(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApnSetting(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getApnName() const;
		jint getApnTypeBitmask() const;
		jint getAuthType() const;
		jint getCarrierId() const;
		JString getEntryName() const;
		jint getId() const;
		java::net::InetAddress getMmsProxyAddress() const;
		JString getMmsProxyAddressAsString() const;
		jint getMmsProxyPort() const;
		android::net::Uri getMmsc() const;
		jint getMvnoType() const;
		jint getNetworkTypeBitmask() const;
		JString getOperatorNumeric() const;
		JString getPassword() const;
		jint getProtocol() const;
		java::net::InetAddress getProxyAddress() const;
		JString getProxyAddressAsString() const;
		jint getProxyPort() const;
		jint getRoamingProtocol() const;
		JString getUser() const;
		jboolean isEnabled() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony::data

