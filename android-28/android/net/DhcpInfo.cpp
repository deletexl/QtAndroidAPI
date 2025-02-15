#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./DhcpInfo.hpp"

namespace android::net
{
	// Fields
	jint DhcpInfo::dns1()
	{
		return getField<jint>(
			"dns1"
		);
	}
	jint DhcpInfo::dns2()
	{
		return getField<jint>(
			"dns2"
		);
	}
	jint DhcpInfo::gateway()
	{
		return getField<jint>(
			"gateway"
		);
	}
	jint DhcpInfo::ipAddress()
	{
		return getField<jint>(
			"ipAddress"
		);
	}
	jint DhcpInfo::leaseDuration()
	{
		return getField<jint>(
			"leaseDuration"
		);
	}
	jint DhcpInfo::netmask()
	{
		return getField<jint>(
			"netmask"
		);
	}
	jint DhcpInfo::serverAddress()
	{
		return getField<jint>(
			"serverAddress"
		);
	}
	
	// QJniObject forward
	DhcpInfo::DhcpInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DhcpInfo::DhcpInfo()
		: JObject(
			"android.net.DhcpInfo",
			"()V"
		) {}
	
	// Methods
	jint DhcpInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString DhcpInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void DhcpInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

