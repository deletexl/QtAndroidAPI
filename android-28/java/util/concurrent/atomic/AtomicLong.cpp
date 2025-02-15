#include "../../../../JString.hpp"
#include "./AtomicLong.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QJniObject forward
	AtomicLong::AtomicLong(QJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	AtomicLong::AtomicLong()
		: java::lang::Number(
			"java.util.concurrent.atomic.AtomicLong",
			"()V"
		) {}
	AtomicLong::AtomicLong(jlong arg0)
		: java::lang::Number(
			"java.util.concurrent.atomic.AtomicLong",
			"(J)V",
			arg0
		) {}
	
	// Methods
	jlong AtomicLong::accumulateAndGet(jlong arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"accumulateAndGet",
			"(JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.object()
		);
	}
	jlong AtomicLong::addAndGet(jlong arg0) const
	{
		return callMethod<jlong>(
			"addAndGet",
			"(J)J",
			arg0
		);
	}
	jlong AtomicLong::compareAndExchange(jlong arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"compareAndExchange",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jlong AtomicLong::compareAndExchangeAcquire(jlong arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"compareAndExchangeAcquire",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jlong AtomicLong::compareAndExchangeRelease(jlong arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"compareAndExchangeRelease",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jboolean AtomicLong::compareAndSet(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jlong AtomicLong::decrementAndGet() const
	{
		return callMethod<jlong>(
			"decrementAndGet",
			"()J"
		);
	}
	jdouble AtomicLong::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat AtomicLong::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jlong AtomicLong::get() const
	{
		return callMethod<jlong>(
			"get",
			"()J"
		);
	}
	jlong AtomicLong::getAcquire() const
	{
		return callMethod<jlong>(
			"getAcquire",
			"()J"
		);
	}
	jlong AtomicLong::getAndAccumulate(jlong arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"getAndAccumulate",
			"(JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.object()
		);
	}
	jlong AtomicLong::getAndAdd(jlong arg0) const
	{
		return callMethod<jlong>(
			"getAndAdd",
			"(J)J",
			arg0
		);
	}
	jlong AtomicLong::getAndDecrement() const
	{
		return callMethod<jlong>(
			"getAndDecrement",
			"()J"
		);
	}
	jlong AtomicLong::getAndIncrement() const
	{
		return callMethod<jlong>(
			"getAndIncrement",
			"()J"
		);
	}
	jlong AtomicLong::getAndSet(jlong arg0) const
	{
		return callMethod<jlong>(
			"getAndSet",
			"(J)J",
			arg0
		);
	}
	jlong AtomicLong::getAndUpdate(JObject arg0) const
	{
		return callMethod<jlong>(
			"getAndUpdate",
			"(Ljava/util/function/LongUnaryOperator;)J",
			arg0.object()
		);
	}
	jlong AtomicLong::getOpaque() const
	{
		return callMethod<jlong>(
			"getOpaque",
			"()J"
		);
	}
	jlong AtomicLong::getPlain() const
	{
		return callMethod<jlong>(
			"getPlain",
			"()J"
		);
	}
	jlong AtomicLong::incrementAndGet() const
	{
		return callMethod<jlong>(
			"incrementAndGet",
			"()J"
		);
	}
	jint AtomicLong::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	void AtomicLong::lazySet(jlong arg0) const
	{
		callMethod<void>(
			"lazySet",
			"(J)V",
			arg0
		);
	}
	jlong AtomicLong::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void AtomicLong::set(jlong arg0) const
	{
		callMethod<void>(
			"set",
			"(J)V",
			arg0
		);
	}
	void AtomicLong::setOpaque(jlong arg0) const
	{
		callMethod<void>(
			"setOpaque",
			"(J)V",
			arg0
		);
	}
	void AtomicLong::setPlain(jlong arg0) const
	{
		callMethod<void>(
			"setPlain",
			"(J)V",
			arg0
		);
	}
	void AtomicLong::setRelease(jlong arg0) const
	{
		callMethod<void>(
			"setRelease",
			"(J)V",
			arg0
		);
	}
	JString AtomicLong::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jlong AtomicLong::updateAndGet(JObject arg0) const
	{
		return callMethod<jlong>(
			"updateAndGet",
			"(Ljava/util/function/LongUnaryOperator;)J",
			arg0.object()
		);
	}
	jboolean AtomicLong::weakCompareAndSet(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicLong::weakCompareAndSetAcquire(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicLong::weakCompareAndSetPlain(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicLong::weakCompareAndSetRelease(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicLong::weakCompareAndSetVolatile(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
} // namespace java::util::concurrent::atomic

