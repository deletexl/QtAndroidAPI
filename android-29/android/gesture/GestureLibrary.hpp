#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::gesture
{
	class Gesture;
}
namespace android::gesture
{
	class GestureStore;
}
namespace java::util
{
	class ArrayList;
}

namespace android::gesture
{
	class GestureLibrary : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureLibrary(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GestureLibrary(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addGesture(jstring arg0, android::gesture::Gesture arg1);
		QAndroidJniObject getGestureEntries();
		QAndroidJniObject getGestures(jstring arg0);
		jint getOrientationStyle();
		jint getSequenceType();
		jboolean isReadOnly();
		jboolean load();
		QAndroidJniObject recognize(android::gesture::Gesture arg0);
		void removeEntry(jstring arg0);
		void removeGesture(jstring arg0, android::gesture::Gesture arg1);
		jboolean save();
		void setOrientationStyle(jint arg0);
		void setSequenceType(jint arg0);
	};
} // namespace android::gesture

