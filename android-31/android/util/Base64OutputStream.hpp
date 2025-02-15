#pragma once

#include "../../java/io/FilterOutputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}

namespace android::util
{
	class Base64OutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Base64OutputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		Base64OutputStream(QJniObject obj);
		
		// Constructors
		Base64OutputStream(java::io::OutputStream arg0, jint arg1);
		
		// Methods
		void close() const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace android::util

