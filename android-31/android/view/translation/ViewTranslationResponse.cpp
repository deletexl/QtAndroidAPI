#include "../../os/Parcel.hpp"
#include "../autofill/AutofillId.hpp"
#include "./TranslationResponseValue.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ViewTranslationResponse.hpp"

namespace android::view::translation
{
	// Fields
	JObject ViewTranslationResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.ViewTranslationResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ViewTranslationResponse::ViewTranslationResponse(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ViewTranslationResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ViewTranslationResponse::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::view::autofill::AutofillId ViewTranslationResponse::getAutofillId() const
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	JObject ViewTranslationResponse::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Set;"
		);
	}
	android::view::translation::TranslationResponseValue ViewTranslationResponse::getValue(JString arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Landroid/view/translation/TranslationResponseValue;",
			arg0.object<jstring>()
		);
	}
	jint ViewTranslationResponse::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ViewTranslationResponse::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ViewTranslationResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

