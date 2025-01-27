#include "../../content/Intent.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./JobWorkItem.hpp"

namespace android::app::job
{
	// Fields
	JObject JobWorkItem::CREATOR()
	{
		return getStaticObjectField(
			"android.app.job.JobWorkItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	JobWorkItem::JobWorkItem(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	JobWorkItem::JobWorkItem(android::content::Intent arg0)
		: JObject(
			"android.app.job.JobWorkItem",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	JobWorkItem::JobWorkItem(android::content::Intent arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.app.job.JobWorkItem",
			"(Landroid/content/Intent;JJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	jint JobWorkItem::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint JobWorkItem::getDeliveryCount() const
	{
		return callMethod<jint>(
			"getDeliveryCount",
			"()I"
		);
	}
	jlong JobWorkItem::getEstimatedNetworkDownloadBytes() const
	{
		return callMethod<jlong>(
			"getEstimatedNetworkDownloadBytes",
			"()J"
		);
	}
	jlong JobWorkItem::getEstimatedNetworkUploadBytes() const
	{
		return callMethod<jlong>(
			"getEstimatedNetworkUploadBytes",
			"()J"
		);
	}
	android::content::Intent JobWorkItem::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	JString JobWorkItem::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void JobWorkItem::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::job

