//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class MPMusicPlayerApplicationController;

__attribute__((visibility("hidden")))
@interface _MPMusicPlayerQueueItemsProxy : NSArray
{
    MPMusicPlayerApplicationController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000010df5e
@property(readonly, nonatomic) __weak MPMusicPlayerApplicationController *controller; // @synthesize controller=_controller;
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010de45
- (unsigned long long)count;	// IMP=0x000000000010de0b
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010de00
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010ddf5
- (id)initWithController:(id)arg1;	// IMP=0x000000000010dd8e

@end

