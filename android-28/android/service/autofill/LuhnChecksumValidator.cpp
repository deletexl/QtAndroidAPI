#include "../../os/Parcel.hpp"
#include "./LuhnChecksumValidator.hpp"

namespace android::service::autofill
{
	// Fields
	JObject LuhnChecksumValidator::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.LuhnChecksumValidator",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	LuhnChecksumValidator::LuhnChecksumValidator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LuhnChecksumValidator::LuhnChecksumValidator(jarray arg0)
		: JObject(
			"android.service.autofill.LuhnChecksumValidator",
			"([Landroid/view/autofill/AutofillId;)V",
			arg0
		) {}
	
	// Methods
	jint LuhnChecksumValidator::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring LuhnChecksumValidator::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LuhnChecksumValidator::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

