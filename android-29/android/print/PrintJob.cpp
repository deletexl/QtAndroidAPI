#include "./PrintJobId.hpp"
#include "./PrintJobInfo.hpp"
#include "./PrintManager.hpp"
#include "./PrintJob.hpp"

namespace android::print
{
	// Fields
	
	// QAndroidJniObject forward
	PrintJob::PrintJob(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void PrintJob::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean PrintJob::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject PrintJob::getId()
	{
		return callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;"
		);
	}
	QAndroidJniObject PrintJob::getInfo()
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintJobInfo;"
		);
	}
	jint PrintJob::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PrintJob::isBlocked()
	{
		return callMethod<jboolean>(
			"isBlocked",
			"()Z"
		);
	}
	jboolean PrintJob::isCancelled()
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean PrintJob::isCompleted()
	{
		return callMethod<jboolean>(
			"isCompleted",
			"()Z"
		);
	}
	jboolean PrintJob::isFailed()
	{
		return callMethod<jboolean>(
			"isFailed",
			"()Z"
		);
	}
	jboolean PrintJob::isQueued()
	{
		return callMethod<jboolean>(
			"isQueued",
			"()Z"
		);
	}
	jboolean PrintJob::isStarted()
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void PrintJob::restart()
	{
		callMethod<void>(
			"restart",
			"()V"
		);
	}
} // namespace android::print

