//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct OpaqueAudioConverter;

struct SoundDec_t {
    struct AudioStreamBasicDescription _field1;
    struct AudioStreamBasicDescription _field2;
    int _field3;
    int _field4;
    struct OpaqueAudioConverter *_field5;
    char *_field6;
    int _field7;
    struct AudioStreamPacketDescription _field8;
    char *_field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    unsigned int _field16;
    unsigned int _field17;
};

struct VoiceIOFarEndVersionInfo {
    unsigned char _field1[64];
    unsigned char _field2[64];
    unsigned int _field3;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct tagAPP_RTCP {
    unsigned int _field1;
    char _field2[4];
    int _field3;
    int _field4;
};

struct tagBYE_RTCP {
    unsigned int _field1;
};

struct tagFIR_RTCP {
    unsigned int _field1;
    unsigned short _field2[10];
};

struct tagGenNACK_RTCP {
    struct tagRTCP_FBCOMMON _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct tagHANDLE {
    int _field1;
};

struct tagIPPORT {
    int _field1;
    char _field2[16];
    union {
        unsigned int _field1;
        unsigned char _field2[16];
    } _field3;
    unsigned short _field4;
};

struct tagNACK_RTCP {
    unsigned int _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct tagPLI_RTCP {
    struct tagRTCP_FBCOMMON _field1;
};

struct tagRR_RTCP {
    unsigned int _field1;
    struct tagRTCPRR _field2;
};

struct tagRTCPCOMMON {
    unsigned int :5;
    unsigned int :1;
    unsigned int :2;
    unsigned int :8;
    unsigned short _field1;
};

struct tagRTCPPACKET {
    struct tagRTCPCOMMON _field1;
    union {
        struct tagSR_RTCP _field1;
        struct tagRR_RTCP _field2;
        struct tagSDES_RTCP _field3;
        struct tagBYE_RTCP _field4;
        struct tagAPP_RTCP _field5;
        struct tagFIR_RTCP _field6;
        struct tagNACK_RTCP _field7;
        struct tagPLI_RTCP _field8;
        struct tagSLI_RTCP _field9;
        struct tagGenNACK_RTCP _field10;
    } _field2;
};

struct tagRTCPRR {
    unsigned int _field1;
    unsigned int :8;
    unsigned int :24;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct tagRTCPSDES {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[258];
};

struct tagRTCP_FBCOMMON {
    unsigned int _field1;
    unsigned int _field2;
};

struct tagSDES_RTCP {
    unsigned int _field1;
    struct tagRTCPSDES _field2;
};

struct tagSLI_RTCP {
    struct tagRTCP_FBCOMMON _field1;
    unsigned int _field2;
};

struct tagSR_RTCP {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    struct tagRTCPRR _field7;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
} CDStruct_dd9362d3;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
} CDStruct_ed381b5a;

