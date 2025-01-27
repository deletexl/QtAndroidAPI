#include "../../../JByteArray.hpp"
#include "../../io/OutputStream.hpp"
#include "./CRC32.hpp"
#include "./GZIPOutputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	// QJniObject forward
	GZIPOutputStream::GZIPOutputStream(QJniObject obj) : java::util::zip::DeflaterOutputStream(obj) {}
	
	// Constructors
	GZIPOutputStream::GZIPOutputStream(java::io::OutputStream arg0)
		: java::util::zip::DeflaterOutputStream(
			"java.util.zip.GZIPOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	GZIPOutputStream::GZIPOutputStream(java::io::OutputStream arg0, jboolean arg1)
		: java::util::zip::DeflaterOutputStream(
			"java.util.zip.GZIPOutputStream",
			"(Ljava/io/OutputStream;Z)V",
			arg0.object(),
			arg1
		) {}
	GZIPOutputStream::GZIPOutputStream(java::io::OutputStream arg0, jint arg1)
		: java::util::zip::DeflaterOutputStream(
			"java.util.zip.GZIPOutputStream",
			"(Ljava/io/OutputStream;I)V",
			arg0.object(),
			arg1
		) {}
	GZIPOutputStream::GZIPOutputStream(java::io::OutputStream arg0, jint arg1, jboolean arg2)
		: java::util::zip::DeflaterOutputStream(
			"java.util.zip.GZIPOutputStream",
			"(Ljava/io/OutputStream;IZ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	void GZIPOutputStream::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	void GZIPOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

