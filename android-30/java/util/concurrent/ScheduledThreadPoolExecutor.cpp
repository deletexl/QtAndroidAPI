#include "../../../JObject.hpp"
#include "./TimeUnit.hpp"
#include "./atomic/AtomicLong.hpp"
#include "./ScheduledThreadPoolExecutor.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(QJniObject obj) : java::util::concurrent::ThreadPoolExecutor(obj) {}
	
	// Constructors
	ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint arg0)
		: java::util::concurrent::ThreadPoolExecutor(
			"java.util.concurrent.ScheduledThreadPoolExecutor",
			"(I)V",
			arg0
		) {}
	ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint arg0, JObject arg1)
		: java::util::concurrent::ThreadPoolExecutor(
			"java.util.concurrent.ScheduledThreadPoolExecutor",
			"(ILjava/util/concurrent/RejectedExecutionHandler;)V",
			arg0,
			arg1.object()
		) {}
	ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint arg0, JObject arg1, JObject arg2)
		: java::util::concurrent::ThreadPoolExecutor(
			"java.util.concurrent.ScheduledThreadPoolExecutor",
			"(ILjava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0,
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	void ScheduledThreadPoolExecutor::execute(JObject arg0) const
	{
		callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	jboolean ScheduledThreadPoolExecutor::getContinueExistingPeriodicTasksAfterShutdownPolicy() const
	{
		return callMethod<jboolean>(
			"getContinueExistingPeriodicTasksAfterShutdownPolicy",
			"()Z"
		);
	}
	jboolean ScheduledThreadPoolExecutor::getExecuteExistingDelayedTasksAfterShutdownPolicy() const
	{
		return callMethod<jboolean>(
			"getExecuteExistingDelayedTasksAfterShutdownPolicy",
			"()Z"
		);
	}
	JObject ScheduledThreadPoolExecutor::getQueue() const
	{
		return callObjectMethod(
			"getQueue",
			"()Ljava/util/concurrent/BlockingQueue;"
		);
	}
	jboolean ScheduledThreadPoolExecutor::getRemoveOnCancelPolicy() const
	{
		return callMethod<jboolean>(
			"getRemoveOnCancelPolicy",
			"()Z"
		);
	}
	JObject ScheduledThreadPoolExecutor::schedule(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callObjectMethod(
			"schedule",
			"(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	JObject ScheduledThreadPoolExecutor::scheduleAtFixedRate(JObject arg0, jlong arg1, jlong arg2, java::util::concurrent::TimeUnit arg3) const
	{
		return callObjectMethod(
			"scheduleAtFixedRate",
			"(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	JObject ScheduledThreadPoolExecutor::scheduleWithFixedDelay(JObject arg0, jlong arg1, jlong arg2, java::util::concurrent::TimeUnit arg3) const
	{
		return callObjectMethod(
			"scheduleWithFixedDelay",
			"(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void ScheduledThreadPoolExecutor::setContinueExistingPeriodicTasksAfterShutdownPolicy(jboolean arg0) const
	{
		callMethod<void>(
			"setContinueExistingPeriodicTasksAfterShutdownPolicy",
			"(Z)V",
			arg0
		);
	}
	void ScheduledThreadPoolExecutor::setExecuteExistingDelayedTasksAfterShutdownPolicy(jboolean arg0) const
	{
		callMethod<void>(
			"setExecuteExistingDelayedTasksAfterShutdownPolicy",
			"(Z)V",
			arg0
		);
	}
	void ScheduledThreadPoolExecutor::setRemoveOnCancelPolicy(jboolean arg0) const
	{
		callMethod<void>(
			"setRemoveOnCancelPolicy",
			"(Z)V",
			arg0
		);
	}
	void ScheduledThreadPoolExecutor::shutdown() const
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	JObject ScheduledThreadPoolExecutor::shutdownNow() const
	{
		return callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;"
		);
	}
	JObject ScheduledThreadPoolExecutor::submit(JObject arg0) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	JObject ScheduledThreadPoolExecutor::submit(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
} // namespace java::util::concurrent

