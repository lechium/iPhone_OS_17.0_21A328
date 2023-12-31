//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_source;

@interface GCDTimer : NSObject
{
    NSObject<OS_dispatch_source> *_source;	// 8 = 0x8
    _Bool _repeating;	// 16 = 0x10
    NSDate *_fireDate;	// 24 = 0x18
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 queue:(id)arg2 repeating:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0040000000a6f8b1
+ (id)scheduledTimerWithTimeInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000a6f89a
- (void).cxx_destruct;	// IMP=0x0020000000a6f98c
@property(readonly, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, nonatomic, getter=isRepeating) _Bool repeating; // @synthesize repeating=_repeating;
- (void)invalidate;	// IMP=0x0010000000a6f943
- (void)dealloc;	// IMP=0x0010000000a6f85c
- (id)description;	// IMP=0x0010000000a6f785
- (id)initWithTimeInterval:(double)arg1 queue:(id)arg2 repeating:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0010000000a6f53b

@end

