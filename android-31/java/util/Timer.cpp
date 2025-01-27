#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Date.hpp"
#include "./TimerTask.hpp"
#include "./concurrent/atomic/AtomicInteger.hpp"
#include "./Timer.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Timer::Timer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Timer::Timer()
		: JObject(
			"java.util.Timer",
			"()V"
		) {}
	Timer::Timer(jboolean arg0)
		: JObject(
			"java.util.Timer",
			"(Z)V",
			arg0
		) {}
	Timer::Timer(JString arg0)
		: JObject(
			"java.util.Timer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Timer::Timer(JString arg0, jboolean arg1)
		: JObject(
			"java.util.Timer",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	void Timer::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jint Timer::purge() const
	{
		return callMethod<jint>(
			"purge",
			"()I"
		);
	}
	void Timer::schedule(java::util::TimerTask arg0, java::util::Date arg1) const
	{
		callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;Ljava/util/Date;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Timer::schedule(java::util::TimerTask arg0, jlong arg1) const
	{
		callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;J)V",
			arg0.object(),
			arg1
		);
	}
	void Timer::schedule(java::util::TimerTask arg0, java::util::Date arg1, jlong arg2) const
	{
		callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;Ljava/util/Date;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void Timer::schedule(java::util::TimerTask arg0, jlong arg1, jlong arg2) const
	{
		callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void Timer::scheduleAtFixedRate(java::util::TimerTask arg0, java::util::Date arg1, jlong arg2) const
	{
		callMethod<void>(
			"scheduleAtFixedRate",
			"(Ljava/util/TimerTask;Ljava/util/Date;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void Timer::scheduleAtFixedRate(java::util::TimerTask arg0, jlong arg1, jlong arg2) const
	{
		callMethod<void>(
			"scheduleAtFixedRate",
			"(Ljava/util/TimerTask;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace java::util

