typedef struct BluetoothDevice {
    void (*init)(void);
    void (*sendByte)(uint8_t);
    void (*sendBuff)(uint8_t*, uint8_t)
} BluetoothDevice;
