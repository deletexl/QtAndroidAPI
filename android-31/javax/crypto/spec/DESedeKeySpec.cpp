#include "./DESedeKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	jint DESedeKeySpec::DES_EDE_KEY_LEN()
	{
		return getStaticField<jint>(
			"javax.crypto.spec.DESedeKeySpec",
			"DES_EDE_KEY_LEN"
		);
	}
	
	// QAndroidJniObject forward
	DESedeKeySpec::DESedeKeySpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DESedeKeySpec::DESedeKeySpec(jbyteArray arg0)
		: JObject(
			"javax.crypto.spec.DESedeKeySpec",
			"([B)V",
			arg0
		) {}
	DESedeKeySpec::DESedeKeySpec(jbyteArray arg0, jint arg1)
		: JObject(
			"javax.crypto.spec.DESedeKeySpec",
			"([BI)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean DESedeKeySpec::isParityAdjusted(jbyteArray arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"javax.crypto.spec.DESedeKeySpec",
			"isParityAdjusted",
			"([BI)Z",
			arg0,
			arg1
		);
	}
	jbyteArray DESedeKeySpec::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace javax::crypto::spec

