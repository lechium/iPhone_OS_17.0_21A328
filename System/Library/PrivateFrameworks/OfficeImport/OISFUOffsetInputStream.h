//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SFUInputStream;

__attribute__((visibility("hidden")))
@interface OISFUOffsetInputStream : NSObject
{
    id <SFUInputStream> mInputStream;	// 8 = 0x8
    long long mInitialOffset;	// 16 = 0x10
}

- (id)closeLocalStream;	// IMP=0x0000000000293363
- (void)close;	// IMP=0x000000000029334d
- (void)enableSystemCaching;	// IMP=0x0000000000293337
- (void)disableSystemCaching;	// IMP=0x0000000000293321
- (void)seekToOffset:(long long)arg1;	// IMP=0x0000000000293304
- (_Bool)canSeek;	// IMP=0x00000000002932ee
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000002932d8
- (long long)offset;	// IMP=0x000000000029320b
- (void)dealloc;	// IMP=0x00000000002931d0
- (id)initWithInputStream:(id)arg1 initialOffset:(long long)arg2;	// IMP=0x0000000000293179
- (id)initWithInputStream:(id)arg1;	// IMP=0x0000000000293136

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
