#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "./TextClassifier_EntityConfig.hpp"
#include "../../../JString.hpp"
#include "./TextLinks_Request.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextLinks_Request::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextLinks$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextLinks_Request::TextLinks_Request(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TextLinks_Request::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::LocaleList TextLinks_Request::getDefaultLocales() const
	{
		return callObjectMethod(
			"getDefaultLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig TextLinks_Request::getEntityConfig() const
	{
		return callObjectMethod(
			"getEntityConfig",
			"()Landroid/view/textclassifier/TextClassifier$EntityConfig;"
		);
	}
	JString TextLinks_Request::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	void TextLinks_Request::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

