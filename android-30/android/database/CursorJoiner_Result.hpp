#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::database
{
	class CursorJoiner_Result : public java::lang::Enum
	{
	public:
		// Fields
		static android::database::CursorJoiner_Result BOTH();
		static android::database::CursorJoiner_Result LEFT();
		static android::database::CursorJoiner_Result RIGHT();
		
		// QJniObject forward
		template<typename ...Ts> explicit CursorJoiner_Result(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		CursorJoiner_Result(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::database::CursorJoiner_Result valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::database

