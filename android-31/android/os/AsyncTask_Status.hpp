#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::os
{
	class AsyncTask_Status : public java::lang::Enum
	{
	public:
		// Fields
		static android::os::AsyncTask_Status FINISHED();
		static android::os::AsyncTask_Status PENDING();
		static android::os::AsyncTask_Status RUNNING();
		
		// QJniObject forward
		template<typename ...Ts> explicit AsyncTask_Status(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AsyncTask_Status(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::AsyncTask_Status valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::os

