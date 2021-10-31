#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Enum.hpp"


namespace java::lang::annotation
{
	class RetentionPolicy : public java::lang::Enum
	{
	public:
		// Fields
		static java::lang::annotation::RetentionPolicy CLASS();
		static java::lang::annotation::RetentionPolicy RUNTIME();
		static java::lang::annotation::RetentionPolicy SOURCE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RetentionPolicy(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RetentionPolicy(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::annotation::RetentionPolicy valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::lang::annotation
