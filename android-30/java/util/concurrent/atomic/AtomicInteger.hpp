#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../../lang/Number.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicInteger : public java::lang::Number
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicInteger(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		AtomicInteger(QAndroidJniObject obj);
		
		// Constructors
		AtomicInteger();
		AtomicInteger(jint arg0);
		
		// Methods
		jint accumulateAndGet(jint arg0, __JniBaseClass arg1);
		jint addAndGet(jint arg0);
		jint compareAndExchange(jint arg0, jint arg1);
		jint compareAndExchangeAcquire(jint arg0, jint arg1);
		jint compareAndExchangeRelease(jint arg0, jint arg1);
		jboolean compareAndSet(jint arg0, jint arg1);
		jint decrementAndGet();
		jdouble doubleValue();
		jfloat floatValue();
		jint get();
		jint getAcquire();
		jint getAndAccumulate(jint arg0, __JniBaseClass arg1);
		jint getAndAdd(jint arg0);
		jint getAndDecrement();
		jint getAndIncrement();
		jint getAndSet(jint arg0);
		jint getAndUpdate(__JniBaseClass arg0);
		jint getOpaque();
		jint getPlain();
		jint incrementAndGet();
		jint intValue();
		void lazySet(jint arg0);
		jlong longValue();
		void set(jint arg0);
		void setOpaque(jint arg0);
		void setPlain(jint arg0);
		void setRelease(jint arg0);
		jstring toString();
		jint updateAndGet(__JniBaseClass arg0);
		jboolean weakCompareAndSet(jint arg0, jint arg1);
		jboolean weakCompareAndSetAcquire(jint arg0, jint arg1);
		jboolean weakCompareAndSetPlain(jint arg0, jint arg1);
		jboolean weakCompareAndSetRelease(jint arg0, jint arg1);
		jboolean weakCompareAndSetVolatile(jint arg0, jint arg1);
	};
} // namespace java::util::concurrent::atomic
