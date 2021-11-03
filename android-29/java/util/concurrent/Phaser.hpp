#pragma once

#include "../../../JObject.hpp"

class JString;
namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::atomic
{
	class AtomicReference;
}

namespace java::util::concurrent
{
	class Phaser : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Phaser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Phaser(QAndroidJniObject obj);
		
		// Constructors
		Phaser();
		Phaser(jint arg0);
		Phaser(java::util::concurrent::Phaser &arg0);
		Phaser(java::util::concurrent::Phaser &arg0, jint arg1);
		
		// Methods
		jint arrive();
		jint arriveAndAwaitAdvance();
		jint arriveAndDeregister();
		jint awaitAdvance(jint arg0);
		jint awaitAdvanceInterruptibly(jint arg0);
		jint awaitAdvanceInterruptibly(jint arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		jint bulkRegister(jint arg0);
		void forceTermination();
		jint getArrivedParties();
		java::util::concurrent::Phaser getParent();
		jint getPhase();
		jint getRegisteredParties();
		java::util::concurrent::Phaser getRoot();
		jint getUnarrivedParties();
		jboolean isTerminated();
		jint _register();
		JString toString();
	};
} // namespace java::util::concurrent

