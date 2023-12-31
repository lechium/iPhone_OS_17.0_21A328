//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IPPBMutableData;

__attribute__((visibility("hidden")))
@interface IPPBDataWriter : NSObject
{
    IPPBMutableData *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000724b
- (_Bool)writeData:(id)arg1;	// IMP=0x0000000000007189
- (unsigned long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000000007103
- (void)writeData:(id)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006f6f
- (void)writeString:(id)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006f60
- (void)writeSfixed64:(long long)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006e83
- (void)writeSfixed32:(int)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006da6
- (void)writeFixed64:(unsigned long long)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006cc9
- (void)writeFixed32:(unsigned int)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006bec
- (void)writeFloat:(float)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006b08
- (void)writeDouble:(double)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006a24
- (void)writeSint64:(long long)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006914
- (void)writeSint32:(int)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006801
- (void)writeBOOL:(_Bool)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006726
- (void)writeUint64:(unsigned long long)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006620
- (void)writeUint32:(unsigned int)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006515
- (void)writeInt64:(long long)arg1 forTag:(unsigned int)arg2;	// IMP=0x000000000000640f
- (void)writeInt32:(int)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000006306
- (id)immutableData;	// IMP=0x00000000000062f8
- (id)initWithInitialCapacity:(unsigned long long)arg1;	// IMP=0x000000000000627b
- (id)init;	// IMP=0x0000000000006210

@end

