//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface APSProtocolMessage : NSObject
{
    int _command;	// 8 = 0x8
    NSMutableData *_data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000053b07
- (id)copyMessageData;	// IMP=0x0010000000053a7b
- (void)appendEightByteItem:(unsigned char)arg1 bytes:(unsigned long long)arg2;	// IMP=0x0010000000053a2c
- (void)appendFourByteItem:(unsigned char)arg1 bytes:(unsigned int)arg2;	// IMP=0x00100000000539df
- (void)appendTwoByteItem:(unsigned char)arg1 bytes:(unsigned short)arg2;	// IMP=0x0010000000053994
- (void)appendOneByteItem:(unsigned char)arg1 byte:(unsigned char)arg2;	// IMP=0x0010000000053949
- (void)appendItem:(unsigned char)arg1 string:(id)arg2;	// IMP=0x00100000000538f2
- (void)appendItem:(unsigned char)arg1 data:(id)arg2;	// IMP=0x0010000000053873
- (void)_appendEightBytes:(unsigned long long)arg1;	// IMP=0x0010000000053842
- (void)_appendFourBytes:(unsigned int)arg1;	// IMP=0x0010000000053813
- (void)_appendTwoBytes:(unsigned short)arg1;	// IMP=0x00100000000537e1
- (void)_appendOneByte:(unsigned char)arg1;	// IMP=0x00100000000537b4
- (id)initWithCommand:(int)arg1;	// IMP=0x0010000000053753

@end

