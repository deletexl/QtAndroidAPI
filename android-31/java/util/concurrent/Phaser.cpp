#include "../../../JString.hpp"
#include "./TimeUnit.hpp"
#include "./atomic/AtomicReference.hpp"
#include "./Phaser.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	Phaser::Phaser(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Phaser::Phaser()
		: JObject(
			"java.util.concurrent.Phaser",
			"()V"
		) {}
	Phaser::Phaser(jint arg0)
		: JObject(
			"java.util.concurrent.Phaser",
			"(I)V",
			arg0
		) {}
	Phaser::Phaser(java::util::concurrent::Phaser &arg0)
		: JObject(
			"java.util.concurrent.Phaser",
			"(Ljava/util/concurrent/Phaser;)V",
			arg0.object()
		) {}
	Phaser::Phaser(java::util::concurrent::Phaser &arg0, jint arg1)
		: JObject(
			"java.util.concurrent.Phaser",
			"(Ljava/util/concurrent/Phaser;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint Phaser::arrive() const
	{
		return callMethod<jint>(
			"arrive",
			"()I"
		);
	}
	jint Phaser::arriveAndAwaitAdvance() const
	{
		return callMethod<jint>(
			"arriveAndAwaitAdvance",
			"()I"
		);
	}
	jint Phaser::arriveAndDeregister() const
	{
		return callMethod<jint>(
			"arriveAndDeregister",
			"()I"
		);
	}
	jint Phaser::awaitAdvance(jint arg0) const
	{
		return callMethod<jint>(
			"awaitAdvance",
			"(I)I",
			arg0
		);
	}
	jint Phaser::awaitAdvanceInterruptibly(jint arg0) const
	{
		return callMethod<jint>(
			"awaitAdvanceInterruptibly",
			"(I)I",
			arg0
		);
	}
	jint Phaser::awaitAdvanceInterruptibly(jint arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jint>(
			"awaitAdvanceInterruptibly",
			"(IJLjava/util/concurrent/TimeUnit;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint Phaser::bulkRegister(jint arg0) const
	{
		return callMethod<jint>(
			"bulkRegister",
			"(I)I",
			arg0
		);
	}
	void Phaser::forceTermination() const
	{
		callMethod<void>(
			"forceTermination",
			"()V"
		);
	}
	jint Phaser::getArrivedParties() const
	{
		return callMethod<jint>(
			"getArrivedParties",
			"()I"
		);
	}
	java::util::concurrent::Phaser Phaser::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/util/concurrent/Phaser;"
		);
	}
	jint Phaser::getPhase() const
	{
		return callMethod<jint>(
			"getPhase",
			"()I"
		);
	}
	jint Phaser::getRegisteredParties() const
	{
		return callMethod<jint>(
			"getRegisteredParties",
			"()I"
		);
	}
	java::util::concurrent::Phaser Phaser::getRoot() const
	{
		return callObjectMethod(
			"getRoot",
			"()Ljava/util/concurrent/Phaser;"
		);
	}
	jint Phaser::getUnarrivedParties() const
	{
		return callMethod<jint>(
			"getUnarrivedParties",
			"()I"
		);
	}
	jboolean Phaser::isTerminated() const
	{
		return callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	jint Phaser::_register() const
	{
		return callMethod<jint>(
			"register",
			"()I"
		);
	}
	JString Phaser::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

