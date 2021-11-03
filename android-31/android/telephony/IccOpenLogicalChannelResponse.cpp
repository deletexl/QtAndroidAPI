#include "../os/Parcel.hpp"
#include "./IccOpenLogicalChannelResponse.hpp"

namespace android::telephony
{
	// Fields
	JObject IccOpenLogicalChannelResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.IccOpenLogicalChannelResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint IccOpenLogicalChannelResponse::INVALID_CHANNEL()
	{
		return getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"INVALID_CHANNEL"
		);
	}
	jint IccOpenLogicalChannelResponse::STATUS_MISSING_RESOURCE()
	{
		return getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_MISSING_RESOURCE"
		);
	}
	jint IccOpenLogicalChannelResponse::STATUS_NO_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_NO_ERROR"
		);
	}
	jint IccOpenLogicalChannelResponse::STATUS_NO_SUCH_ELEMENT()
	{
		return getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_NO_SUCH_ELEMENT"
		);
	}
	jint IccOpenLogicalChannelResponse::STATUS_UNKNOWN_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_UNKNOWN_ERROR"
		);
	}
	
	// QAndroidJniObject forward
	IccOpenLogicalChannelResponse::IccOpenLogicalChannelResponse(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint IccOpenLogicalChannelResponse::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint IccOpenLogicalChannelResponse::getChannel()
	{
		return callMethod<jint>(
			"getChannel",
			"()I"
		);
	}
	jbyteArray IccOpenLogicalChannelResponse::getSelectResponse()
	{
		return callObjectMethod(
			"getSelectResponse",
			"()[B"
		).object<jbyteArray>();
	}
	jint IccOpenLogicalChannelResponse::getStatus()
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jstring IccOpenLogicalChannelResponse::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void IccOpenLogicalChannelResponse::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

