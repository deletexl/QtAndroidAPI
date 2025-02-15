#include "../../JString.hpp"
#include "./WindowManager_BadTokenException.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	WindowManager_BadTokenException::WindowManager_BadTokenException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	WindowManager_BadTokenException::WindowManager_BadTokenException()
		: java::lang::RuntimeException(
			"android.view.WindowManager$BadTokenException",
			"()V"
		) {}
	WindowManager_BadTokenException::WindowManager_BadTokenException(JString arg0)
		: java::lang::RuntimeException(
			"android.view.WindowManager$BadTokenException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::view

