#include "../MacAddress.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SoftApConfiguration.hpp"

namespace android::net::wifi
{
	// Fields
	JObject SoftApConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.SoftApConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SoftApConfiguration::SECURITY_TYPE_OPEN()
	{
		return getStaticField<jint>(
			"android.net.wifi.SoftApConfiguration",
			"SECURITY_TYPE_OPEN"
		);
	}
	jint SoftApConfiguration::SECURITY_TYPE_WPA2_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.SoftApConfiguration",
			"SECURITY_TYPE_WPA2_PSK"
		);
	}
	jint SoftApConfiguration::SECURITY_TYPE_WPA3_SAE()
	{
		return getStaticField<jint>(
			"android.net.wifi.SoftApConfiguration",
			"SECURITY_TYPE_WPA3_SAE"
		);
	}
	jint SoftApConfiguration::SECURITY_TYPE_WPA3_SAE_TRANSITION()
	{
		return getStaticField<jint>(
			"android.net.wifi.SoftApConfiguration",
			"SECURITY_TYPE_WPA3_SAE_TRANSITION"
		);
	}
	
	// QJniObject forward
	SoftApConfiguration::SoftApConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SoftApConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SoftApConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::MacAddress SoftApConfiguration::getBssid() const
	{
		return callObjectMethod(
			"getBssid",
			"()Landroid/net/MacAddress;"
		);
	}
	JString SoftApConfiguration::getPassphrase() const
	{
		return callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;"
		);
	}
	jint SoftApConfiguration::getSecurityType() const
	{
		return callMethod<jint>(
			"getSecurityType",
			"()I"
		);
	}
	JString SoftApConfiguration::getSsid() const
	{
		return callObjectMethod(
			"getSsid",
			"()Ljava/lang/String;"
		);
	}
	jint SoftApConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean SoftApConfiguration::isHiddenSsid() const
	{
		return callMethod<jboolean>(
			"isHiddenSsid",
			"()Z"
		);
	}
	JString SoftApConfiguration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SoftApConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

