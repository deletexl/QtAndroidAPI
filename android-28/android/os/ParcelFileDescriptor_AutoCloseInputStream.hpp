#pragma once

#include "../../java/io/FileInputStream.hpp"

class JByteArray;
namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::os
{
	class ParcelFileDescriptor_AutoCloseInputStream : public java::io::FileInputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ParcelFileDescriptor_AutoCloseInputStream(const char *className, const char *sig, Ts...agv) : java::io::FileInputStream(className, sig, std::forward<Ts>(agv)...) {}
		ParcelFileDescriptor_AutoCloseInputStream(QJniObject obj);
		
		// Constructors
		ParcelFileDescriptor_AutoCloseInputStream(android::os::ParcelFileDescriptor arg0);
		
		// Methods
		void close() const;
		jint read() const;
		jint read(JByteArray arg0) const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace android::os

