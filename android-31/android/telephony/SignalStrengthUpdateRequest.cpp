#include "../os/Parcel.hpp"
#include "./SignalStrengthUpdateRequest.hpp"

namespace android::telephony
{
	// Fields
	JObject SignalStrengthUpdateRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.SignalStrengthUpdateRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SignalStrengthUpdateRequest::SignalStrengthUpdateRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SignalStrengthUpdateRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SignalStrengthUpdateRequest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject SignalStrengthUpdateRequest::getSignalThresholdInfos()
	{
		return callObjectMethod(
			"getSignalThresholdInfos",
			"()Ljava/util/Collection;"
		);
	}
	jint SignalStrengthUpdateRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean SignalStrengthUpdateRequest::isReportingRequestedWhileIdle()
	{
		return callMethod<jboolean>(
			"isReportingRequestedWhileIdle",
			"()Z"
		);
	}
	jstring SignalStrengthUpdateRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SignalStrengthUpdateRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

