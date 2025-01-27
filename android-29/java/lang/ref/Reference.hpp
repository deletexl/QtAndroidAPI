#pragma once

#include "../../../JObject.hpp"

class JObject;
namespace java::lang::ref
{
	class ReferenceQueue;
}

namespace java::lang::ref
{
	class Reference : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Reference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Reference(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void reachabilityFence(JObject arg0);
		void clear() const;
		jboolean enqueue() const;
		JObject get() const;
		jboolean isEnqueued() const;
		jboolean refersTo(JObject arg0) const;
	};
} // namespace java::lang::ref

