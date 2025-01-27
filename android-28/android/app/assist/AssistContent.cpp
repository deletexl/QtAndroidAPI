#include "../../content/ClipData.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./AssistContent.hpp"

namespace android::app::assist
{
	// Fields
	JObject AssistContent::CREATOR()
	{
		return getStaticObjectField(
			"android.app.assist.AssistContent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AssistContent::AssistContent(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AssistContent::AssistContent()
		: JObject(
			"android.app.assist.AssistContent",
			"()V"
		) {}
	
	// Methods
	jint AssistContent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::content::ClipData AssistContent::getClipData() const
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	android::os::Bundle AssistContent::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::content::Intent AssistContent::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	JString AssistContent::getStructuredData() const
	{
		return callObjectMethod(
			"getStructuredData",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri AssistContent::getWebUri() const
	{
		return callObjectMethod(
			"getWebUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean AssistContent::isAppProvidedIntent() const
	{
		return callMethod<jboolean>(
			"isAppProvidedIntent",
			"()Z"
		);
	}
	jboolean AssistContent::isAppProvidedWebUri() const
	{
		return callMethod<jboolean>(
			"isAppProvidedWebUri",
			"()Z"
		);
	}
	void AssistContent::setClipData(android::content::ClipData arg0) const
	{
		callMethod<void>(
			"setClipData",
			"(Landroid/content/ClipData;)V",
			arg0.object()
		);
	}
	void AssistContent::setIntent(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void AssistContent::setStructuredData(JString arg0) const
	{
		callMethod<void>(
			"setStructuredData",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void AssistContent::setWebUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setWebUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void AssistContent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::assist

