#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::view
{
	class OrientationEventListener : public __JniBaseClass
	{
	public:
		// Fields
		static jint ORIENTATION_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OrientationEventListener(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OrientationEventListener(QAndroidJniObject obj);
		
		// Constructors
		OrientationEventListener(android::content::Context arg0);
		OrientationEventListener(android::content::Context arg0, jint arg1);
		
		// Methods
		jboolean canDetectOrientation();
		void disable();
		void enable();
		void onOrientationChanged(jint arg0);
	};
} // namespace android::view
