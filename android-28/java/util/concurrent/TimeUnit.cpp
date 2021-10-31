#include "../../lang/Thread.hpp"
#include "../../time/Duration.hpp"
#include "../../time/temporal/ChronoUnit.hpp"
#include "./TimeUnit.hpp"

namespace java::util::concurrent
{
	// Fields
	java::util::concurrent::TimeUnit TimeUnit::DAYS()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"DAYS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	java::util::concurrent::TimeUnit TimeUnit::HOURS()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"HOURS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	java::util::concurrent::TimeUnit TimeUnit::MICROSECONDS()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"MICROSECONDS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	java::util::concurrent::TimeUnit TimeUnit::MILLISECONDS()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"MILLISECONDS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	java::util::concurrent::TimeUnit TimeUnit::MINUTES()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"MINUTES",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	java::util::concurrent::TimeUnit TimeUnit::NANOSECONDS()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"NANOSECONDS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	java::util::concurrent::TimeUnit TimeUnit::SECONDS()
	{
		return getStaticObjectField(
			"java.util.concurrent.TimeUnit",
			"SECONDS",
			"Ljava/util/concurrent/TimeUnit;"
		);
	}
	
	// QAndroidJniObject forward
	TimeUnit::TimeUnit(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::util::concurrent::TimeUnit TimeUnit::of(java::time::temporal::ChronoUnit arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.TimeUnit",
			"of",
			"(Ljava/time/temporal/ChronoUnit;)Ljava/util/concurrent/TimeUnit;",
			arg0.object()
		);
	}
	java::util::concurrent::TimeUnit TimeUnit::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.TimeUnit",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/concurrent/TimeUnit;",
			arg0
		);
	}
	jarray TimeUnit::values()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.TimeUnit",
			"values",
			"()[Ljava/util/concurrent/TimeUnit;"
		).object<jarray>();
	}
	jlong TimeUnit::convert(java::time::Duration arg0)
	{
		return callMethod<jlong>(
			"convert",
			"(Ljava/time/Duration;)J",
			arg0.object()
		);
	}
	jlong TimeUnit::convert(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jlong>(
			"convert",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.object()
		);
	}
	void TimeUnit::sleep(jlong arg0)
	{
		callMethod<void>(
			"sleep",
			"(J)V",
			arg0
		);
	}
	void TimeUnit::timedJoin(java::lang::Thread arg0, jlong arg1)
	{
		callMethod<void>(
			"timedJoin",
			"(Ljava/lang/Thread;J)V",
			arg0.object(),
			arg1
		);
	}
	void TimeUnit::timedWait(jobject arg0, jlong arg1)
	{
		callMethod<void>(
			"timedWait",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1
		);
	}
	java::time::temporal::ChronoUnit TimeUnit::toChronoUnit()
	{
		return callObjectMethod(
			"toChronoUnit",
			"()Ljava/time/temporal/ChronoUnit;"
		);
	}
	jlong TimeUnit::toDays(jlong arg0)
	{
		return callMethod<jlong>(
			"toDays",
			"(J)J",
			arg0
		);
	}
	jlong TimeUnit::toHours(jlong arg0)
	{
		return callMethod<jlong>(
			"toHours",
			"(J)J",
			arg0
		);
	}
	jlong TimeUnit::toMicros(jlong arg0)
	{
		return callMethod<jlong>(
			"toMicros",
			"(J)J",
			arg0
		);
	}
	jlong TimeUnit::toMillis(jlong arg0)
	{
		return callMethod<jlong>(
			"toMillis",
			"(J)J",
			arg0
		);
	}
	jlong TimeUnit::toMinutes(jlong arg0)
	{
		return callMethod<jlong>(
			"toMinutes",
			"(J)J",
			arg0
		);
	}
	jlong TimeUnit::toNanos(jlong arg0)
	{
		return callMethod<jlong>(
			"toNanos",
			"(J)J",
			arg0
		);
	}
	jlong TimeUnit::toSeconds(jlong arg0)
	{
		return callMethod<jlong>(
			"toSeconds",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::concurrent
