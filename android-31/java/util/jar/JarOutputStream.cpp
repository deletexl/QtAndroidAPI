#include "../../io/OutputStream.hpp"
#include "./Manifest.hpp"
#include "../zip/ZipEntry.hpp"
#include "./JarOutputStream.hpp"

namespace java::util::jar
{
	// Fields
	
	// QAndroidJniObject forward
	JarOutputStream::JarOutputStream(QAndroidJniObject obj) : java::util::zip::ZipOutputStream(obj) {}
	
	// Constructors
	JarOutputStream::JarOutputStream(java::io::OutputStream arg0)
		: java::util::zip::ZipOutputStream(
			"java.util.jar.JarOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	JarOutputStream::JarOutputStream(java::io::OutputStream arg0, java::util::jar::Manifest arg1)
		: java::util::zip::ZipOutputStream(
			"java.util.jar.JarOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/jar/Manifest;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void JarOutputStream::putNextEntry(java::util::zip::ZipEntry arg0)
	{
		callMethod<void>(
			"putNextEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.object()
		);
	}
} // namespace java::util::jar
