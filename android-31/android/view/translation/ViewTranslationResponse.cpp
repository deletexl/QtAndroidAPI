#include "../../os/Parcel.hpp"
#include "../autofill/AutofillId.hpp"
#include "./TranslationResponseValue.hpp"
#include "./ViewTranslationResponse.hpp"

namespace android::view::translation
{
	// Fields
	__JniBaseClass ViewTranslationResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.ViewTranslationResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ViewTranslationResponse::ViewTranslationResponse(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ViewTranslationResponse::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ViewTranslationResponse::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::view::autofill::AutofillId ViewTranslationResponse::getAutofillId()
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	__JniBaseClass ViewTranslationResponse::getKeys()
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Set;"
		);
	}
	android::view::translation::TranslationResponseValue ViewTranslationResponse::getValue(jstring arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Landroid/view/translation/TranslationResponseValue;",
			arg0
		);
	}
	jint ViewTranslationResponse::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ViewTranslationResponse::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ViewTranslationResponse::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation
