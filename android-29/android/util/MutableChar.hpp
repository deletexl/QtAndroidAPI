#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableChar : public __JniBaseClass
	{
	public:
		// Fields
		jchar value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MutableChar(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MutableChar(QAndroidJniObject obj);
		
		// Constructors
		MutableChar(jchar arg0);
		
		// Methods
	};
} // namespace android::util

