//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface __NSCFURLLocalStreamTaskWork : NSObject
{
    const char *_static_description;	// 8 = 0x8
    double _timeout;	// 16 = 0x10
    double _timeoutTime;	// 24 = 0x18
    NSError *_recvdError;	// 32 = 0x20
    _Bool _hasBeenCalledBack;	// 40 = 0x28
    _Bool _timerStarted;	// 41 = 0x29
}

- (id)description;	// IMP=0x000000000006a82e

@end

