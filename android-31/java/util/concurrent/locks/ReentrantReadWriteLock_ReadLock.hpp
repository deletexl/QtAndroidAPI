#pragma once

#include "../../../../JObject.hpp"

namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock;
}

namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock_ReadLock : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReentrantReadWriteLock_ReadLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReentrantReadWriteLock_ReadLock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void lock();
		void lockInterruptibly();
		JObject newCondition();
		jstring toString();
		jboolean tryLock();
		jboolean tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void unlock();
	};
} // namespace java::util::concurrent::locks

