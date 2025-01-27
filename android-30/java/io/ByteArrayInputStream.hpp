#pragma once

#include "./InputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}

namespace java::io
{
	class ByteArrayInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ByteArrayInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		ByteArrayInputStream(QJniObject obj);
		
		// Constructors
		ByteArrayInputStream(JByteArray arg0);
		ByteArrayInputStream(JByteArray arg0, jint arg1, jint arg2);
		
		// Methods
		jint available() const;
		void close() const;
		void mark(jint arg0) const;
		jboolean markSupported() const;
		jint read() const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		JByteArray readAllBytes() const;
		jint readNBytes(JByteArray arg0, jint arg1, jint arg2) const;
		void reset() const;
		jlong skip(jlong arg0) const;
		jlong transferTo(java::io::OutputStream arg0) const;
	};
} // namespace java::io

