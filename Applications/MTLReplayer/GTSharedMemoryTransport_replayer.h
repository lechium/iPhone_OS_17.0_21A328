//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTBaseStreamTransport_replayer, NSMutableArray, NSURL;

@interface GTSharedMemoryTransport_replayer
{
    void *_outgoingShmem;	// 232 = 0xe8
    void *_incomingShmem;	// 240 = 0xf0
    void *_masterSMRegion;	// 248 = 0xf8
    void *_outgoingBuffer;	// 256 = 0x100
    void *_incomingBuffer;	// 264 = 0x108
    GTBaseStreamTransport_replayer *_relayTransport;	// 272 = 0x110
    CDUnknownFunctionPointerType _consumeBytesIMP;	// 280 = 0x118
    SEL _consumeBytesSEL;	// 288 = 0x120
    unsigned int _currentPacketBytesLeft;	// 296 = 0x128
    int _mode;	// 300 = 0x12c
    _Bool _deferred;	// 304 = 0x130
    NSMutableArray *_bufferedMessages;	// 312 = 0x138
    char _sendName[64];	// 320 = 0x140
    char _receiveName[64];	// 384 = 0x180
    unsigned long long _sm_region_size_small;	// 448 = 0x1c0
    unsigned long long _sm_region_size_large;	// 456 = 0x1c8
}

@property(readonly, nonatomic) _Bool deferred; // @synthesize deferred=_deferred;
- (void)_dequeueIncomingMessages;	// IMP=0x0010000000056eff
- (void)_dequeuePacket;	// IMP=0x0010000000056dfc
- (void)_relayPacket;	// IMP=0x0010000000056d85
- (void)_accumulateMessageBytes;	// IMP=0x0010000000056d44
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0010000000056cdb
- (void)_copyFromSM:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0010000000056c83
- (void)_updateReaderOffset:(unsigned long long)arg1;	// IMP=0x0010000000056c62
- (unsigned int)_nextMessageSerial;	// IMP=0x0010000000056c45
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0010000000056b86
- (void)_waitEAGAIN;	// IMP=0x0010000000056b38
- (void)_copyToSM:(const void *)arg1 size:(long long)arg2;	// IMP=0x0010000000056add
- (unsigned long long)_computeBytesAvailableToRead;	// IMP=0x0010000000056a88
- (unsigned long long)_computeBytesAvailableToWrite;	// IMP=0x0010000000056a35
- (void)_invalidate;	// IMP=0x00100000000569e4
- (_Bool)connected;	// IMP=0x00100000000569cf
- (id)connect;	// IMP=0x0010000000056960
- (_Bool)_clientConnect:(id *)arg1;	// IMP=0x0010000000056834
- (_Bool)_serverConnect:(id *)arg1;	// IMP=0x0010000000056709
- (_Bool)_createAndRunSources:(id *)arg1;	// IMP=0x00100000000565bd
- (void)_setupIOBuffers;	// IMP=0x0010000000056583
- (_Bool)_openSMRegion:(struct sm_region_header **)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 error:(id *)arg4;	// IMP=0x001000000005641e
- (_Bool)_initializeSMRegion:(struct sm_region_header **)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 error:(id *)arg4;	// IMP=0x00100000000562eb
- (void)_tearDownSharedMemory;	// IMP=0x001000000005620d
- (void *)_mapSharedMemoryFile:(int)arg1 size:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000056086
- (unsigned long long)_calculateVMRegionMapSize:(unsigned long long)arg1;	// IMP=0x001000000005607c
- (id)_getSharedMemoryNameWithSuffix:(id)arg1;	// IMP=0x0010000000056018
- (_Bool)send:(id)arg1 inReplyTo:(id)arg2 error:(id *)arg3 replyQueue:(id)arg4 timeout:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000055f3a
- (void)setRelayTransport:(id)arg1;	// IMP=0x0010000000055eeb
@property(retain, nonatomic) NSURL *url; // @dynamic url;
- (void)dealloc;	// IMP=0x0010000000055c68
- (id)initWithMode:(int)arg1 initialMessageSerial:(unsigned int)arg2;	// IMP=0x0010000000055ae5
- (id)initWithMode:(int)arg1;	// IMP=0x0010000000055ad1
- (id)init;	// IMP=0x0010000000055aa6

@end

