#pragma once

#include "../../lang/IllegalArgumentException.hpp"

class JString;

namespace java::nio::charset
{
	class UnsupportedCharsetException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnsupportedCharsetException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedCharsetException(QJniObject obj);
		
		// Constructors
		UnsupportedCharsetException(JString arg0);
		
		// Methods
		JString getCharsetName() const;
	};
} // namespace java::nio::charset

