//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol Transmitter;

@interface APDUMapping : NSObject
{
    NSObject<Transmitter> *_transmitter;	// 8 = 0x8
    float _wt;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000002b3d
- (id)secure:(id)arg1 APDU:(id)arg2;	// IMP=0x00100000000029d7
- (void)waitingTime:(unsigned char)arg1;	// IMP=0x00100000000029ae
- (id)transmit:(id)arg1;	// IMP=0x001000000000286a
- (id)transmit:(id)arg1 maxPayload:(unsigned long long)arg2 outTimeout:(id)arg3 inTimeout:(id)arg4 transmitted:(CDUnknownBlockType)arg5;	// IMP=0x001000000000255d
- (id)initWithTransmitter:(id)arg1 wt:(float)arg2;	// IMP=0x00100000000024e9
- (id)initWithTransmitter:(id)arg1;	// IMP=0x001000000000247d

@end

