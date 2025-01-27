#pragma once

#include "../AbstractCollection.hpp"

class JObjectArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;

namespace java::util::concurrent
{
	class ConcurrentLinkedDeque : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConcurrentLinkedDeque(const char *className, const char *sig, Ts...agv) : java::util::AbstractCollection(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentLinkedDeque(QJniObject obj);
		
		// Constructors
		ConcurrentLinkedDeque();
		ConcurrentLinkedDeque(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0) const;
		jboolean addAll(JObject arg0) const;
		void addFirst(JObject arg0) const;
		void addLast(JObject arg0) const;
		void clear() const;
		jboolean contains(JObject arg0) const;
		JObject descendingIterator() const;
		JObject element() const;
		void forEach(JObject arg0) const;
		JObject getFirst() const;
		JObject getLast() const;
		jboolean isEmpty() const;
		JObject iterator() const;
		jboolean offer(JObject arg0) const;
		jboolean offerFirst(JObject arg0) const;
		jboolean offerLast(JObject arg0) const;
		JObject peek() const;
		JObject peekFirst() const;
		JObject peekLast() const;
		JObject poll() const;
		JObject pollFirst() const;
		JObject pollLast() const;
		JObject pop() const;
		void push(JObject arg0) const;
		jboolean remove(JObject arg0) const;
		JObject remove() const;
		jboolean removeAll(JObject arg0) const;
		JObject removeFirst() const;
		jboolean removeFirstOccurrence(JObject arg0) const;
		jboolean removeIf(JObject arg0) const;
		JObject removeLast() const;
		jboolean removeLastOccurrence(JObject arg0) const;
		jboolean retainAll(JObject arg0) const;
		jint size() const;
		JObject spliterator() const;
		JObjectArray toArray() const;
		JObjectArray toArray(JObjectArray arg0) const;
		JString toString() const;
	};
} // namespace java::util::concurrent

