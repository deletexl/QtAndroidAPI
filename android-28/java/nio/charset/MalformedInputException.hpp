#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./CharacterCodingException.hpp"


namespace java::nio::charset
{
	class MalformedInputException : public java::nio::charset::CharacterCodingException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MalformedInputException(const char *className, const char *sig, Ts...agv) : java::nio::charset::CharacterCodingException(className, sig, std::forward<Ts>(agv)...) {}
		MalformedInputException(QAndroidJniObject obj);
		
		// Constructors
		MalformedInputException(jint arg0);
		
		// Methods
		jint getInputLength();
		jstring getMessage();
	};
} // namespace java::nio::charset
