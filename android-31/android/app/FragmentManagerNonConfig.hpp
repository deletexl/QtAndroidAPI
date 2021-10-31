#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::app
{
	class FragmentManagerNonConfig : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FragmentManagerNonConfig(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FragmentManagerNonConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::app
