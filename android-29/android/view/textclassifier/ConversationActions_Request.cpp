#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./TextClassifier_EntityConfig.hpp"
#include "./ConversationActions_Request.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject ConversationActions_Request::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ConversationActions_Request::HINT_FOR_IN_APP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Request",
			"HINT_FOR_IN_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationActions_Request::HINT_FOR_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Request",
			"HINT_FOR_NOTIFICATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ConversationActions_Request::ConversationActions_Request(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ConversationActions_Request::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring ConversationActions_Request::getCallingPackageName()
	{
		return callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ConversationActions_Request::getConversation()
	{
		return callObjectMethod(
			"getConversation",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ConversationActions_Request::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject ConversationActions_Request::getHints()
	{
		return callObjectMethod(
			"getHints",
			"()Ljava/util/List;"
		);
	}
	jint ConversationActions_Request::getMaxSuggestions()
	{
		return callMethod<jint>(
			"getMaxSuggestions",
			"()I"
		);
	}
	QAndroidJniObject ConversationActions_Request::getTypeConfig()
	{
		return callObjectMethod(
			"getTypeConfig",
			"()Landroid/view/textclassifier/TextClassifier$EntityConfig;"
		);
	}
	void ConversationActions_Request::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

