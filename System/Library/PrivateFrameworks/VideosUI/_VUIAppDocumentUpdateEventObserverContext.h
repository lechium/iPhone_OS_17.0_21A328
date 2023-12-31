//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, UIViewController;

__attribute__((visibility("hidden")))
@interface _VUIAppDocumentUpdateEventObserverContext : NSObject
{
    NSSet *_eventDescriptors;	// 8 = 0x8
    NSMutableDictionary *_refreshTimerByEventDescriptor;	// 16 = 0x10
    CDUnknownBlockType _refreshTimerFiredBlock;	// 24 = 0x18
    UIViewController *_viewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000166206
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType refreshTimerFiredBlock; // @synthesize refreshTimerFiredBlock=_refreshTimerFiredBlock;
@property(retain, nonatomic) NSMutableDictionary *refreshTimerByEventDescriptor; // @synthesize refreshTimerByEventDescriptor=_refreshTimerByEventDescriptor;
@property(copy, nonatomic) NSSet *eventDescriptors; // @synthesize eventDescriptors=_eventDescriptors;
- (void)_cancelAllRefreshTimers;	// IMP=0x0000000000166126
- (void)_cancelRefreshTimers:(id)arg1;	// IMP=0x0000000000165ffc
- (void)_cancelRefreshTimer:(id)arg1;	// IMP=0x0000000000165fe8
- (void)_startRefreshTimer:(id)arg1;	// IMP=0x0000000000165fd4
- (id)_refreshTimerWithRefreshTimeEventDescriptor:(id)arg1;	// IMP=0x0000000000165df0
- (void)updateDescriptorsWithDescriptors:(id)arg1;	// IMP=0x0000000000165aad
- (void)invalidate;	// IMP=0x000000000016575e
- (void)dealloc;	// IMP=0x0000000000165720

@end

