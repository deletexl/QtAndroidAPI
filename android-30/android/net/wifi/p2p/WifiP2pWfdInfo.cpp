#include "../../../os/Parcel.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pWfdInfo.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	JObject WifiP2pWfdInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WifiP2pWfdInfo::DEVICE_TYPE_PRIMARY_SINK()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_TYPE_PRIMARY_SINK"
		);
	}
	jint WifiP2pWfdInfo::DEVICE_TYPE_SECONDARY_SINK()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_TYPE_SECONDARY_SINK"
		);
	}
	jint WifiP2pWfdInfo::DEVICE_TYPE_SOURCE_OR_PRIMARY_SINK()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_TYPE_SOURCE_OR_PRIMARY_SINK"
		);
	}
	jint WifiP2pWfdInfo::DEVICE_TYPE_WFD_SOURCE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_TYPE_WFD_SOURCE"
		);
	}
	
	// QJniObject forward
	WifiP2pWfdInfo::WifiP2pWfdInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiP2pWfdInfo::WifiP2pWfdInfo()
		: JObject(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"()V"
		) {}
	WifiP2pWfdInfo::WifiP2pWfdInfo(android::net::wifi::p2p::WifiP2pWfdInfo &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"(Landroid/net/wifi/p2p/WifiP2pWfdInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WifiP2pWfdInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint WifiP2pWfdInfo::getControlPort() const
	{
		return callMethod<jint>(
			"getControlPort",
			"()I"
		);
	}
	jint WifiP2pWfdInfo::getDeviceType() const
	{
		return callMethod<jint>(
			"getDeviceType",
			"()I"
		);
	}
	jint WifiP2pWfdInfo::getMaxThroughput() const
	{
		return callMethod<jint>(
			"getMaxThroughput",
			"()I"
		);
	}
	jboolean WifiP2pWfdInfo::isContentProtectionSupported() const
	{
		return callMethod<jboolean>(
			"isContentProtectionSupported",
			"()Z"
		);
	}
	jboolean WifiP2pWfdInfo::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean WifiP2pWfdInfo::isSessionAvailable() const
	{
		return callMethod<jboolean>(
			"isSessionAvailable",
			"()Z"
		);
	}
	void WifiP2pWfdInfo::setContentProtectionSupported(jboolean arg0) const
	{
		callMethod<void>(
			"setContentProtectionSupported",
			"(Z)V",
			arg0
		);
	}
	void WifiP2pWfdInfo::setControlPort(jint arg0) const
	{
		callMethod<void>(
			"setControlPort",
			"(I)V",
			arg0
		);
	}
	jboolean WifiP2pWfdInfo::setDeviceType(jint arg0) const
	{
		return callMethod<jboolean>(
			"setDeviceType",
			"(I)Z",
			arg0
		);
	}
	void WifiP2pWfdInfo::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void WifiP2pWfdInfo::setMaxThroughput(jint arg0) const
	{
		callMethod<void>(
			"setMaxThroughput",
			"(I)V",
			arg0
		);
	}
	void WifiP2pWfdInfo::setSessionAvailable(jboolean arg0) const
	{
		callMethod<void>(
			"setSessionAvailable",
			"(Z)V",
			arg0
		);
	}
	JString WifiP2pWfdInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiP2pWfdInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

