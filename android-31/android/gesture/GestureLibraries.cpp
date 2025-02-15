#include "../content/Context.hpp"
#include "./GestureLibrary.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../java/io/File.hpp"
#include "../../JString.hpp"
#include "./GestureLibraries.hpp"

namespace android::gesture
{
	// Fields
	
	// QJniObject forward
	GestureLibraries::GestureLibraries(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::gesture::GestureLibrary GestureLibraries::fromFile(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFile",
			"(Ljava/io/File;)Landroid/gesture/GestureLibrary;",
			arg0.object()
		);
	}
	android::gesture::GestureLibrary GestureLibraries::fromFile(JString arg0)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFile",
			"(Ljava/lang/String;)Landroid/gesture/GestureLibrary;",
			arg0.object<jstring>()
		);
	}
	android::gesture::GestureLibrary GestureLibraries::fromFileDescriptor(android::os::ParcelFileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;)Landroid/gesture/GestureLibrary;",
			arg0.object()
		);
	}
	android::gesture::GestureLibrary GestureLibraries::fromPrivateFile(android::content::Context arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromPrivateFile",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/gesture/GestureLibrary;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::gesture::GestureLibrary GestureLibraries::fromRawResource(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromRawResource",
			"(Landroid/content/Context;I)Landroid/gesture/GestureLibrary;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::gesture

