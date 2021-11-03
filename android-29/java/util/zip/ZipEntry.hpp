#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;
namespace java::nio::file::attribute
{
	class FileTime;
}
namespace java::time
{
	class LocalDateTime;
}

namespace java::util::zip
{
	class ZipEntry : public JObject
	{
	public:
		// Fields
		static jint DEFLATED();
		static jint STORED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZipEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZipEntry(QAndroidJniObject obj);
		
		// Constructors
		ZipEntry(JString arg0);
		ZipEntry(java::util::zip::ZipEntry &arg0);
		
		// Methods
		JObject clone();
		JString getComment();
		jlong getCompressedSize();
		jlong getCrc();
		java::nio::file::attribute::FileTime getCreationTime();
		JByteArray getExtra();
		java::nio::file::attribute::FileTime getLastAccessTime();
		java::nio::file::attribute::FileTime getLastModifiedTime();
		jint getMethod();
		JString getName();
		jlong getSize();
		jlong getTime();
		java::time::LocalDateTime getTimeLocal();
		jint hashCode();
		jboolean isDirectory();
		void setComment(JString arg0);
		void setCompressedSize(jlong arg0);
		void setCrc(jlong arg0);
		java::util::zip::ZipEntry setCreationTime(java::nio::file::attribute::FileTime arg0);
		void setExtra(JByteArray arg0);
		java::util::zip::ZipEntry setLastAccessTime(java::nio::file::attribute::FileTime arg0);
		java::util::zip::ZipEntry setLastModifiedTime(java::nio::file::attribute::FileTime arg0);
		void setMethod(jint arg0);
		void setSize(jlong arg0);
		void setTime(jlong arg0);
		void setTimeLocal(java::time::LocalDateTime arg0);
		JString toString();
	};
} // namespace java::util::zip

