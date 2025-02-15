#include "../../JByteArray.hpp"
#include "../os/Parcel.hpp"
#include "../os/UserHandle.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ApplicationExitInfo.hpp"

namespace android::app
{
	// Fields
	JObject ApplicationExitInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ApplicationExitInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ApplicationExitInfo::REASON_ANR()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_ANR"
		);
	}
	jint ApplicationExitInfo::REASON_CRASH()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_CRASH"
		);
	}
	jint ApplicationExitInfo::REASON_CRASH_NATIVE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_CRASH_NATIVE"
		);
	}
	jint ApplicationExitInfo::REASON_DEPENDENCY_DIED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_DEPENDENCY_DIED"
		);
	}
	jint ApplicationExitInfo::REASON_EXCESSIVE_RESOURCE_USAGE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_EXCESSIVE_RESOURCE_USAGE"
		);
	}
	jint ApplicationExitInfo::REASON_EXIT_SELF()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_EXIT_SELF"
		);
	}
	jint ApplicationExitInfo::REASON_INITIALIZATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_INITIALIZATION_FAILURE"
		);
	}
	jint ApplicationExitInfo::REASON_LOW_MEMORY()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_LOW_MEMORY"
		);
	}
	jint ApplicationExitInfo::REASON_OTHER()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_OTHER"
		);
	}
	jint ApplicationExitInfo::REASON_PERMISSION_CHANGE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_PERMISSION_CHANGE"
		);
	}
	jint ApplicationExitInfo::REASON_SIGNALED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_SIGNALED"
		);
	}
	jint ApplicationExitInfo::REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_UNKNOWN"
		);
	}
	jint ApplicationExitInfo::REASON_USER_REQUESTED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_USER_REQUESTED"
		);
	}
	jint ApplicationExitInfo::REASON_USER_STOPPED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_USER_STOPPED"
		);
	}
	
	// QJniObject forward
	ApplicationExitInfo::ApplicationExitInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ApplicationExitInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ApplicationExitInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ApplicationExitInfo::getDefiningUid() const
	{
		return callMethod<jint>(
			"getDefiningUid",
			"()I"
		);
	}
	JString ApplicationExitInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	jint ApplicationExitInfo::getImportance() const
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	jint ApplicationExitInfo::getPackageUid() const
	{
		return callMethod<jint>(
			"getPackageUid",
			"()I"
		);
	}
	jint ApplicationExitInfo::getPid() const
	{
		return callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	JString ApplicationExitInfo::getProcessName() const
	{
		return callObjectMethod(
			"getProcessName",
			"()Ljava/lang/String;"
		);
	}
	JByteArray ApplicationExitInfo::getProcessStateSummary() const
	{
		return callObjectMethod(
			"getProcessStateSummary",
			"()[B"
		);
	}
	jlong ApplicationExitInfo::getPss() const
	{
		return callMethod<jlong>(
			"getPss",
			"()J"
		);
	}
	jint ApplicationExitInfo::getRealUid() const
	{
		return callMethod<jint>(
			"getRealUid",
			"()I"
		);
	}
	jint ApplicationExitInfo::getReason() const
	{
		return callMethod<jint>(
			"getReason",
			"()I"
		);
	}
	jlong ApplicationExitInfo::getRss() const
	{
		return callMethod<jlong>(
			"getRss",
			"()J"
		);
	}
	jint ApplicationExitInfo::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jlong ApplicationExitInfo::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	java::io::InputStream ApplicationExitInfo::getTraceInputStream() const
	{
		return callObjectMethod(
			"getTraceInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	android::os::UserHandle ApplicationExitInfo::getUserHandle() const
	{
		return callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	jint ApplicationExitInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ApplicationExitInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ApplicationExitInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

