#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TimeUnit.hpp"
#include "./atomic/AtomicInteger.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./LinkedBlockingQueue.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	LinkedBlockingQueue::LinkedBlockingQueue(QJniObject obj) : java::util::AbstractQueue(obj) {}
	
	// Constructors
	LinkedBlockingQueue::LinkedBlockingQueue()
		: java::util::AbstractQueue(
			"java.util.concurrent.LinkedBlockingQueue",
			"()V"
		) {}
	LinkedBlockingQueue::LinkedBlockingQueue(jint arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.LinkedBlockingQueue",
			"(I)V",
			arg0
		) {}
	LinkedBlockingQueue::LinkedBlockingQueue(JObject arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.LinkedBlockingQueue",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	void LinkedBlockingQueue::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean LinkedBlockingQueue::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint LinkedBlockingQueue::drainTo(JObject arg0) const
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jint LinkedBlockingQueue::drainTo(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	void LinkedBlockingQueue::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	JObject LinkedBlockingQueue::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean LinkedBlockingQueue::offer(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedBlockingQueue::offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	JObject LinkedBlockingQueue::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedBlockingQueue::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedBlockingQueue::poll(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	void LinkedBlockingQueue::put(JObject arg0) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jint LinkedBlockingQueue::remainingCapacity() const
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean LinkedBlockingQueue::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedBlockingQueue::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean LinkedBlockingQueue::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	jboolean LinkedBlockingQueue::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint LinkedBlockingQueue::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject LinkedBlockingQueue::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObject LinkedBlockingQueue::take() const
	{
		return callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		);
	}
	JObjectArray LinkedBlockingQueue::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray LinkedBlockingQueue::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString LinkedBlockingQueue::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

