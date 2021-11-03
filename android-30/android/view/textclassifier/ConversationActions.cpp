#include "../../os/Parcel.hpp"
#include "./ConversationActions.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject ConversationActions::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationActions",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ConversationActions::ConversationActions(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConversationActions::ConversationActions(JObject arg0, jstring arg1)
		: JObject(
			"android.view.textclassifier.ConversationActions",
			"(Ljava/util/List;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint ConversationActions::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject ConversationActions::getConversationActions()
	{
		return callObjectMethod(
			"getConversationActions",
			"()Ljava/util/List;"
		);
	}
	jstring ConversationActions::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ConversationActions::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

