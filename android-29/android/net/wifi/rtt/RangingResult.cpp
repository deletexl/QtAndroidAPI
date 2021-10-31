#include "../../MacAddress.hpp"
#include "../aware/PeerHandle.hpp"
#include "./ResponderLocation.hpp"
#include "../../../os/Parcel.hpp"
#include "./RangingResult.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	QAndroidJniObject RangingResult::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.rtt.RangingResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint RangingResult::STATUS_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_FAIL"
		);
	}
	jint RangingResult::STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC"
		);
	}
	jint RangingResult::STATUS_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_SUCCESS"
		);
	}
	
	// QAndroidJniObject forward
	RangingResult::RangingResult(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint RangingResult::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RangingResult::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint RangingResult::getDistanceMm()
	{
		return callMethod<jint>(
			"getDistanceMm",
			"()I"
		);
	}
	jint RangingResult::getDistanceStdDevMm()
	{
		return callMethod<jint>(
			"getDistanceStdDevMm",
			"()I"
		);
	}
	QAndroidJniObject RangingResult::getMacAddress()
	{
		return callObjectMethod(
			"getMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	jint RangingResult::getNumAttemptedMeasurements()
	{
		return callMethod<jint>(
			"getNumAttemptedMeasurements",
			"()I"
		);
	}
	jint RangingResult::getNumSuccessfulMeasurements()
	{
		return callMethod<jint>(
			"getNumSuccessfulMeasurements",
			"()I"
		);
	}
	QAndroidJniObject RangingResult::getPeerHandle()
	{
		return callObjectMethod(
			"getPeerHandle",
			"()Landroid/net/wifi/aware/PeerHandle;"
		);
	}
	jlong RangingResult::getRangingTimestampMillis()
	{
		return callMethod<jlong>(
			"getRangingTimestampMillis",
			"()J"
		);
	}
	jint RangingResult::getRssi()
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	jint RangingResult::getStatus()
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	QAndroidJniObject RangingResult::getUnverifiedResponderLocation()
	{
		return callObjectMethod(
			"getUnverifiedResponderLocation",
			"()Landroid/net/wifi/rtt/ResponderLocation;"
		);
	}
	jint RangingResult::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring RangingResult::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RangingResult::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::rtt

