#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"


namespace java::io
{
	class CharConversionException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharConversionException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		CharConversionException(QAndroidJniObject obj);
		
		// Constructors
		CharConversionException();
		CharConversionException(jstring arg0);
		
		// Methods
	};
} // namespace java::io

