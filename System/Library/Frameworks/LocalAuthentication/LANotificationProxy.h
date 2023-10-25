//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol LANotificationObserverXPC;

__attribute__((visibility("hidden")))
@interface LANotificationProxy : NSObject
{
    id <LANotificationObserverXPC> _target;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002b5f2
@property(readonly, nonatomic) __weak id <LANotificationObserverXPC> target; // @synthesize target=_target;
- (void)newValue:(id)arg1 oldValue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b53f
- (id)initWithTarget:(id)arg1;	// IMP=0x000000000002b4db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
