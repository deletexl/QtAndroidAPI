#pragma once

#include "../../../../JObject.hpp"

class JObject;
namespace java::lang
{
	class Thread;
}

namespace java::util::concurrent::locks
{
	class LockSupport : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LockSupport(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LockSupport(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getBlocker(java::lang::Thread arg0);
		static void park();
		static void park(JObject arg0);
		static void parkNanos(jlong arg0);
		static void parkNanos(JObject arg0, jlong arg1);
		static void parkUntil(jlong arg0);
		static void parkUntil(JObject arg0, jlong arg1);
		static void setCurrentBlocker(JObject arg0);
		static void unpark(java::lang::Thread arg0);
	};
} // namespace java::util::concurrent::locks

