//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface OISFUMemoryDataRepresentation
{
    NSData *mData;	// 32 = 0x20
}

- (unsigned long long)readIntoData:(id)arg1;	// IMP=0x0000000000292781
- (_Bool)hasSameLocationAs:(id)arg1;	// IMP=0x000000000029271f
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;	// IMP=0x000000000029270d
- (id)bufferedInputStream;	// IMP=0x00000000002926cf
- (id)inputStream;	// IMP=0x00000000002926bd
- (long long)dataLength;	// IMP=0x00000000002926a0
- (_Bool)isReadable;	// IMP=0x0000000000292698
- (id)data;	// IMP=0x0000000000292687
- (void)dealloc;	// IMP=0x0000000000292645
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x000000000029246a
- (id)initWithDataNoCopy:(id)arg1;	// IMP=0x0000000000292413
- (id)initWithData:(id)arg1;	// IMP=0x00000000002923b5

@end

