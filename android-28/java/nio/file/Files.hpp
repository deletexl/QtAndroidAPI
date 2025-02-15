#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
namespace java::io
{
	class BufferedReader;
}
namespace java::io
{
	class BufferedWriter;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JString;
class JClass;
class JObject;
class JString;
namespace java::nio::channels
{
	class FileChannel;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::nio::file
{
	class FileStore;
}
namespace java::nio::file::attribute
{
	class FileTime;
}
namespace java::nio::file::spi
{
	class FileSystemProvider;
}

namespace java::nio::file
{
	class Files : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Files(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Files(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject copy(JObject arg0, JObject arg1, JArray arg2);
		static jlong copy(JObject arg0, java::io::OutputStream arg1);
		static jlong copy(java::io::InputStream arg0, JObject arg1, JArray arg2);
		static JObject createDirectories(JObject arg0, JArray arg1);
		static JObject createDirectory(JObject arg0, JArray arg1);
		static JObject createFile(JObject arg0, JArray arg1);
		static JObject createLink(JObject arg0, JObject arg1);
		static JObject createSymbolicLink(JObject arg0, JObject arg1, JArray arg2);
		static JObject createTempDirectory(JString arg0, JArray arg1);
		static JObject createTempDirectory(JObject arg0, JString arg1, JArray arg2);
		static JObject createTempFile(JString arg0, JString arg1, JArray arg2);
		static JObject createTempFile(JObject arg0, JString arg1, JString arg2, JArray arg3);
		static void _delete(JObject arg0);
		static jboolean deleteIfExists(JObject arg0);
		static jboolean exists(JObject arg0, JArray arg1);
		static JObject find(JObject arg0, jint arg1, JObject arg2, JArray arg3);
		static JObject getAttribute(JObject arg0, JString arg1, JArray arg2);
		static JObject getFileAttributeView(JObject arg0, JClass arg1, JArray arg2);
		static java::nio::file::FileStore getFileStore(JObject arg0);
		static java::nio::file::attribute::FileTime getLastModifiedTime(JObject arg0, JArray arg1);
		static JObject getOwner(JObject arg0, JArray arg1);
		static JObject getPosixFilePermissions(JObject arg0, JArray arg1);
		static jboolean isDirectory(JObject arg0, JArray arg1);
		static jboolean isExecutable(JObject arg0);
		static jboolean isHidden(JObject arg0);
		static jboolean isReadable(JObject arg0);
		static jboolean isRegularFile(JObject arg0, JArray arg1);
		static jboolean isSameFile(JObject arg0, JObject arg1);
		static jboolean isSymbolicLink(JObject arg0);
		static jboolean isWritable(JObject arg0);
		static JObject lines(JObject arg0);
		static JObject lines(JObject arg0, java::nio::charset::Charset arg1);
		static JObject list(JObject arg0);
		static jlong mismatch(JObject arg0, JObject arg1);
		static JObject move(JObject arg0, JObject arg1, JArray arg2);
		static java::io::BufferedReader newBufferedReader(JObject arg0);
		static java::io::BufferedReader newBufferedReader(JObject arg0, java::nio::charset::Charset arg1);
		static java::io::BufferedWriter newBufferedWriter(JObject arg0, JArray arg1);
		static java::io::BufferedWriter newBufferedWriter(JObject arg0, java::nio::charset::Charset arg1, JArray arg2);
		static JObject newByteChannel(JObject arg0, JArray arg1);
		static JObject newByteChannel(JObject arg0, JObject arg1, JArray arg2);
		static JObject newDirectoryStream(JObject arg0);
		static JObject newDirectoryStream(JObject arg0, JString arg1);
		static JObject newDirectoryStream(JObject arg0, JObject arg1);
		static java::io::InputStream newInputStream(JObject arg0, JArray arg1);
		static java::io::OutputStream newOutputStream(JObject arg0, JArray arg1);
		static jboolean notExists(JObject arg0, JArray arg1);
		static JString probeContentType(JObject arg0);
		static JByteArray readAllBytes(JObject arg0);
		static JObject readAllLines(JObject arg0);
		static JObject readAllLines(JObject arg0, java::nio::charset::Charset arg1);
		static JObject readAttributes(JObject arg0, JClass arg1, JArray arg2);
		static JObject readAttributes(JObject arg0, JString arg1, JArray arg2);
		static JString readString(JObject arg0);
		static JString readString(JObject arg0, java::nio::charset::Charset arg1);
		static JObject readSymbolicLink(JObject arg0);
		static JObject setAttribute(JObject arg0, JString arg1, JObject arg2, JArray arg3);
		static JObject setLastModifiedTime(JObject arg0, java::nio::file::attribute::FileTime arg1);
		static JObject setOwner(JObject arg0, JObject arg1);
		static JObject setPosixFilePermissions(JObject arg0, JObject arg1);
		static jlong size(JObject arg0);
		static JObject walk(JObject arg0, JArray arg1);
		static JObject walk(JObject arg0, jint arg1, JArray arg2);
		static JObject walkFileTree(JObject arg0, JObject arg1);
		static JObject walkFileTree(JObject arg0, JObject arg1, jint arg2, JObject arg3);
		static JObject write(JObject arg0, JByteArray arg1, JArray arg2);
		static JObject write(JObject arg0, JObject arg1, JArray arg2);
		static JObject write(JObject arg0, JObject arg1, java::nio::charset::Charset arg2, JArray arg3);
		static JObject writeString(JObject arg0, JString arg1, JArray arg2);
		static JObject writeString(JObject arg0, JString arg1, java::nio::charset::Charset arg2, JArray arg3);
	};
} // namespace java::nio::file

