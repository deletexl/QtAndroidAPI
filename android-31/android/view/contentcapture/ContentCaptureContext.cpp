#include "../../content/LocusId.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./ContentCaptureContext.hpp"

namespace android::view::contentcapture
{
	// Fields
	__JniBaseClass ContentCaptureContext::CREATOR()
	{
		return getStaticObjectField(
			"android.view.contentcapture.ContentCaptureContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ContentCaptureContext::ContentCaptureContext(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::view::contentcapture::ContentCaptureContext ContentCaptureContext::forLocusId(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.view.contentcapture.ContentCaptureContext",
			"forLocusId",
			"(Ljava/lang/String;)Landroid/view/contentcapture/ContentCaptureContext;",
			arg0
		);
	}
	jint ContentCaptureContext::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::Bundle ContentCaptureContext::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::content::LocusId ContentCaptureContext::getLocusId()
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	jstring ContentCaptureContext::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ContentCaptureContext::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::contentcapture
