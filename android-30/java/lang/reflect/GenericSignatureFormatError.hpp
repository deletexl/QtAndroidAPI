#pragma once

#include "../ClassFormatError.hpp"

class JString;

namespace java::lang::reflect
{
	class GenericSignatureFormatError : public java::lang::ClassFormatError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GenericSignatureFormatError(const char *className, const char *sig, Ts...agv) : java::lang::ClassFormatError(className, sig, std::forward<Ts>(agv)...) {}
		GenericSignatureFormatError(QJniObject obj);
		
		// Constructors
		GenericSignatureFormatError();
		GenericSignatureFormatError(JString arg0);
		
		// Methods
	};
} // namespace java::lang::reflect

