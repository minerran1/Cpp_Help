// {{{RME classifier 'Logical View::HAL Instantiation::Serial Devices::OneWire_Interface::DeviceDrivers::Device-specific drivers::DeviceDS2506'

#ifndef DeviceDS2506_H
#define DeviceDS2506_H

#ifdef PRAGMA
#pragma interface "DeviceDS2506.h"
#endif

#include <serial_comp.h>
#include <OneWireMemoryDevice.h>
class IOVirtual;

// {{{RME tool 'OT::Cpp' property 'HeaderPreface'
// {{{USR

// }}}USR
// }}}RME

class DeviceDS2506 : public OneWireMemoryDevice
{
public:
	// {{{RME tool 'OT::Cpp' property 'PublicDeclarations'
	// {{{USR

	// }}}USR
	// }}}RME

protected:
	// {{{RME tool 'OT::Cpp' property 'ProtectedDeclarations'
	// {{{USR

	// }}}USR
	// }}}RME

private:
	// {{{RME tool 'OT::Cpp' property 'PrivateDeclarations'
	// {{{USR

	// }}}USR
	// }}}RME

protected:
	// {{{RME classAttribute 'CMD_WRITE_MEMORY'
	static const unsigned char CMD_WRITE_MEMORY;
	// }}}RME
	// {{{RME classAttribute 'CMD_WRITE_MEMORY_SIZE'
	static const unsigned int CMD_WRITE_MEMORY_SIZE;
	// }}}RME
	// {{{RME classAttribute 'CMD_READ_STATUS'
	static const unsigned char CMD_READ_STATUS;
	// }}}RME
	// {{{RME classAttribute 'CMD_READ_STATUS_SIZE'
	static unsigned int CMD_READ_STATUS_SIZE;
	// }}}RME
	// {{{RME classAttribute 'CMD_READ_EPROM'
	static const unsigned char CMD_READ_EPROM;
	// }}}RME
	// {{{RME classAttribute 'CMD_READ_EPROM_SIZE'
	static const unsigned int CMD_READ_EPROM_SIZE;
	// }}}RME
	// {{{RME classAttribute 'DS2506_MEMORY_SIZE'
	static const unsigned int DS2506_MEMORY_SIZE;
	// }}}RME
	// {{{RME classAttribute 'DS2506_SCRATCHPAD_SIZE'
	static const unsigned int DS2506_SCRATCHPAD_SIZE;
	// }}}RME
	// {{{RME classAttribute 'CMD_WRITE_STATUS'
	static const unsigned char CMD_WRITE_STATUS;
	// }}}RME
	// {{{RME classAttribute 'CMD_WRITE_STATUS_SIZE'
	static const unsigned int CMD_WRITE_STATUS_SIZE;
	// }}}RME
	// {{{RME classAttribute 'DS2506_PAGE_SIZE'
	static const unsigned int DS2506_PAGE_SIZE;
	// }}}RME
	// {{{RME classAttribute 'DS2506_STATUS_BASE_ADDRESS'
	static const uint16_t DS2506_STATUS_BASE_ADDRESS;
	// }}}RME
	// {{{RME classAttribute 'DS2506_STATUS_REDIRECT_OFFSET'
	static const uint16_t DS2506_STATUS_REDIRECT_OFFSET;
	// }}}RME
	// {{{RME classAttribute 'DS2506_PAGE_NUMBER_SHIFT'
	static const unsigned int DS2506_PAGE_NUMBER_SHIFT;
	// }}}RME
	// {{{RME associationEnd 'm_progPulse'
	IOVirtual * m_progPulse;
	// }}}RME

public:
	// {{{RME tool 'OT::Cpp' property 'GenerateDefaultConstructor'
	DeviceDS2506( void );
	// }}}RME
	// {{{RME tool 'OT::Cpp' property 'GenerateDestructor'
	virtual ~DeviceDS2506( void );
	// }}}RME
	// {{{RME operation 'readMemory(unsigned int,unsigned int)'
	virtual unsigned char * readMemory( unsigned int address, unsigned int length );
	// }}}RME
	// {{{RME operation 'writeMemory(unsigned int,unsigned char*,unsigned int)'
	virtual bool writeMemory( unsigned int address, unsigned char * block, unsigned int length );
	// }}}RME
	// {{{RME operation 'DeviceDS2506(OneWireConnection*,IOVirtual*)'
	DeviceDS2506( OneWireConnection * connection, IOVirtual * progPulse = 0 );
	// }}}RME
};

// {{{RME tool 'OT::Cpp' property 'HeaderEnding'
// {{{USR

// }}}USR
// }}}RME

#endif /* DeviceDS2506_H */

// }}}RME
