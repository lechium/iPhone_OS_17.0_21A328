//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DNDEventBehaviorResolutionService, NSString, TUCallProviderManager;

@interface CSDIncomingCallFilterDataSource : NSObject
{
    DNDEventBehaviorResolutionService *_behaviorResolutionService;	// 8 = 0x8
    TUCallProviderManager *_callProviderManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000918cb
@property(readonly, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(readonly, nonatomic) DNDEventBehaviorResolutionService *behaviorResolutionService; // @synthesize behaviorResolutionService=_behaviorResolutionService;
- (_Bool)isDestinationIDAllowedThroughDoNotDisturb:(id)arg1 providerIdentifier:(id)arg2;	// IMP=0x0010000000091532
@property(readonly, copy, nonatomic) NSString *networkCountryCode;
- (void)setFilterBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000914c7
- (id)_callFilterIdentifier;	// IMP=0x0010000000091474
- (void)dealloc;	// IMP=0x0010000000091416
- (id)init;	// IMP=0x0010000000091387

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

