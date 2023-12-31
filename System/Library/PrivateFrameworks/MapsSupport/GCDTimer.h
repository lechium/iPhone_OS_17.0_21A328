//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GCDTimer : NSObject
{
    NSObject<OS_dispatch_source> *_source;	// 8 = 0x8
    _Bool _repeating;	// 16 = 0x10
    NSDate *_fireDate;	// 24 = 0x18
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 queue:(id)arg2 repeating:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x006000000000388f
+ (id)scheduledTimerWithTimeInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0060000000003878
- (void).cxx_destruct;	// IMP=0x000000000000396a
@property(readonly, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, nonatomic, getter=isRepeating) _Bool repeating; // @synthesize repeating=_repeating;
- (void)invalidate;	// IMP=0x0000000000003921
- (void)dealloc;	// IMP=0x000000000000383a
- (id)description;	// IMP=0x0000000000003763
- (id)initWithTimeInterval:(double)arg1 queue:(id)arg2 repeating:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000000034c1

@end

