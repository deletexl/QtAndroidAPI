#pragma once

#include "../../lang/IllegalArgumentException.hpp"

class JString;

namespace java::util::regex
{
	class PatternSyntaxException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PatternSyntaxException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		PatternSyntaxException(QAndroidJniObject obj);
		
		// Constructors
		PatternSyntaxException(JString arg0, JString arg1, jint arg2);
		
		// Methods
		JString getDescription();
		jint getIndex();
		JString getMessage();
		JString getPattern();
	};
} // namespace java::util::regex

