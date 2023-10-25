//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface DataView : NSObject
{
    NSData *_buffer;	// 8 = 0x8
    NSMutableData *_mutableBuffer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006e9e
- (void)setUint16:(unsigned short)arg1 at:(unsigned long long)arg2;	// IMP=0x0010000000006e3a
- (unsigned short)uint16:(unsigned long long)arg1;	// IMP=0x0010000000006dcf
- (void)setUint8:(unsigned char)arg1 at:(unsigned long long)arg2;	// IMP=0x0010000000006d6c
- (unsigned char)uint8:(unsigned long long)arg1;	// IMP=0x0010000000006d03
@property(readonly) NSMutableData *mutableBuffer;
@property(readonly) NSData *buffer;
- (id)initWithData:(id)arg1;	// IMP=0x0010000000006c1d
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x0010000000006bad

@end
