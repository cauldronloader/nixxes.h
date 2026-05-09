#ifndef _NIXXES_D3D_DRIVER_H_
#define _NIXXES_D3D_DRIVER_H_

struct ID3D12Device;

namespace nx {
    class INxD3DDriver {
    public:
        virtual ~INxD3DDriver() = 0;
    };

    class NxD3D12Driver : public INxD3DDriver {
    public:
        unsigned char Unk8[0x30];
        ID3D12Device *Device;
        unsigned char Unk40[0xD8];
    };
}

#endif // _NIXXES_D3D_DRIVER_H_