#pragma once

#include "./Error.hpp"

namespace java::lang
{
	class ThreadDeath : public java::lang::Error
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ThreadDeath(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		ThreadDeath(QJniObject obj);
		
		// Constructors
		ThreadDeath();
		
		// Methods
	};
} // namespace java::lang

