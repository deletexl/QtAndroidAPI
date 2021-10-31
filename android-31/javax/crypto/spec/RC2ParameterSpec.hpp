#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class RC2ParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RC2ParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RC2ParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		RC2ParameterSpec(jint arg0);
		RC2ParameterSpec(jint arg0, jbyteArray arg1);
		RC2ParameterSpec(jint arg0, jbyteArray arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getEffectiveKeyBits();
		jbyteArray getIV();
		jint hashCode();
	};
} // namespace javax::crypto::spec
