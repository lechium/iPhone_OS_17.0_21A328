//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _UIMotionEffectEventConsumer;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEventProvider : NSObject
{
    id <_UIMotionEffectEventConsumer> _consumer;	// 8 = 0x8
}

@property id <_UIMotionEffectEventConsumer> consumer; // @synthesize consumer=_consumer;
- (double)slowUpdateIntervalForLogs;	// IMP=0x0000000000ec5f99
- (double)fastUpdateIntervalForLogs;	// IMP=0x0000000000ec5f8b
- (_Bool)wantsSynchronizedUpdates;	// IMP=0x0000000000ec5f83
- (_Bool)shouldLogEvents;	// IMP=0x0000000000ec5f7b
- (id)currentEvent;	// IMP=0x0000000000ec5f73
- (void)setSlowUpdatesEnabled:(_Bool)arg1;	// IMP=0x0000000000ec5f6d
- (void)stopGeneratingEvents;	// IMP=0x0000000000ec5f67
- (void)startGeneratingEvents;	// IMP=0x0000000000ec5f61

@end
