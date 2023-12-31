//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface SSSDisplayLinkObserver : NSObject
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    CDUnknownBlockType _displayLinkObserverHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002574b
@property(copy, nonatomic) CDUnknownBlockType displayLinkObserverHandler; // @synthesize displayLinkObserverHandler=_displayLinkObserverHandler;
- (void)stopObserver;	// IMP=0x00100000000256f4
- (void)_displayLinkHandler:(id)arg1;	// IMP=0x001000000002566b
- (void)startObserver;	// IMP=0x00100000000255b4
- (void)dealloc;	// IMP=0x0010000000025576

@end

