//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CRLiOSGestureDispatcherLogger : NSObject
{
    _Bool _gestureSessionStarted;	// 8 = 0x8
    NSMutableDictionary *_gestureLogDictionary;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000265bbc
@property(retain, nonatomic) NSMutableDictionary *gestureLogDictionary; // @synthesize gestureLogDictionary=_gestureLogDictionary;
@property(nonatomic) _Bool gestureSessionStarted; // @synthesize gestureSessionStarted=_gestureSessionStarted;
- (void)endGestureLoggingSession;	// IMP=0x00100000002659ff
- (void)logEndStateForGesture:(id)arg1;	// IMP=0x00100000002654ab
- (void)logGesture:(id)arg1 atUnscaledLocation:(struct CGPoint)arg2;	// IMP=0x0010000000264ef9
- (void)logStartStateForGesture:(id)arg1;	// IMP=0x0010000000264a6a
- (void)startGestureLoggingSession;	// IMP=0x00100000002649f4
@property(nonatomic) _Bool logNextGesture;

@end

