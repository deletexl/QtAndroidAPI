#pragma once

#include "./Vector.hpp"

class JObject;

namespace java::util
{
	class Stack : public java::util::Vector
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Stack(const char *className, const char *sig, Ts...agv) : java::util::Vector(className, sig, std::forward<Ts>(agv)...) {}
		Stack(QJniObject obj);
		
		// Constructors
		Stack();
		
		// Methods
		jboolean empty() const;
		JObject peek() const;
		JObject pop() const;
		JObject push(JObject arg0) const;
		jint search(JObject arg0) const;
	};
} // namespace java::util

