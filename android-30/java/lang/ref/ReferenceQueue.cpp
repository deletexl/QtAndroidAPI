#include "./Reference.hpp"
#include "./ReferenceQueue.hpp"

namespace java::lang::ref
{
	// Fields
	
	// QJniObject forward
	ReferenceQueue::ReferenceQueue(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ReferenceQueue::ReferenceQueue()
		: JObject(
			"java.lang.ref.ReferenceQueue",
			"()V"
		) {}
	
	// Methods
	java::lang::ref::Reference ReferenceQueue::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/ref/Reference;"
		);
	}
	java::lang::ref::Reference ReferenceQueue::remove() const
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/ref/Reference;"
		);
	}
	java::lang::ref::Reference ReferenceQueue::remove(jlong arg0) const
	{
		return callObjectMethod(
			"remove",
			"(J)Ljava/lang/ref/Reference;",
			arg0
		);
	}
} // namespace java::lang::ref

