#pragma once

#include "./IllegalFormatException.hpp"

class JString;

namespace java::util
{
	class IllegalFormatWidthException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalFormatWidthException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalFormatWidthException(QJniObject obj);
		
		// Constructors
		IllegalFormatWidthException(jint arg0);
		
		// Methods
		JString getMessage() const;
		jint getWidth() const;
	};
} // namespace java::util

