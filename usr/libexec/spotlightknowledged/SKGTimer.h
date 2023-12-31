//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface SKGTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;	// 8 = 0x8
    long long _interval;	// 16 = 0x10
    unsigned long long _leeway;	// 24 = 0x18
    _Bool _suspended;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000005cb81
- (void)dealloc;	// IMP=0x001000000005cafc
- (_Bool)isValid;	// IMP=0x001000000005caba
- (void)suspend;	// IMP=0x001000000005ca88
- (void)start;	// IMP=0x001000000005ca2f
- (void)reset;	// IMP=0x001000000005c9ba
- (id)initWithTimeIntervalSinceNow:(double)arg1 tolerance:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x001000000005c7ea

@end

