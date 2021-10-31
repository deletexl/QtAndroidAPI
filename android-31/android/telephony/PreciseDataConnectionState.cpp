#include "../net/LinkProperties.hpp"
#include "../os/Parcel.hpp"
#include "./data/ApnSetting.hpp"
#include "./PreciseDataConnectionState.hpp"

namespace android::telephony
{
	// Fields
	__JniBaseClass PreciseDataConnectionState::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.PreciseDataConnectionState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	PreciseDataConnectionState::PreciseDataConnectionState(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint PreciseDataConnectionState::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PreciseDataConnectionState::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::telephony::data::ApnSetting PreciseDataConnectionState::getApnSetting()
	{
		return callObjectMethod(
			"getApnSetting",
			"()Landroid/telephony/data/ApnSetting;"
		);
	}
	jint PreciseDataConnectionState::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint PreciseDataConnectionState::getLastCauseCode()
	{
		return callMethod<jint>(
			"getLastCauseCode",
			"()I"
		);
	}
	android::net::LinkProperties PreciseDataConnectionState::getLinkProperties()
	{
		return callObjectMethod(
			"getLinkProperties",
			"()Landroid/net/LinkProperties;"
		);
	}
	jint PreciseDataConnectionState::getNetworkType()
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	jint PreciseDataConnectionState::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint PreciseDataConnectionState::getTransportType()
	{
		return callMethod<jint>(
			"getTransportType",
			"()I"
		);
	}
	jint PreciseDataConnectionState::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PreciseDataConnectionState::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PreciseDataConnectionState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony
