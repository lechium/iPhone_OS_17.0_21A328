//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOrderedSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LTPowerLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_loggerQueue;	// 8 = 0x8
    NSOrderedSet *_requestTypeSet;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0060000000055af6
- (void).cxx_destruct;	// IMP=0x0000000000055b8f
@property(retain) NSOrderedSet *requestTypeSet; // @synthesize requestTypeSet=_requestTypeSet;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;
- (void)logTranslateRequestEvent:(id)arg1 requestType:(id)arg2 routeType:(long long)arg3;	// IMP=0x0000000000055b4b
- (id)init;	// IMP=0x0000000000055a05

@end

