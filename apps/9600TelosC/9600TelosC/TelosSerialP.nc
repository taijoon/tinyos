/* Edited by Lodic (Taijoon Choi)
  * Date : 2010.1.14
  */

module TelosSerialP {
  provides interface StdControl;
  provides interface Msp430UartConfigure;
  uses interface Resource;
}
implementation {

#if DEFAULT_BAUDRATE == 9600
  msp430_uart_union_config_t msp430_uart_telos_config = { {ubr: UBR_1MHZ_9600, umctl: UMCTL_1MHZ_9600, ssel: 0x02, pena: 0, pev: 0, spb: 0, clen: 1, listen: 0, mm: 0, ckpl: 0, urxse: 0, urxeie: 1, urxwie: 0, utxe : 1, urxe : 1} };
#elif DEFAULT_BAUDRATE == 19200
  msp430_uart_union_config_t msp430_uart_telos_config = { {ubr: UBR_1MHZ_19200, umctl: UMCTL_1MHZ_19100, ssel: 0x02, pena: 0, pev: 0, spb: 0, clen: 1, listen: 0, mm: 0, ckpl: 0, urxse: 0, urxeie: 1, urxwie: 0, utxe : 1, urxe : 1} };
#elif DEFAULT_BAUDRATE == 38400
  msp430_uart_union_config_t msp430_uart_telos_config = { {ubr: UBR_1MHZ_38400, umctl: UMCTL_1MHZ_38400, ssel: 0x02, pena: 0, pev: 0, spb: 0, clen: 1, listen: 0, mm: 0, ckpl: 0, urxse: 0, urxeie: 1, urxwie: 0, utxe : 1, urxe : 1} };
#elif DEFAULT_BAUDRATE == 57600
  msp430_uart_union_config_t msp430_uart_telos_config = { {ubr: UBR_1MHZ_57600, umctl: UMCTL_1MHZ_57600, ssel: 0x02, pena: 0, pev: 0, spb: 0, clen: 1, listen: 0, mm: 0, ckpl: 0, urxse: 0, urxeie: 1, urxwie: 0, utxe : 1, urxe : 1} };
#elif DEFAULT_BAUDRATE == 115200
  msp430_uart_union_config_t msp430_uart_telos_config = { {ubr: UBR_1MHZ_115200, umctl: UMCTL_1MHZ_115200, ssel: 0x02, pena: 0, pev: 0, spb: 0, clen: 1, listen: 0, mm: 0, ckpl: 0, urxse: 0, urxeie: 1, urxwie: 0, utxe : 1, urxe : 1} };
#else
#warning "*** NOT DEFINE DEFAULT_BAUDRATE ***"
 msp430_uart_union_config_t msp430_uart_telos_config = { {
  ubr     :	UBR_32KHZ_9600,
  umctl   :	UMCTL_32KHZ_9600,
  ucmode  :	0,			// uart
  ucspb   :	0,			// one stop
  uc7bit  :	0,			// 8 bit
  ucpar   :	0,			// odd parity (but no parity)
  ucpen   :	0,			// parity disabled
  ucrxeie :	0,			// err int off
  ucssel  :	1,			// smclk
  utxe    :	1,			// enable tx
  urxe    :	1,			// enable rx
} };

#endif

  command error_t StdControl.start(){
    return call Resource.immediateRequest();
  }
  command error_t StdControl.stop(){
    call Resource.release();
    return SUCCESS;
  }
  event void Resource.granted(){}

  async command msp430_uart_union_config_t* Msp430UartConfigure.getConfig() {
    return &msp430_uart_telos_config;
  }
  
}
