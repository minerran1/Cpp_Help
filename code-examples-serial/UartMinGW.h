/*!
 *    @file             $Source: UartMinGW.h $
 *    @brief            Header for UartMinGW Class.
 *
 *    @author           $Author: bill tonnies (tonniesb1) $
 *
 *    @version          $Revision: 1.1 $
 *
 *    @date             $Date: 2015/05/07 13:41:20EDT $
 *
 *    @par Description 
 *                      Implementation of uart for MinGW
 *
 *    @par Copyright
 *                      COPYRIGHT (C) 2014, Jabil
 *
 *    This source code and any compilation or derivative thereof is the sole 
 *    property of Jabil Circuit and is provided pursuant to a Software License 
 *    Agreement. This code is the proprietary information of Jabil Circuit and 
 *    is confidential in nature. Its use and dissemination by any party other 
 *    than Jabil Circuit is strictly limited by the confidential information 
 *    provisions of the Software License Agreement referenced above.
 */

#ifndef UARTMINGW_H_
#define UARTMINGW_H_

#include <windows.h>

#include <IUartPeripheral.h>
#include <fifo.h>

#define RX_BUFFER_SIZE  2048
#define TX_BUFFER_SIZE  2048

namespace HAL
{
#define UART_MINGW_PORT_MAX 8

class UartMinGW : public HAL::IUartPeripheral
{
public:

    /// Construct a Tiva Uart
    /// @param baseAddress The base address of the UART port.
    /// @param uartClk The rate of the clock supplied to the UART module.
    /// @param baud The desired baud rate.
    /// @param config The data format for the port (number of data bits, number of stop bits, and parity).
    /// @note See @c UARTConfigSetExpClk() in the Tivaware API manual for more details
    UartMinGW(char* commPortPtr);
    virtual ~UartMinGW();

    ////////////// IPeripheral Methods///////////////////
    int Init();

    ////////////// IUart Methods ///////////////////

    /// Opens a UART
    void Open();

    /// Closes a UART
    void Close();

    /// Registers a Uart Client
    /// @param client to register
    void Register(IUartClient* client);

    /// Unregisters a Uart Client
    /// @param client to unregister
    void Unregister(IUartClient* client);

    /// Method that indicates space is available on the TX FIFO
    bool TxFifoSpaceAvailable();

    /// Loads a byte into the transmit FIFO
    /// @param byte data to load for SendTxFifo()
    /// @return @c true if byte was loaded into TxFifo
    bool LoadTxFifo(uint8_t txByte);

    /// Begins transmission of txFifo loaded with LoadTxFifo()
    void SendTxFifo();

    /// Indicates that one or more bytes are availbie in the RxFifo
    bool RxFifoDataAvailable();

    /// Reads a byte from the receive FIFO
    /// @return @c true if byte was returned
    bool ReadRxFifo(uint8_t* pRxByte);

    /// Call back method for interrupt wiring
    /// @note DO NOT USE DIRECTLY!
    void OnInterrupt();

    /// Call back method for interrupt wiring
    /// @note DO NOT USE DIRECTLY!
    static void IntHandler(uint32_t portNumber);

    DWORD Receive();
    DWORD Send();

private:
    char*                   commPortNamePtr;
    volatile HANDLE         commPortHandle;
    HANDLE                  initCompleteEvent;
    HANDLE                  txDataReady;
    HANDLE                  terminateEvent;
    HANDLE                  receiveThreadHandle;
    HANDLE                  sendThreadHandle;
    CRITICAL_SECTION        txCriticalSection;
    IUartClient*            pClient;
    uint8_t                 rxBuffer[RX_BUFFER_SIZE];
    Utility::Fifo<uint8_t>  rxFifo;
    uint8_t                 txBuffer[TX_BUFFER_SIZE];
    Utility::Fifo<uint8_t>  txFifo;
    OVERLAPPED              readOverlapped;
    OVERLAPPED              writeOverlapped;
};

} /* namespace HAL */

#endif /* UARTMINGW_H_ */
