//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_data, TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUReadChannelInputStreamAdapter : NSObject
{
    id <TSUReadChannel> _readChannel;	// 8 = 0x8
    NSObject<OS_dispatch_data> *_leftoverData;	// 16 = 0x10
    long long _offset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002c7ae6
- (id)closeLocalStream;	// IMP=0x00000000002c7ade
- (void)enableSystemCaching;	// IMP=0x00000000002c7ad8
- (void)disableSystemCaching;	// IMP=0x00000000002c7ad2
- (void)seekToOffset:(long long)arg1;	// IMP=0x00000000002c79f0
- (_Bool)canSeek;	// IMP=0x00000000002c79e2
- (void)close;	// IMP=0x00000000002c79b0
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000002c723c
- (long long)offset;	// IMP=0x00000000002c7232
- (void)dealloc;	// IMP=0x00000000002c71f4
- (id)initWithReadChannel:(id)arg1;	// IMP=0x00000000002c7179

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

