#include <iostream>
using namespace std;

class USBDevice
{
private:
	long m_id;

public:
	USBDevice(long id) : m_id(id){}

	long getID() { return m_id; }

	void plugAndPlay() {}

};


class NetworkDevice
{
private:
	long m_id;

public:
	NetworkDevice(long id) 
		: m_id(id) 
	{}

	long getID() { return m_id; }

	void networking() {}

};


class USBNetworkDevice : public USBDevice, public NetworkDevice
{
public:
	USBNetworkDevice(long usb_id, long net_id)
		: USBDevice(usb_id), NetworkDevice(net_id)
	{}

};


int main()
{
	USBNetworkDevice dev1(5,5);

	dev1.networking();
	dev1.plugAndPlay();


	/* �ΰ� �̻��� class���� ����� �޾��� ��
	   ��ġ�� �Լ��� �Ʒ��� ���� ::���� ������ �� �� �ִ�.*/ 
	dev1.USBDevice::getID();
	dev1.NetworkDevice::getID();

	return 0;
}