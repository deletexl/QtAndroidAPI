#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableBoolean : public __JniBaseClass
	{
	public:
		// Fields
		jboolean value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MutableBoolean(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MutableBoolean(QAndroidJniObject obj);
		
		// Constructors
		MutableBoolean(jboolean arg0);
		
		// Methods
	};
} // namespace android::util
