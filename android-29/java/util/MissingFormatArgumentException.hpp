#pragma once

#include "./IllegalFormatException.hpp"

class JString;

namespace java::util
{
	class MissingFormatArgumentException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MissingFormatArgumentException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		MissingFormatArgumentException(QJniObject obj);
		
		// Constructors
		MissingFormatArgumentException(JString arg0);
		
		// Methods
		JString getFormatSpecifier() const;
		JString getMessage() const;
	};
} // namespace java::util

