//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC13SoundAnalysis17DecoderByNSCoding : NSCoder
{
    MISSING_TYPE *decoder;	// 0 = 0x0
    MISSING_TYPE *decodedByteBuffers;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000075089
- (id)init;	// IMP=0x0000000000076205
- (CDStruct_3800d160)decodeCMTimeMappingForKey:(id)arg1;	// IMP=0x00000000000761d2
- (CDStruct_e83c9415)decodeCMTimeRangeForKey:(id)arg1;	// IMP=0x00000000000760fc
- (CDStruct_1b6d18a9)decodeCMTimeForKey:(id)arg1;	// IMP=0x0000000000076034
- (float)decodeFloatForKey:(id)arg1;	// IMP=0x0000000000075fbe
- (double)decodeDoubleForKey:(id)arg1;	// IMP=0x0000000000075f48
- (int)decodeIntForKey:(id)arg1;	// IMP=0x0000000000075ec6
- (long long)decodeIntegerForKey:(id)arg1;	// IMP=0x0000000000075e42
- (long long)decodeInt64ForKey:(id)arg1;	// IMP=0x0000000000075e0f
- (int)decodeInt32ForKey:(id)arg1;	// IMP=0x0000000000075ddc
- (_Bool)decodeBoolForKey:(id)arg1;	// IMP=0x0000000000075d6e
- (id)decodeObjectForKey:(id)arg1;	// IMP=0x0000000000075c88
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(long long *)arg2;	// IMP=0x0000000000075bcb
- (_Bool)containsValueForKey:(id)arg1;	// IMP=0x00000000000758f3
@property(nonatomic, readonly) _Bool allowsKeyedCoding;
- (void)dealloc;	// IMP=0x000000000007506c

@end

