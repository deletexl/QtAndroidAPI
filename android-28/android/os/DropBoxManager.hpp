#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class DropBoxManager_Entry;
}
namespace java::io
{
	class File;
}

namespace android::os
{
	class DropBoxManager : public JObject
	{
	public:
		// Fields
		static jstring ACTION_DROPBOX_ENTRY_ADDED();
		static jstring EXTRA_TAG();
		static jstring EXTRA_TIME();
		static jint IS_EMPTY();
		static jint IS_GZIPPED();
		static jint IS_TEXT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DropBoxManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DropBoxManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addData(jstring arg0, jbyteArray arg1, jint arg2);
		void addFile(jstring arg0, java::io::File arg1, jint arg2);
		void addText(jstring arg0, jstring arg1);
		android::os::DropBoxManager_Entry getNextEntry(jstring arg0, jlong arg1);
		jboolean isTagEnabled(jstring arg0);
	};
} // namespace android::os

