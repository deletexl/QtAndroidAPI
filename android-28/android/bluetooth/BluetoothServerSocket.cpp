#include "./BluetoothSocket.hpp"
#include "../../JString.hpp"
#include "./BluetoothServerSocket.hpp"

namespace android::bluetooth
{
	// Fields
	
	// QJniObject forward
	BluetoothServerSocket::BluetoothServerSocket(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::bluetooth::BluetoothSocket BluetoothServerSocket::accept() const
	{
		return callObjectMethod(
			"accept",
			"()Landroid/bluetooth/BluetoothSocket;"
		);
	}
	android::bluetooth::BluetoothSocket BluetoothServerSocket::accept(jint arg0) const
	{
		return callObjectMethod(
			"accept",
			"(I)Landroid/bluetooth/BluetoothSocket;",
			arg0
		);
	}
	void BluetoothServerSocket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JString BluetoothServerSocket::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::bluetooth

