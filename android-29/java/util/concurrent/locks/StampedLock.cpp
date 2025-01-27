#include "../../../io/ObjectInputStream.hpp"
#include "../../../../JString.hpp"
#include "../TimeUnit.hpp"
#include "./StampedLock.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// QJniObject forward
	StampedLock::StampedLock(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	StampedLock::StampedLock()
		: JObject(
			"java.util.concurrent.locks.StampedLock",
			"()V"
		) {}
	
	// Methods
	jboolean StampedLock::isLockStamp(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isLockStamp",
			"(J)Z",
			arg0
		);
	}
	jboolean StampedLock::isOptimisticReadStamp(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isOptimisticReadStamp",
			"(J)Z",
			arg0
		);
	}
	jboolean StampedLock::isReadLockStamp(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isReadLockStamp",
			"(J)Z",
			arg0
		);
	}
	jboolean StampedLock::isWriteLockStamp(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isWriteLockStamp",
			"(J)Z",
			arg0
		);
	}
	JObject StampedLock::asReadLock() const
	{
		return callObjectMethod(
			"asReadLock",
			"()Ljava/util/concurrent/locks/Lock;"
		);
	}
	JObject StampedLock::asReadWriteLock() const
	{
		return callObjectMethod(
			"asReadWriteLock",
			"()Ljava/util/concurrent/locks/ReadWriteLock;"
		);
	}
	JObject StampedLock::asWriteLock() const
	{
		return callObjectMethod(
			"asWriteLock",
			"()Ljava/util/concurrent/locks/Lock;"
		);
	}
	jint StampedLock::getReadLockCount() const
	{
		return callMethod<jint>(
			"getReadLockCount",
			"()I"
		);
	}
	jboolean StampedLock::isReadLocked() const
	{
		return callMethod<jboolean>(
			"isReadLocked",
			"()Z"
		);
	}
	jboolean StampedLock::isWriteLocked() const
	{
		return callMethod<jboolean>(
			"isWriteLocked",
			"()Z"
		);
	}
	jlong StampedLock::readLock() const
	{
		return callMethod<jlong>(
			"readLock",
			"()J"
		);
	}
	jlong StampedLock::readLockInterruptibly() const
	{
		return callMethod<jlong>(
			"readLockInterruptibly",
			"()J"
		);
	}
	JString StampedLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jlong StampedLock::tryConvertToOptimisticRead(jlong arg0) const
	{
		return callMethod<jlong>(
			"tryConvertToOptimisticRead",
			"(J)J",
			arg0
		);
	}
	jlong StampedLock::tryConvertToReadLock(jlong arg0) const
	{
		return callMethod<jlong>(
			"tryConvertToReadLock",
			"(J)J",
			arg0
		);
	}
	jlong StampedLock::tryConvertToWriteLock(jlong arg0) const
	{
		return callMethod<jlong>(
			"tryConvertToWriteLock",
			"(J)J",
			arg0
		);
	}
	jlong StampedLock::tryOptimisticRead() const
	{
		return callMethod<jlong>(
			"tryOptimisticRead",
			"()J"
		);
	}
	jlong StampedLock::tryReadLock() const
	{
		return callMethod<jlong>(
			"tryReadLock",
			"()J"
		);
	}
	jlong StampedLock::tryReadLock(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jlong>(
			"tryReadLock",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.object()
		);
	}
	jboolean StampedLock::tryUnlockRead() const
	{
		return callMethod<jboolean>(
			"tryUnlockRead",
			"()Z"
		);
	}
	jboolean StampedLock::tryUnlockWrite() const
	{
		return callMethod<jboolean>(
			"tryUnlockWrite",
			"()Z"
		);
	}
	jlong StampedLock::tryWriteLock() const
	{
		return callMethod<jlong>(
			"tryWriteLock",
			"()J"
		);
	}
	jlong StampedLock::tryWriteLock(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jlong>(
			"tryWriteLock",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.object()
		);
	}
	void StampedLock::unlock(jlong arg0) const
	{
		callMethod<void>(
			"unlock",
			"(J)V",
			arg0
		);
	}
	void StampedLock::unlockRead(jlong arg0) const
	{
		callMethod<void>(
			"unlockRead",
			"(J)V",
			arg0
		);
	}
	void StampedLock::unlockWrite(jlong arg0) const
	{
		callMethod<void>(
			"unlockWrite",
			"(J)V",
			arg0
		);
	}
	jboolean StampedLock::validate(jlong arg0) const
	{
		return callMethod<jboolean>(
			"validate",
			"(J)Z",
			arg0
		);
	}
	jlong StampedLock::writeLock() const
	{
		return callMethod<jlong>(
			"writeLock",
			"()J"
		);
	}
	jlong StampedLock::writeLockInterruptibly() const
	{
		return callMethod<jlong>(
			"writeLockInterruptibly",
			"()J"
		);
	}
} // namespace java::util::concurrent::locks

