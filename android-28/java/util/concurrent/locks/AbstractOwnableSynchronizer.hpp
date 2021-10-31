#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Thread;
}

namespace java::util::concurrent::locks
{
	class AbstractOwnableSynchronizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractOwnableSynchronizer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbstractOwnableSynchronizer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::util::concurrent::locks
