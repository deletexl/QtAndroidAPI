#include "../../../JLongArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/reflect/Field.hpp"
#include "./CopyOnWriteArrayList.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	CopyOnWriteArrayList::CopyOnWriteArrayList(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CopyOnWriteArrayList::CopyOnWriteArrayList()
		: JObject(
			"java.util.concurrent.CopyOnWriteArrayList",
			"()V"
		) {}
	CopyOnWriteArrayList::CopyOnWriteArrayList(JObjectArray arg0)
		: JObject(
			"java.util.concurrent.CopyOnWriteArrayList",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		) {}
	CopyOnWriteArrayList::CopyOnWriteArrayList(JObject arg0)
		: JObject(
			"java.util.concurrent.CopyOnWriteArrayList",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean CopyOnWriteArrayList::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void CopyOnWriteArrayList::add(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	jboolean CopyOnWriteArrayList::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArrayList::addAll(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.object()
		);
	}
	jint CopyOnWriteArrayList::addAllAbsent(JObject arg0) const
	{
		return callMethod<jint>(
			"addAllAbsent",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArrayList::addIfAbsent(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addIfAbsent",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void CopyOnWriteArrayList::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject CopyOnWriteArrayList::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean CopyOnWriteArrayList::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean CopyOnWriteArrayList::containsAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArrayList::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void CopyOnWriteArrayList::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	JObject CopyOnWriteArrayList::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jint CopyOnWriteArrayList::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint CopyOnWriteArrayList::indexOf(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint CopyOnWriteArrayList::indexOf(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;I)I",
			arg0.object<jobject>(),
			arg1
		);
	}
	jboolean CopyOnWriteArrayList::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject CopyOnWriteArrayList::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint CopyOnWriteArrayList::lastIndexOf(JObject arg0) const
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint CopyOnWriteArrayList::lastIndexOf(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;I)I",
			arg0.object<jobject>(),
			arg1
		);
	}
	JObject CopyOnWriteArrayList::listIterator() const
	{
		return callObjectMethod(
			"listIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	JObject CopyOnWriteArrayList::listIterator(jint arg0) const
	{
		return callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	jboolean CopyOnWriteArrayList::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject CopyOnWriteArrayList::remove(jint arg0) const
	{
		return callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jboolean CopyOnWriteArrayList::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArrayList::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	void CopyOnWriteArrayList::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/UnaryOperator;)V",
			arg0.object()
		);
	}
	jboolean CopyOnWriteArrayList::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	JObject CopyOnWriteArrayList::set(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	jint CopyOnWriteArrayList::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	void CopyOnWriteArrayList::sort(JObject arg0) const
	{
		callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.object()
		);
	}
	JObject CopyOnWriteArrayList::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObject CopyOnWriteArrayList::subList(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subList",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	JObjectArray CopyOnWriteArrayList::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray CopyOnWriteArrayList::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString CopyOnWriteArrayList::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

