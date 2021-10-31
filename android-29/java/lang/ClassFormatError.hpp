#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class ClassFormatError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClassFormatError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		ClassFormatError(QAndroidJniObject obj);
		
		// Constructors
		ClassFormatError();
		ClassFormatError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

