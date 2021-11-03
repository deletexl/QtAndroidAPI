#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::bluetooth
{
	class BluetoothAdapter;
}
namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::bluetooth
{
	class BluetoothGattServer;
}
namespace android::bluetooth
{
	class BluetoothGattServerCallback;
}
namespace android::content
{
	class Context;
}

namespace android::bluetooth
{
	class BluetoothManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::bluetooth::BluetoothAdapter getAdapter();
		JObject getConnectedDevices(jint arg0);
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0, jint arg1);
		JObject getDevicesMatchingConnectionStates(jint arg0, JIntArray arg1);
		android::bluetooth::BluetoothGattServer openGattServer(android::content::Context arg0, android::bluetooth::BluetoothGattServerCallback arg1);
	};
} // namespace android::bluetooth

