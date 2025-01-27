#include "../../JByteArray.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./Cipher.hpp"
#include "./CipherOutputStream.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	CipherOutputStream::CipherOutputStream(QJniObject obj) : java::io::FilterOutputStream(obj) {}
	
	// Constructors
	CipherOutputStream::CipherOutputStream(java::io::OutputStream arg0, javax::crypto::Cipher arg1)
		: java::io::FilterOutputStream(
			"javax.crypto.CipherOutputStream",
			"(Ljava/io/OutputStream;Ljavax/crypto/Cipher;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void CipherOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void CipherOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void CipherOutputStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void CipherOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void CipherOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace javax::crypto

