#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class PowerManager;
}
namespace android::os
{
	class WorkSource;
}
class JString;

namespace android::os
{
	class PowerManager_WakeLock : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PowerManager_WakeLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PowerManager_WakeLock(QJniObject obj);
		
		// Constructors
		
		// Methods
		void acquire() const;
		void acquire(jlong arg0) const;
		jboolean isHeld() const;
		void release() const;
		void release(jint arg0) const;
		void setReferenceCounted(jboolean arg0) const;
		void setWorkSource(android::os::WorkSource arg0) const;
		JString toString() const;
	};
} // namespace android::os

