#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::gesture
{
	class GestureLibrary;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace java::io
{
	class File;
}
class JString;

namespace android::gesture
{
	class GestureLibraries : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GestureLibraries(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GestureLibraries(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::gesture::GestureLibrary fromFile(java::io::File arg0);
		static android::gesture::GestureLibrary fromFile(JString arg0);
		static android::gesture::GestureLibrary fromFileDescriptor(android::os::ParcelFileDescriptor arg0);
		static android::gesture::GestureLibrary fromPrivateFile(android::content::Context arg0, JString arg1);
		static android::gesture::GestureLibrary fromRawResource(android::content::Context arg0, jint arg1);
	};
} // namespace android::gesture

